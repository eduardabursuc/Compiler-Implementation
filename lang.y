%{
#include <iostream>
#include <vector>
#include "string.h"

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class IdList ids;
%}
%union {
     char* string;
}
%token ASSIGN PLUS MINUS MUL DIV MOD EQ NEQ GT GEQ LT LEQ AND OR NOT
%token IF ELSE WHILE FOR SWITCH CASE
%token ENTRY EXIT MAIN FNENTRY FNEXIT RETURN PRINT
%token<string> ID TYPE 
%start program
%%

program: ENTRY user_defined_types global_variables global_functions MAIN '{' block '}' EXIT {printf("Program is correct!\n");}
       ;

user_defined_types: user_defined_types user_defined_type
                  | user_defined_type
                  ;


global_variables: global_variables global_variable
                | global_variable
                ;
                
global_variable: TYPE ID ';' ;

global_functions: global_functions global_function
                | global_function
                ;
                
global_function: TYPE ID ':' parameters '{' block '}';

parameters: parameter
          | parameters ',' parameter
          | /* empty */
          ;

parameter: TYPE ID ;

block: block statement
     | statement
     ;

statement: assign_stat
         | control_stat
         | expr ';'
         ;
       
assign_stat: ID ASSIGN expr ';' ;

control_stat: IF bool_expr '{' block '}'
            | FOR '(' assign_stat ';' bool_expr ';' assign_stat ')' '{' block '}' 
            | WHILE bool_expr '{' block '}'
            | SWITCH expr '{' switch_block '}' 
            ;

switch_block: CASE value ":" block BREAK ';' 
            | switch_block CASE value ":" block BREAK ';' 
            | CASE value ":" block BREAK ';' DEFAULT ":" block BREAK ';'
            ;

expr: expr PLUS expr
    | expr MINUS expr
    | expr MUL expr
    | expr DIV expr
    | '(' expr ')'
    | fn_call
    | ID
    | value
    ;
    
value: INT
     | FLOAT
     | BOOL
     | STRING
     ;
           
bool_expr: expr EQ expression
         | expr NEQ expr
         | expr LT expr
         | expr LEQ expr
         | expr GT expr
         | expr GEQ expr
         ;
           
fn_call: ID '(' arguments ')' ;

arguments: arguments ',' expr
         | expr
         | /* empty */
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
    
} 
