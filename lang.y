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
%token INT FLOAT BOOL CHAR STRING
%token ASSIGN PLUS MINUS MUL DIV MOD EQ NEQ GT GEQ LT LEQ AND OR NOT
%token IF ELSE WHILE FOR SWITCH CASE
%token ENTRY EXIT MAIN FNENTRY FNEXIT RETURN PRINT BREAK DEFAULT USRDEF GLOBALVAR GLOBALFUNC
%token<string> ID TYPE 
%start program
%%

program: ENTRY USRDEF user_defined_types GLOBALVAR global_variables GLOBALFUNC global_functions MAIN '{' block '}' EXIT {printf("Program is correct!\n");}
       ;

user_defined_types: /* define rules for user defined types */
                  | user_defined_types user_defined_type
                  ;

user_defined_type: TYPE ID '{' field_declarations '}' ';' { /* handle user defined type declaration */ }

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
         | function_call ';' { /* handle function call */ }
         ;

assignment_statement: ID ASSIGN expression ';' { /* handle assignment statement */ }
                    ;

control_statement: ';' { /* handle control statement */ }

/* expression: ';' { }
          ; */

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
}