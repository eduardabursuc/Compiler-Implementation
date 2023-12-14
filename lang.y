%{
#include <iostream>
#include <vector>

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
}
%token INT FLOAT BOOL CHAR STRING ARRAY_ELEMENT CLASS_ELEMENT
%token ASSIGN PLUS MINUS MUL DIV MOD EQ NEQ GT GEQ LT LEQ AND OR NOT
%token IF ELSE WHILE FOR SWITCH CASE
%token ENTRY EXIT MAIN FNENTRY FNEXIT RETURN PRINT BREAK DEFAULT USRDEF GLOBALVAR GLOBALFUNC
%token<string> ID TYPE CLASS

%left OR 
%left AND
%left NOT
%left EQ NEQ
%left LEQ GEQ LT GT

%left PLUS MINUS
%left MUL DIV MOD 

%start program
%%

program: ENTRY USRDEF user_defined_types GLOBALVAR global_variables GLOBALFUNC global_functions MAIN '{' block '}' EXIT {printf("Program is correct!\n");}
       ;

user_defined_types: /* define rules for user defined types */
                  | user_defined_types user_defined_type
                  ;

user_defined_type: CLASS ID '{' field_declarations '}' ';' { /* handle user defined type declaration */ }

field_declarations: /* define rules for field declarations */
                   | field_declarations field_declaration
                   ;

field_declaration: TYPE ID ';' { /* handle field declaration */ }
                    ;

global_variables: /* define rules for global variables */
                  | global_variables global_variable
                  ;

global_variable: TYPE ID ';' { /* handle global variable declaration */ }
               ;

global_functions: /* define rules for global functions */
                | global_functions global_function
                ;

global_function: FNENTRY TYPE ID '(' parameter_list ')' '{' block '}' FNEXIT';' { /* handle global function declaration */ }
               ;

parameter_list: /* define rules for parameter list */
                 | parameter
                 | parameter_list ',' parameter
                 ;

parameter: TYPE ID { /* handle parameter declaration */ }
           ;

block: statement
     | block statement
     ;

statement: assignment_statement { /* handle assignment statement */ }
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
     ;
            

expression: arithm_expr
          | bool_expr
          ;
 
        
arithm_expr: arithm_expr PLUS arithm_expr
           | arithm_expr MINUS arithm_expr
           | arithm_expr DIV arithm_expr
           | arithm_expr MUL arithm_expr
           | arithm_expr MOD arithm_expr
           | '(' arithm_expr ')'
           | INT
           | FLOAT
           | fn_call
           | ARRAY_ELEMENT
           | CLASS_ELEMENT
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
}
