%{
#include <iostream>
#include <vector>
#include "lang.h"
#include <cstring>
#include <cstdio>

using namespace std;

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();

vector<Parameter> globalParams;
class IdList ids;
string scope = "global";
string altscope;
vector<int> intVals;
vector<float> floatVals;
vector<char> charVals;
vector<bool> boolVals;
vector<Value> params;

void yyerror(const char * s);
%}
%union {
     char* string;
     int integer;
     int boolean;
     char character;
     float floatnum;
     class AST* ASTNode;
     class Parameter* param;
     class Variable* var;
}

%token ARRAY_ELEMENT CLASS_VAR CLASS_METHOD CLASS CONST
%token NEQ GT GEQ LT LEQ AND OR NOT
%token IF ELSE WHILE FOR SWITCH CASE
%token ENTRY EXIT MAIN FNENTRY FNEXIT BREAK DEFAULT USRDEF GLOBALVAR GLOBALFUNC RETURN PRINT
%token<string> ID TYPE EVAL TYPEOF STRING
%token<integer> INT
%token<character> CHAR
%token<floatnum> FLOAT
%token<boolean> BOOL

%left OR 
%left AND
%left NOT
%left EQ NEQ
%left LEQ GEQ LT GT

%left '+' '-'
%left '*' '/' '%' 

%start program

%type <ASTNode> arithm_expr bool_expr expression
%type <param> parameter
%type <var> fn_call

%%

program: ENTRY USRDEF user_defined_types GLOBALVAR global_variables GLOBALFUNC global_functions MAIN { scope = "main"; } '{' block '}' EXIT {printf("Program is correct!\n");}
       ;

user_defined_types: /* define rules for user defined types */
                  | user_defined_types user_defined_type
                  ;

user_defined_type: CLASS ID { scope = $2; } '{' field_variables field_functions '}' ';' {
                        UserDefinedType type($2);
                        ids.addUsrDef(type);
                        scope = "global";
}
                 ;

field_variables: /*empty*/ {}
               | field_variables variable_declaration {  }
	          ;

field_functions: /*empty*/ { }
               | field_functions function_declaration { }
	       ;

function_declaration: FNENTRY TYPE ID  {    altscope = scope; 
                                            Function func($3, $2, globalParams, altscope); 
                                            ids.addFunc(func); 
                                            globalParams.clear();  
                                            scope = $3; 
                                        } 
                        '(' parameter_list ')' '{' block '}' {                                          
                                            scope = altscope;
                        } 
                        ;
	       

global_variables: 
                  | global_variables variable_declaration
                  | global_variables array_declaration
                  | global_variables class_var_declaration
                  ;

global_functions: 
                | global_functions function_declaration
                ;

parameter_list:  {}
               | parameter { } 
               | parameter_list ',' parameter  { } 
               ;


parameter: TYPE ID  { globalParams.push_back(Parameter($2, $1));} 
         | CONST TYPE ID { 
            Parameter param($3, $2);
            param.isConst = true; 
            globalParams.push_back(param);
         }
        ;

variable_declaration: TYPE ID ';' {
                        if( ids.exists($2) ){
                            printf("Variable already exists.");
                            return 1;
                        } else {
                            Value val($1);
                            Variable var($2, val);
                            var.scope = scope;
                            ids.addVar(var);
                        }                        
                    }
                    | TYPE ID '=' CHAR ';' {
                        string type = "char";
                        if( ids.exists($2) ){
                            printf("Variable already exists.");
                            return 1;
                        } else if ($1 == type){
                            Value val(type);
                            val.isCharSet = true;
                            val.charVal = $4;
                            Variable var($2, val);
                            var.scope = scope;
                            ids.addVar(var);
                            printf("Expr value: %c", val.charVal);
                        }  else {
                            printf("Different types.16");
                            return 1;
                        }                     
                    }
                    | TYPE ID '=' STRING ';' {
                        string type = "string";
                        if( ids.exists($2) ){
                            printf("Variable already exists.");
                            return 1;
                        } else if ($1 == type){
                            Value val(type);
                            val.isStringSet = true;
                            val.stringVal = $4;
                            Variable var($2, val);
                            var.scope = scope;
                            ids.addVar(var);
                        }  else {
                            printf("Different types.15");
                            return 1;
                        }                     
                    }
                    | TYPE ID '=' expression ';' {
                        if ( ids.exists($2) ){
                            printf("Variable already exists.");
                            return 1;
                        }
                        if ($1 == $4->Eval().type) {
                            Value val($1);
                            if(val.type == "int") {
                                val.isIntSet = true;
                                val.intVal = $4->Eval().intVal;
                            } else if (val.type == "float") {
                                val.isFloatSet = true;
                                val.floatVal = $4->Eval().floatVal;
                            } else if (val.type == "bool") {
                                val.isBoolSet = true;
                                val.boolVal = $4->Eval().boolVal;
                            }        
                            Variable var($2, val);
                            var.scope = scope;
                            ids.addVar(var);
                        } else {
                            printf("Different types.");
                            return 1;
                        }
                    } 
                    | CONST TYPE ID ';'  { 
                        if ( ids.exists($3) ){
                            printf("Variable already exists.");
                            return 1;
                        } else {
                            Value val($2);
                            val.isConst = true;
                            Variable var($3, val);
                            var.scope = scope;
                            ids.addVar(var);
                        }
                    }
                    | CONST TYPE ID '=' expression ';'  { 
                        if ( ids.exists($3) ){
                            printf("Variable already exists.");
                            return 1;
                        }
                        if ($2 == $5->TypeOf()) {
                            Value val($2);
                            val.isConst = true;
                            if(val.type == "int") {
                                val.isIntSet = true;
                                val.intVal = $5->Eval().intVal;
                            } else if (val.type == "float") {
                                val.isFloatSet = true;
                                val.floatVal = $5->Eval().floatVal;
                            } else if (val.type == "bool") {
                                val.isBoolSet = true;
                                val.boolVal = $5->Eval().boolVal;
                            } 
                            Variable var($3, val);
                            var.scope = scope;
                            ids.addVar(var);
                        } else {
                            printf("Different types.13");
                            return 1;
                        }
                        
                    }
                    | CONST TYPE ID '=' CHAR ';'  { 
                        if ( ids.exists($3) ){
                            printf("Variable already exists.");
                            return 1;
                        }
                       string type = "char";
                        if ( $2 == type) {
                            Value val($2);
                            val.isConst = true;
                            val.charVal = $5;
                            val.isCharSet = true;
                            Variable var($3, val);
                            var.scope = scope;
                            ids.addVar(var);
                        } else {
                            printf("Different types.12");
                            return 1;
                        }
                        
                    }
                    | CONST TYPE ID '=' STRING ';'  { 
                        if ( ids.exists($3) ){
                            printf("Variable already exists.");
                            return 1;
                        }
                        string type = "string";
                        if ($2 == "string") {
                            Value val($2);
                            val.isConst = true;
                            val.stringVal = $5;
                            val.isStringSet = true;
                            Variable var($3, val);
                            var.scope = scope;
                            ids.addVar(var);
                        } else {
                            printf("Different types.11");
                            return 1;
                        }
                        
                    }
                    ;


                                                        
class_var_declaration: CLASS ID ID ';' {
                            if ( ids.exists($3) ) {
                                printf("Variable %s exists already.", $3);
                                return 1;
                            } else {
                                Value val($2);
                                Variable var($3, val);
                                var.scope = scope;
                                ids.addVar(var);
                            }
                            
                     }
                     | CLASS ID ID '=' ID ';' { 
                            if ( ids.exists($3)) {
                                printf("Variable %s exists already.", $3);
                                return 1;
                            } else {
                                
                                if ( !ids.exists($5)) {
                                printf("No %s variable found.", $5);
                                return 1;
                                }
                                
                                
                                if( ids.getVar($5).Eval().type != $2) {
                                    printf("Different types between %s and %s.\n", $3, $5);
                                    return 1;
                                }
                                Value val($2);
                                Variable var($3, val);
                                var.scope = scope;
                                ids.addVar(var);
                            }   
                     }
                     ;
                     
array_declaration: TYPE ID '[' INT ']' ';' {
                    if( ids.exists($2) ) {
                        printf("Array already exists.");
                        return 1;
                    } else {
                        Array arr($2, $4, $1);
                        arr.scope = scope;
                        ids.addArr(arr);
                    }
                 }
                 | TYPE ID '[' ']' '=' '[' int_values ']' ';' {
                    if( ids.exists($2) ) {
                        printf("Array already exists.");
                        return 1;
                    } else {
                        Array arr($2, static_cast<int>(intVals.size()), $1);
                        
                        for (const auto &element : intVals) {
                            char val[10];
                            sprintf(val, "%d", element);
                            arr.push(Value(val, "int"));
                        }

                        intVals.clear();
                        arr.scope = scope;
                        ids.addArr(arr);
                        
                    }
                 }
                 | TYPE ID '[' ']' '=' '[' float_values ']' ';' {
                    if( ids.exists($2) ) {
                        printf("Array already exists.");
                        return 1;
                    } else {
                        Array arr($2, static_cast<int>(floatVals.size()), $1);
                        
                        for (const auto &element : floatVals) {
                            char val[64];
                            sprintf(val, "%f", element);
                            arr.push(Value(val, "float"));
                        }
                        
                        arr.scope = scope;
                        ids.addArr(arr);
                        floatVals.clear();
                    }
                 }
                 | TYPE ID '[' ']' '=' '[' char_values ']' ';' {
                    if( ids.exists($2) ) {
                        printf("Array already exists.");
                        return 1;
                    } else {
                        Array arr($2, static_cast<int>(charVals.size()), $1);
                        
                        for (const auto &element : charVals) {
                            char val[10];
                            sprintf(val, "%c", element);
                            arr.push(Value(val, "char"));
                        }
                        
                        arr.scope = scope;
                        ids.addArr(arr);
                        charVals.clear();
                    }
                 }
                 | TYPE ID '[' ']' '=' '[' bool_values ']' ';' {
                    if( ids.exists($2) ) {
                        printf("Array already exists.");
                        return 1;
                    } else {
                        Array arr($2, static_cast<int>(boolVals.size()), $1);
                        
                        for (const auto &element : boolVals) { 
                            char val[6];
                            if (element){
                                strcpy(val, "true");
                            } else {
                                strcpy(val, "false");
                            }
                            arr.push(Value(val, "bool"));
                        }
                        arr.scope = scope;
                        ids.addArr(arr);
                        boolVals.clear();
                    }
                 }
                 ;
                 
int_values: int_values ',' INT {intVals.push_back($3);}
          | INT {intVals.push_back($1);}
          ;
          
float_values: float_values ',' FLOAT {floatVals.push_back($3);}
            | FLOAT {floatVals.push_back($1);}
            ;
            
bool_values: bool_values ',' BOOL {boolVals.push_back($3);}
           | BOOL {boolVals.push_back($1);}
           ;
           
char_values: char_values ',' CHAR {charVals.push_back($3);}
           | CHAR {charVals.push_back($1);}
           ;

block: statement
     | block statement
     ;

statement: variable_declaration
         | array_declaration
         | class_var_declaration
         | assignment_statement
         | control_statement 
         | fn_call ';'
         | RETURN expression ';' {
            if ( scope == "main" ) {
                if ( $2->Eval().type != "int" ){
                    printf("Error at returning a non integer in main scope.\n");
                    return 1;
                }

            } else {
                Function fn = ids.getFunc(scope.c_str());
                if( fn.returnType != $2->Eval().type ){
                    printf("Different returning types in function: %s.\n", fn.name.c_str());
                    return 1;
                } 
            }
         }
         | RETURN STRING ';' {
            if ( scope == "main") {
                printf("Error at returning a non integer in main scope.\n");
                return 1;
            } else {
                Function fn = ids.getFunc(scope.c_str());
                string type = "string";
                if( fn.returnType != type ){
                    printf("Different returning types in function: %s.\n", fn.name.c_str());
                    return 1;
                }
            }
         }
         | RETURN CHAR ';' {
            if ( scope == "main") {
                printf("Error at returning a non integer in main scope.\n");
                return 1;
            } else {
                Function fn = ids.getFunc(scope.c_str());
                string type = "char";
                if( fn.returnType != type ){
                    printf("Different returning types in function: %s.\n", fn.name.c_str());
                    return 1;
                }
            }
         }
         ;



assignment_statement: ID '=' expression ';' {
                        if( ids.exists($1) ) {
                            Value result = $3->Eval();
                            Variable& var = ids.getVar($1);
                            if (var.val.type == $3->TypeOf()){
                                if (var.val.type == "int") {
                                    var.val.isIntSet = true;
                                    var.val.intVal = result.intVal;
                                } else if (var.val.type == "float") {
                                    var.val.isFloatSet = true;
                                    var.val.floatVal = result.floatVal;
                                } else if (var.val.type == "bool") {
                                    var.val.isBoolSet = true;
                                    var.val.boolVal = result.boolVal;
                                }
                            } else {
                                printf("Different types.1");
                                return 1;
                            }        
                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
                    | ID '=' CHAR ';' {
                        if( ids.exists($1) ) {

                            Variable& var = ids.getVar($1);
                            if (var.val.type == "char"){
                                var.val.isCharSet = true;
                                var.val.charVal = $3;  
                            } else {
                                printf("Different types.2");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
                    | ID '=' STRING ';' {
                        if( ids.exists($1) ) {

                            Variable& var = ids.getVar($1);
                            if (var.val.type == "string"){
                                var.val.isStringSet = true;
                                var.val.stringVal = $3;  
                            } else {
                                printf("Different types.3");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
                    | ID '[' INT ']' '=' expression ';' {

                        Value result = $6->Eval();
                        if( ids.exists($1) ) {
                            
                            Array& arr = ids.getArray($1);
                            if (arr.type == result.type){
                                arr.add($3, result);
                            } else {
                                printf("Different types.4");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
                    | ID '[' INT ']' '=' CHAR ';' {
                        if( ids.exists($1)) {
                            Array& arr = ids.getArray($1);
                            if (arr.type == "char"){
                                Value val("char");
                                val.charVal = $6;
                                val.isCharSet = true;
                                val.type = "char";
                                arr.add($3, val);
                            } else {
                                printf("Different types.5");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
                    | ID '[' ID ']' '=' expression ';' {
                        Value result = $6->Eval();
                        if( ids.exists($1) && ids.exists($3)) {
                            Array& arr = ids.getArray($1);
                            Value& val = ids.getVar($3).val;
                            if (arr.type == result.type && val.type == "int"){
                                arr.add(val.intVal, result);
                            } else {
                                printf("Different types.");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
                    | ID '[' ID ']' '=' CHAR ';' {

                        if( ids.exists($1) && ids.exists($3)) {
                            Array& arr = ids.getArray($1);
                            Value& val = ids.getVar($3).val;
                            if (arr.type == "char" && val.type == "int"){
                                Value v("char");
                                v.charVal = $6;
                                v.isCharSet = true;
                                v.type = "char";
                                arr.add(val.intVal, v);
                            } else {
                                printf("Different types.7");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
                    ;

control_statement: if_statement 
                 | SWITCH expression'{' case_block DEFAULT ':' block '}'
                 | SWITCH STRING'{' case_block DEFAULT ':' block '}'
                 | SWITCH CHAR'{' case_block DEFAULT ':' block '}'
                 | WHILE bool_expr '{' block '}'
                 | FOR '(' assignment_statement ';' bool_expr ';' assignment_statement ')' '{' block '}'
                 ;

                 
if_statement: IF bool_expr '{' block '}' ELSE '{' block '}' 
            | IF bool_expr '{' block '}' ELSE if_statement
            ;
            

case_block: CASE value ':' block BREAK ';'
          | case_block CASE value ':' block BREAK ';'
          ;

value: INT
     | FLOAT
     | BOOL
     | fn_call
     | STRING
     ;
            

expression: arithm_expr { $$ = $1; }
          | bool_expr { $$ = $1; }
          ;

 
        
arithm_expr: arithm_expr '+' arithm_expr {
               if ($1->Eval().type == $3->Eval().type)
                   $$ = new AST($1, "+", $3); 
               else{
                    printf("Different types between: %s and %s", $1->Eval().type.c_str(), $3->Eval().type.c_str());            
                    return 1;
               }

           }
           | arithm_expr '-' arithm_expr {
               if ($1->Eval().type == $3->Eval().type)
                   $$ = new AST($1, "-", $3); 
               else {
                    printf("Different types between: %s and %s", $1->Eval().type.c_str(), $3->Eval().type.c_str());
                    return 1;
               }
           }
           | arithm_expr '/' arithm_expr {
               if ($1->Eval().type == $3->Eval().type)
                   $$ = new AST($1, "/", $3); 
               else {
                    printf("Different types between: %s and %s", $1->Eval().type.c_str(), $3->Eval().type.c_str());            
                    return 1;
               }
           }
           | arithm_expr '*' arithm_expr {
               if ($1->Eval().type == $3->Eval().type)
                   $$ = new AST($1, "*", $3); 
               else {
                    printf("Different types between: %s and %s", $1->Eval().type.c_str(), $3->Eval().type.c_str());            
                    return 1;
               }
           }
           | arithm_expr '%' arithm_expr {
               if ($1->Eval().type == $3->Eval().type)
                   $$ = new AST($1, "%", $3); 
               else {
                    printf("Different types between: %s and %s", $1->Eval().type.c_str(), $3->Eval().type.c_str());            
                    return 1;
               }
                    
           }
           | '(' arithm_expr ')' {
                $$ = $2;
           }
           | INT {
               char* identifierText = strdup(yytext);
               $$ = new AST(new Value(identifierText, "int")); 
           }
           | FLOAT {
               char* identifierText = strdup(yytext);
               $$ = new AST(new Value(identifierText, "float")); 
           }
           | fn_call {
               $$ = new AST($1->val);
            }
           | ID {
                if( ids.exists($1) ) {
                    Value val = ids.getVar($1).Eval();
                    $$ = new AST(val);
                } else {
                    printf("Variable not found.4");
                    return 1;
                }
           }
           | ID '.' ID { 
                if( ids.exists($1) ) {
                    if( ids.exists($3) ) {

                        Variable var = ids.getVar($3);
                        Variable obj = ids.getVar($1);

                        if( var.scope == obj.val.type ){
                            $$ = new AST(var.val);
                        } else {
                            printf("No %s member in class %s.", $3, $1);
                            return 0;
                        }
                             
                    } else {
                         printf("No %s member in class %s.", $3, $1);
                         return 0;
                    }
                } else {
                    printf("Class %s not found.", $1);
                    return 1;
                }
           } 
           | ID '.' fn_call {
                if( ids.exists($1) ) {
                    
                    Variable obj = ids.getVar($1);
                    Function fn = ids.getFunc($3->name.c_str());

                        if( obj.val.type == fn.scope ){
                            $$ = new AST($3->val);
                        } else {
                            printf("No %s method found in class variable %s.", $3->name.c_str(), $1);
                            return 0;
                        }
                    
                } else {

                    printf("Variable %s not found.\n", $1);
                    return 1;

                }
           }
           | ID '[' ID ']' {
                if( ids.exists($1) && ids.exists($3)) {
                    Array arr = ids.getArray($1);
                    Value val = ids.getVar($3).Eval();
                    if( val.type == "int" )
                        $$ = new AST(arr.getVal(val.intVal));
                    else {
                        printf("Invalid index.");
                    }
                } else {
                    printf("Variable not found.2");
                    return 1;
                }
           }
           | ID '[' INT ']' {
                if( ids.exists($1) ) {
                    Array arr = ids.getArray($1);
                    $$ = new AST(arr.getVal($3));
                }else {
                    printf("Variable not found.1");
                }

           }
           | ID '[' fn_call ']' {
                if( ids.exists($1)) {
                    Array arr = ids.getArray($1);

                    if( $3->val.type == "int" )
                        $$ = new AST(arr.getVal($3->val.intVal));
                    else {
                        printf("Invalid index.");
                    }
                } else {
                    printf("Variable not found.2");
                    return 1;
                }
           }
           ;   
               
      
bool_expr: bool_expr AND bool_expr {
               $$ = new AST($1, "and", $3); 
         }
         | bool_expr OR bool_expr {
               $$ = new AST($1, "or", $3); 
           }
         | NOT bool_expr {
               $$ = new AST($2, "not", NULL); 
         }
         | '(' bool_expr ')' {
            $$ = $2;
         }
         | BOOL { 
            char* identifierText = strdup(yytext);
            $$ = new AST(new Value(identifierText, "bool"));
          }
         | arithm_expr GT arithm_expr {
               if ($1->Eval().type == $3->Eval().type)
                   $$ = new AST($1, "gt", $3); 
               else {
                    printf("Different types between: %s and %s", $1->Eval().type.c_str(), $3->Eval().type.c_str());            
                    return 1;
               }
           }
         | arithm_expr LT arithm_expr {
               if ($1->Eval().type == $3->Eval().type)
                   $$ = new AST($1, "lt", $3); 
               else{
                    printf("Different types between: %s and %s", $1->Eval().type.c_str(), $3->Eval().type.c_str());            
                    return 1;
               }
           }
         | arithm_expr GEQ arithm_expr {
               if ($1->Eval().type == $3->Eval().type)
                   $$ = new AST($1, "geq", $3); 
               else {
                    printf("Different types between: %s and %s", $1->Eval().type.c_str(), $3->Eval().type.c_str());            
                    return 1;
               }
           }
         | arithm_expr LEQ arithm_expr {
               if ($1->Eval().type == $3->Eval().type)
                   $$ = new AST($1, "leq", $3); 
               else {
                    printf("Different types.9\n");
                    return 1;
               }
                    
           }
         | arithm_expr EQ arithm_expr {
               if ($1->Eval().type == $3->Eval().type)
                   $$ = new AST($1, "eq", $3); 
               else {
                    printf("Different types.10\n");
                    return 1;
               }
           }
         | arithm_expr NEQ arithm_expr {
               if ($1->Eval().type == $3->Eval().type)
                   $$ = new AST($1, "neq", $3); 
               else {
                    printf("Different types.11\n");
                    return 1;
               }
           }
         ;


fn_call: ID '(' argument_list ')' { 
            
            if( ids.exists($1) ) {
                Function fn = ids.getFunc($1);

                if ( params.size() != fn.params.size() ){
                    printf("The %s function call has inapropriate number of parameters.\n", fn.name.c_str());
                    return 1;
                } else {
                    for( int i = 0; i < params.size(); i++ ) {
                        if (params.at(i).type != fn.params.at(i).type){
                            printf("The parameter .... should be of type %s.\n", fn.params.at(i).type.c_str());
                            return 1;
                        }
                    }
                    params.clear();

                    Value result(fn.returnType);
                    if( result.type == "int" ){
                        result.intVal = 0;
                        result.isIntSet = true;
                    } else if( result.type == "float" ){
                        result.floatVal = 0.0;
                        result.isFloatSet = true;
                    } else if( result.type == "bool" ){
                        result.boolVal = true;
                        result.isIntSet = true;
                    } else if( result.type == "char" ){
                        result.charVal = '\0';
                        result.isCharSet = true;
                    } else if( result.type == "string" ){
                        result.stringVal = "";
                        result.isStringSet = true;
                    }
                    
                   
                    $$ = new Variable(fn.name.c_str(), result);

                }
            }
        }
        ;


argument_list: /* define rules for argument list */
             | expression { params.push_back($1->Eval());}
             | argument_list ',' expression { params.push_back($3->Eval());}
             ;

%%
void yyerror(const char * s) {
    std::cerr << "error: " << s << " at line:" << yylineno << std::endl;
}

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");
    yyparse();

    ids.printVars();
    ids.printFuncs();
    ids.printUsrDefs();
    ids.printArrays();
    ids.exportToFile("symbol_table.txt");
    return 0;
}