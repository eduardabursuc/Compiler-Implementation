%{
#include <iostream>
#include <vector>
#include "lang.h"

vector<ClassInfo> classes;
vector<Vars> fieldVars;
vector<FunctionInfo> fieldFuncs;

vector<FunctionInfo> globalFuncs;

class IdList ids;
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
%}
%union {
     char* string;
     int integer;
     int boolean;
     char character;
     float floatnum;
     Vars varType;
     FunctionInfo funcType;
     ListParam listParams;
}
%token INT FLOAT BOOL CHAR STRING ARRAY_ELEMENT CLASS_VAR CLASS_METHOD CLASS CONST
%token ASSIGN PLUS MINUS MUL DIV MOD EQ NEQ GT GEQ LT LEQ AND OR NOT
%token IF ELSE WHILE FOR SWITCH CASE
%token ENTRY EXIT MAIN FNENTRY FNEXIT BREAK DEFAULT USRDEF GLOBALVAR GLOBALFUNC RETURN PRINT
%token<string> ID TYPE EVAL TYPEOF

%left OR 
%left AND
%left NOT
%left EQ NEQ
%left LEQ GEQ LT GT

%left PLUS MINUS
%left MUL DIV MOD 

%start program

%type <funcType> field_functions
%type <funcType> function_declaration
%type <varType> field_variables variable_declaration
%type <varType> parameter
%type <listParams> parameter_list

%%

program: ENTRY USRDEF user_defined_types GLOBALVAR global_variables GLOBALFUNC global_functions MAIN '{' block '}' EXIT {printf("Program is correct!\n");}
       ;

user_defined_types: /* define rules for user defined types */
                  | user_defined_types user_defined_type
                  ;

user_defined_type: CLASS ID '{' field_variables field_functions '}' ';' {
     for (const auto& cls : classes) {
          if (cls.name == $2) {
               cout << "Class " << $2 << " already exists" << endl;
               return;
          }
     }
     ClassInfo classInfo($2, fieldVars, fieldFuncs);
     classes.push_back(classInfo);
     fieldVars.clear();
     fieldFuncs.clear();
}
                 ;

field_variables: /*empty*/{ $$ = Vars(); }
               | field_variables variable_declaration {{ 
                   Vars var = $2;
                   fieldVars.push_back(var);
               }}
	          ;

               
field_functions: /*empty*/{ $$ = FunctionInfo(); }
               | field_functions function_declaration {{ 
                   FunctionInfo funcInfo = $2;
                   fieldFuncs.push_back(funcInfo);
               }}
	       ;
	       
function_declaration: FNENTRY TYPE ID '(' parameter_list ')' '{' block '}'  {
     for (const auto& func : globalFuncs) {
          if (func.name == $3) {
               cout << "Function " << $3 << " already exists" << endl;
               return;
          }
     }
     FunctionInfo funcInfo($3, $2, "local", $5);
     $$ = funcInfo;
}
                    ;	       

global_variables: 
                  | global_variables variable_declaration
                  ;

global_functions: 
                | global_functions function_declaration
                ;

parameter_list:  { $$ = ListParam(); }
               | parameter { $$ = ListParam(); $$->list.push_back($1); }
               | parameter_list ',' parameter { $$ = $1; $$->list.push_back($3); }
               ;


parameter: TYPE ID { 
    Vars var;
    var.name = $2;
    var.info.type = $1;
    $$ = var;
} ;

variable_declaration: TYPE ID ';' {if !ids.existsVar($2) {
    Vars var($2, "global", Info($1, ""));
    ids.addVar(var);
    $$ = var;
}}
                    | TYPE ID ASSIGN expression ';' {if !ids.existsVar($2){
    Vars var($2, "global", Info($1, $4));
    ids.addVar(var);
    $$ = var;
}} 
                    | CONST TYPE ID ASSIGN expression ';' 
                    ;

                                                        
class_var_declaration: CLASS ID ID ';'
                     | CLASS ID ID ASSIGN ID ';'
                     | CLASS ID ID ASSIGN fn_call ';'
                     ;
                     
array_declaration: TYPE ID '[' INT ']' ';' 
                 | TYPE ID '['']' ASSIGN '[' one_type_values ']' ';'
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
         ;

assignment_statement: ID ASSIGN expression ';' { /* handle assignment statement */ }
                    ;

control_statement: if_statement
                 | SWITCH expression '{' case_block DEFAULT ':' block '}'
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
            

expression: arithm_expr
          | bool_expr
          | STRING
          | CHAR
          ;

 
        
arithm_expr: arithm_expr PLUS arithm_expr { if ( $1->type == $3->type ) $$ = $1 + $3; else { printf("Addition between diffrent type members.\n"); return 1 ; }}
           | arithm_expr MINUS arithm_expr { if ( $1->type == $3->type ) $$ = $1 - $3; else { printf("Subtraction between diffrent type members.\n"); return 1 ; }}
           | arithm_expr DIV arithm_expr { if ( $1->type == $3->type ) $$ = $1 / $3; else { printf("Division between diffrent type members.\n"); return 1 ; }}
           | arithm_expr MUL arithm_expr { if ( $1->type == $3->type ) $$ = $1 * $3; else { printf("Multiplication between diffrent type members.\n"); return 1 ; }}
           | arithm_expr MOD arithm_expr { if ( $1->type == $3->type && $1->type.compare(string("int")) == 0 ) $$ = $1 % $3; else { printf("Modulo between diffrent type members.\n"); return 1 ; }}
           | '(' arithm_expr ')' 
           | INT { $$ += $1.value.ToType("int"); }
           | FLOAT { $$ += $1.value.ToType("float"); }
           | fn_call 
           | ID { if( !ids.existsVar($1) ) {
           		printf("Undeclared variable.\n");
           	   } else {
           	   	
           	   }
           	} 
           | ID '.' ID  // class variable
           | ID '.' fn_call // class methos
           | ID '[' ID ']' // array type a[index]
           | ID '[' INT ']' // array type a[7]
           | ID '[' fn_call ']' // array type a[get_index()]
           ;   
               
      
bool_expr: bool_expr AND bool_expr
         | bool_expr OR bool_expr
         | NOT bool_expr
         | '(' bool_expr ')'
         | BOOL
         | arithm_expr GT arithm_expr
         | arithm_expr LT arithm_expr
         | arithm_expr GEQ arithm_expr
         | arithm_expr EQ arithm_expr
         | arithm_expr LEQ arithm_expr
         | arithm_expr NEQ arithm_expr
         ;


fn_call: ID '(' argument_list ')' { /* handle function call */ }
             ;


argument_list: /* define rules for argument list */
             | expression
             | argument_list ',' expression
             ;

%%
void yyerror(const char * s){
printf("error: %s at line:%d\n",s,yylineno);
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     yyparse();
     cout << "Variables:" <<endl;
     ids.printVars();

     cout << "Classes:" << endl;
     for (const auto& cls : classes) 
     {
          cout << "Class: " << cls.name << endl;
        
          cout << "  Fields:" << endl;
          for (const auto& field : cls.fields) 
               cout << "    Field Name: " << field.name << ", Type: " << field.info.type << ", Value: " << field.info.val << endl;

          cout << "  Methods:" << endl;
          for (const auto& method : cls.methods) {
               cout << "    Method Name: " << method.name << ", Return Type: " << method.type << endl;
               cout << "    Parameters:" << endl;
               for (const auto& param : method.params.list)
                    cout << "      Param Name: " << param.name << ", Type: " << param.info.type << endl;
        }
     }

     cout << "Global Functions:" << endl;
     for (const auto& func : globalFuncs) {
          cout << "Function: " << func.name << " Return Type: " << func.type << endl;
          cout << "Parameters:" << endl;
          for (const auto& param : func.params.list)
               cout << "  Param Name: " << param.name << ", Type: " << param.info.type << endl;
    }
}
