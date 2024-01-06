%{
#include <iostream>
#include <vector>
#include "lang.h"
#include <cstring>

using namespace std;

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();

vector<Parameter> globalParams;
class IdList ids;
string scope = "global";

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
%token<string> ID TYPE EVAL TYPEOF INT FLOAT BOOL CHAR STRING


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
%type <string> one_type_values int_values float_values bool_values char_values

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
               | field_variables variable_declaration { }
	          ;

field_functions: /*empty*/ { }
               | field_functions function_declaration { }
	       ;

function_declaration: FNENTRY TYPE ID { scope = $3; } '(' parameter_list ')' '{' block '}' { 
                        Function func($3, $2, globalParams);
                        ids.addFunc(func);
                        globalParams.clear();
                        scope = "global";
                    } ;
	       

global_variables: 
                  | global_variables variable_declaration
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
                            val.charVal = *$4;
                            Variable var($2, val);
                            ids.addVar(var);
                            printf("Expr value: %c", val.charVal);
                        }  else {
                            printf("Different types.");
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
                            val.stringVal = $4;
                            Variable var($2, val);
                            ids.addVar(var);
                        }  else {
                            printf("Different types.");
                            return 1;
                        }                     
                    }
                    | TYPE ID '=' expression ';' {
                        if ( ids.exists($2) ){
                            printf("Variable already exists.");
                            return 1;
                        }
                        if ($1 == $4->TypeOf()) {
                            Value val($1);
                            if(val.type == "int") {
                                val.intVal = $4->Eval().intVal;
                            } else if (val.type == "float") {
                                val.floatVal = $4->Eval().floatVal;
                            } else if (val.type == "bool") {
                                val.boolVal = $4->Eval().boolVal;
                            }        
                            Variable var($2, val);
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
                                val.intVal = $5->Eval().intVal;
                            } else if (val.type == "float") {
                                val.floatVal = $5->Eval().floatVal;
                            } else if (val.type == "bool") {
                                val.boolVal = $5->Eval().boolVal;
                            } 
                            Variable var($3, val);
                            ids.addVar(var);
                        } else {
                            printf("Different types.");
                            return 1;
                        }
                        
                    }
                    ;


                                                        
class_var_declaration: CLASS ID ID ';' {
                            Value val($2);
                            Variable var($3, val);
                            ids.addVar(var);
                    }
                     | CLASS ID ID '=' ID ';' {
                            //check if they have same type
                            Value val($2);
                            Variable var($3, val);
                            ids.addVar(var);    
                     }
                     | CLASS ID ID '=' fn_call ';' {
                        //check if they have same type
                            Value val($2);
                            Variable var($3, val);
                            ids.addVar(var);
                     }
                     ;
                     
array_declaration: TYPE ID '[' INT ']' ';' {
                    if( ids.exists($2) ) {
                        printf("Array already exists.");
                        return 1;
                    } else {
                        Array arr($2, atoi($4), $1);
                        ids.addArr(arr);
                    }
                 }
                 | TYPE ID '['']' '=' '[' one_type_values ']' ';' {
                    if( ids.exists($2) ) {
                        printf("Array already exists.");
                        return 1;
                    } else {
                        Array arr($2, $1, $7);
                        ids.addArr(arr);
                    }
                 }
                 ;
                 
one_type_values: int_values
               | float_values
               | bool_values
               | char_values
               ;
               
int_values: int_values INT
          | INT
          ;
          
float_values: float_values FLOAT
            | FLOAT
            ;
            
bool_values: bool_values BOOL
           | BOOL
           ;
           
char_values: char_values CHAR
           | CHAR
           ;

block: statement
     | block statement
     ;

statement: variable_declaration
         | array_declaration
         | class_var_declaration
         | assignment_statement { /* handle assignment statement */ }
         | control_statement { /* handle control statement */ }
         | fn_call ';' { /* handle function call */ }
         | RETURN expression ';' {

         }
         | RETURN STRING ';' 
         | RETURN CHAR ';'
         ;

assignment_statement: ID '=' expression ';' {}
                    | ID '=' CHAR ';' {}
                    | ID '=' STRING ';' {}
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
               if ($1->type == $3->type)
                   $$ = new AST($1, "+", $3); 
               else 
                   printf("Different types.\n");

           }
           | arithm_expr '-' arithm_expr {
               if ($1->type == $3->type)
                   $$ = new AST($1, "-", $3); 
               else 
                   printf("Different types.\n");
           }
           | arithm_expr '/' arithm_expr {
               if ($1->type == $3->type)
                   $$ = new AST($1, "/", $3); 
               else 
                   printf("Different types.\n");
           }
           | arithm_expr '*' arithm_expr {
               if ($1->type == $3->type)
                   $$ = new AST($1, "*", $3); 
               else 
                    printf("Different types.\n");
           }
           | arithm_expr '%' arithm_expr {
               if ($1->type == $3->type)
                   $$ = new AST($1, "%", $3); 
               else 
                    printf("Different types.\n");
           }
           | '(' arithm_expr ')' {}
           | INT {
               char* identifierText = strdup(yytext);
               $$ = new AST(new Value(identifierText, "int")); 
           }
           | FLOAT {
               char* identifierText = strdup(yytext);
               $$ = new AST(new Value(identifierText, "float")); 
           }
           | fn_call {
               //$$ = new AST($1);
            }
           | ID {
                if( ids.exists($1) ) {
                    Value val = ids.getVar($1).Eval();
                    $$ = new AST(val);
                } else {
                    printf("Variable not found.");
                    return 1;
                }
           }
           | ID '.' ID { 
                if( ids.exists($1) ) {
                    
                } else {
                    printf("Variable not found.");
                    return 1;
                }
           } 
           | ID '.' fn_call {
                if( ids.exists($1) ) {
                    
                } else {
                    printf("Variable not found.");
                    return 1;
                }
           }
           | ID '[' ID ']' {}/* array type a[index] */
           | ID '[' INT ']' {}/* array type a[7] */
           | ID '[' fn_call ']' {}/* array type a[get_index()] */
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
         | '(' bool_expr ')' {}
         | BOOL {}
         | arithm_expr GT arithm_expr {
               if ($1->type == $3->type)
                   $$ = new AST($1, "gt", $3); 
               else 
                    printf("Different types.\n");
           }
         | arithm_expr LT arithm_expr {
               if ($1->type == $3->type)
                   $$ = new AST($1, "lt", $3); 
               else 
                    printf("Different types\n");
           }
         | arithm_expr GEQ arithm_expr {
               if ($1->type == $3->type)
                   $$ = new AST($1, "geq", $3); 
               else 
                    printf("Different types.\n");
           }
         | arithm_expr LEQ arithm_expr {
               if ($1->type == $3->type)
                   $$ = new AST($1, "leq", $3); 
               else 
                    printf("Different types.\n");
           }
         | arithm_expr EQ arithm_expr {
               if ($1->type == $3->type)
                   $$ = new AST($1, "eq", $3); 
               else 
                    printf("Different types.\n");
           }
         | arithm_expr NEQ arithm_expr {
               if ($1->type == $3->type)
                   $$ = new AST($1, "neq", $3); 
               else 
                    printf("Different types.\n");
           }
         ;


fn_call: ID '(' argument_list ')' { /* handle function call */ }
             ;


argument_list: /* define rules for argument list */
             | expression
             | argument_list ',' expression
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
    ids.exportToFile("symbol_table.txt");
    return 0;
}