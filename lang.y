%{
#include <iostream>
#include <vector>
#include "lang.h"


extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class IdList ids;

%}
%union {
     char* string;
     int integer;
     int boolean;
     char character;
     float floatnum;
}
%token INT FLOAT BOOL CHAR STRING
%token ASSIGN PLUS MINUS MUL DIV MOD EQ NEQ GT GEQ LT LEQ AND OR NOT
%token IF ELSE WHILE FOR SWITCH CASE
%token ENTRY EXIT MAIN FNENTRY FNEXIT RETURN PRINT BREAK DEFAULT USRDEF GLOBALVAR GLOBALFUNC
%token ARRAY CLASS LBRACKET RBRACKET
%token ARRAY_ELEMENT CLASS_ELEMENT
%token<string> ID TYPE BID

%start program
%%

program: ENTRY USRDEF user_defined_types GLOBALVAR global_variables GLOBALFUNC global_functions MAIN '{' block '}' EXIT {printf("Program is correct!\n");}
       ;

user_defined_types: 
                  | user_defined_types user_defined_type
                  ;

user_defined_type: TYPE ID '{' field_declarations '}' ';' { }

field_declarations: 
                   | field_declarations field_declaration
                   ;

field_declaration: TYPE ID ';' {  }
                    ;

global_variables: 
                  | global_variables global_variable
                  ;

global_variable: TYPE ID ';' { if(!ids.existsVar($2)) {
                          ids.addVar($1,$2);
                     }}
               ;

global_functions: 
                | global_functions global_function
                ;

global_function: FNENTRY TYPE ID '(' parameter_list ')' '{' block '}' FNEXIT';' { }
               ;

parameter_list: 
                 | parameter
                 | parameter_list ',' parameter
                 ;

parameter: TYPE ID { }
           ;

block: statement
     | block statement
     ;

statement: assignment_statement { /* handle assignment statement */ }
         | control_statement { /* handle control statement */ }
         | function_call ';' { /* handle function call */ }
         ;

assignment_statement: ID ASSIGN expression ';' { }
                    ;

control_statement: ';' { /* handle control statement */ }

expression: ID
          | INT
          | STRING
          ;

function_call: ID '(' argument_list ')' { /* handle function call */ }
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
}