%{
#include <iostream>
#include <vector>
#include "lang.h"

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();

class IdList ids;

void yyerror(const char * s);
%}
%union {
     char* string;
     int integer;
     int boolean;
     char character;
     float floatnum;
}

%token INT FLOAT BOOL CHAR STRING ARRAY_ELEMENT CLASS_VAR CLASS_METHOD CLASS CONST
%token NEQ GT GEQ LT LEQ AND OR NOT
%token IF ELSE WHILE FOR SWITCH CASE
%token ENTRY EXIT MAIN FNENTRY FNEXIT BREAK DEFAULT USRDEF GLOBALVAR GLOBALFUNC RETURN PRINT
%token<string> ID TYPE EVAL TYPEOF

%left OR 
%left AND
%left NOT
%left EQ NEQ
%left LEQ GEQ LT GT

%left '+' '-'
%left '*' '/' '%' 

%start program

/* %type <AST> arithm_expr bool_expr  */
%%

program: ENTRY USRDEF user_defined_types GLOBALVAR global_variables GLOBALFUNC global_functions MAIN '{' block '}' EXIT {printf("Program is correct!\n");}
       ;

user_defined_types: /* define rules for user defined types */
                  | user_defined_types user_defined_type
                  ;

user_defined_type: CLASS ID '{' field_variables field_functions '}' ';' {
     Value val("class");
     Variable var($2, val, false, true);
     ids.addVar(var);
}
                 ;

field_variables: /*empty*/ {}
               | field_variables variable_declaration { }
	          ;

field_functions: /*empty*/ { }
               | field_functions function_declaration { }
	       ;

function_declaration: FNENTRY TYPE ID '(' parameter_list ')' '{' block '}' {
     Value val("function");
     Variable var($3, val, true, false);
     ids.addVar(var);
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


parameter: TYPE ID  { } ;

variable_declaration: TYPE ID ';' {
                         Value val($1);
                         Variable var($2, val);
                         ids.addVar(var);
                    }
                    | TYPE ID '=' expression ';' {
                         Value val($1);
                         Variable var($2, val);
                         ids.addVar(var);
                    } 
                    | CONST TYPE ID '=' expression ';'  { }
                    ;

                                                        
class_var_declaration: CLASS ID ID ';'
                     | CLASS ID ID '=' ID ';'
                     | CLASS ID ID '=' fn_call ';'
                     ;
                     
array_declaration: TYPE ID '[' INT ']' ';' 
                 | TYPE ID '['']' '=' '[' one_type_values ']' ';'
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
         | RETURN expression ';'
         ;

assignment_statement: ID '=' expression ';' {}
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

 
        
arithm_expr: arithm_expr '+' arithm_expr { }
           | arithm_expr '-' arithm_expr { }
           | arithm_expr '/' arithm_expr { }
           | arithm_expr '*' arithm_expr { }
           | arithm_expr '%' arithm_expr { }
           | '(' arithm_expr ')' {}
           | INT {  }
           | FLOAT {  }
           | fn_call { }
           | ID {}/*{} */
           | ID '.' ID { } /* class variable  */
           | ID '.' fn_call {}/* class methos */
           | ID '[' ID ']' {}/* array type a[index] */
           | ID '[' INT ']' {}/* array type a[7] */
           | ID '[' fn_call ']' {}/* array type a[get_index()] */
           ;   
               
      
bool_expr: bool_expr AND bool_expr {  }
         | bool_expr OR bool_expr {  }
         | NOT bool_expr { }
         | '(' bool_expr ')' {}
         | BOOL { }
         | arithm_expr GT arithm_expr { }
         | arithm_expr LT arithm_expr { }
         | arithm_expr GEQ arithm_expr {  }
         | arithm_expr LEQ arithm_expr {  }
         | arithm_expr EQ arithm_expr { }
         | arithm_expr NEQ arithm_expr {  }
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

    return 0;
}
