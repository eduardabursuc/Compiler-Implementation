%{
    #include <iostream>
    #include <string.h>   
    
    extern FILE* yyin;
    extern char* yytext;
    extern int yylineno;
    extern int yylex();
    void yyerror(const char* s);
%}

%union{
    char* string;
}

%token INT FLOAT CHAR BOOL STRING <string>ID
%token PLUS MINUS MUL DIV MOD EQ NEQ GT GE LT LE AND OR NOT
%token IF ELSE WHILE FOR SWITCH CASE
%token ENTRY EXIT MAIN FNENTRY FNEXIT RETURN PRINT

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

global_functions: global_functions global_function
                | global_function
                ;

block: block statement
     | statement
     ;



%%
void yyerror(const char* err)
{
    printf("Error: %s at line %d\n", err, yylineno);
}

int main(int argc, char** argv)
{
    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);
    return 0;
}