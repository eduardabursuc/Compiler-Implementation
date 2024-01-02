%{
#include <iostream>
#include <vector>
#include "lang.h"

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();

class IdList ids;
std::vector<ClassInfo> classes;
std::vector<Vars> fieldVars;
std::vector<FunctionInfo> fieldFuncs;
std::vector<FunctionInfo> globalFuncs;


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
     Info info;
}
%type<AST> expression
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

field_variables: /*empty*/ { $$ = Vars(); }
               | field_variables variable_declaration { 
                   Vars var = $2;
                   fieldVars.push_back(var);
               }
	          ;

field_functions: /*empty*/ { $$ = FunctionInfo(); }
               | field_functions function_declaration { 
                   FunctionInfo funcInfo = $2;
                   fieldFuncs.push_back(funcInfo);
               }
	       ;

function_declaration: FNENTRY TYPE ID '(' parameter_list ')' '{' block '}' {
     for (const auto& func : globalFuncs) {
          if (func.name == $3) {
               std::cout << "Function " << $3 << " already exists" << std::endl;
               return;
          }
     }
     FunctionInfo funcInfo($3, $2, "local", $5);
     $$ = funcInfo;
} ;
	       

global_variables: 
                  | global_variables variable_declaration
                  ;

global_functions: 
                | global_functions function_declaration
                ;

parameter_list:  { $$ = ListParam(); }
               | parameter { $$ = ListParam(); $$->list.push_back($1); } 
               | parameter_list ',' parameter  { $$ = $1; $$->list.push_back($3); } 
               ;


parameter: TYPE ID  { 
    Vars var;
    var.name = $2;
    var.info.type = $1;
    $$ = var;
} ;

variable_declaration: TYPE ID ';' {
     if (!ids.existsVar($2)){
        Vars var($2, "global", Info($1, ""));
    ids.addVar(var);
    $$ = var;
    }
}
                    | TYPE ID '=' expression ';' {
                         if (!ids.existsVar($2)){
                              Vars var($2, "global", Info($1, $4));
                              ids.addVar(var);
                              $$ = var;
}} 
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
         ;

assignment_statement: ID '=' expression ';' 
     { if (!ids.existsVar($1)) {
        Vars var($1, "global", Info("", ""));
        ids.addVar(var); }
     }
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

 
        
arithm_expr: arithm_expr '+' arithm_expr { if ( $1->type == $3->type ) $$ = AST('+', ); else { printf("Addition between diffrent type members.\n"); return 1 ; }} 
           | arithm_expr '-' arithm_expr /*{ if ( $1->type == $3->type ) $$ = $1 - $3; else { printf("Subtraction between diffrent type members.\n"); return 1 ; }} */
           | arithm_expr '/' arithm_expr /*{ if ( $1->type == $3->type ) $$ = $1 / $3; else { printf("Division between diffrent type members.\n"); return 1 ; }} */
           | arithm_expr '*' arithm_expr /*{ if ( $1->type == $3->type ) $$ = $1 * $3; else { printf("Multiplication between diffrent type members.\n"); return 1 ; }} */
           | arithm_expr '%' arithm_expr /*{ if ( $1->type == $3->type && $1->type.compare(string("int")) == 0 ) $$ = $1 % $3; else { printf("Modulo between diffrent type members.\n"); return 1 ; }}*/
           | '(' arithm_expr ')' 
           | INT /*{ $$ += $1.value.ToType("int"); }*/
           | FLOAT /*{ $$ += $1.value.ToType("float"); }*/
           | fn_call 
           | ID /* { if( !ids.existsVar($1) ) {
           		printf("Undeclared variable.\n");
           	   } else {
           	   	
           	   }
           	} */
           | ID '.' ID  /* class variable  */
           | ID '.' fn_call /* class methos */
           | ID '[' ID ']' /* array type a[index] */
           | ID '[' INT ']' /* array type a[7] */
           | ID '[' fn_call ']' /* array type a[get_index()] */
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
void yyerror(const char * s) {
    std::cerr << "error: " << s << " at line:" << yylineno << std::endl;
}

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");
    yyparse();

    std::cout << "Variables:" << std::endl;
    ids.printVars();

    std::cout << "Classes:" << std::endl;
    for (const auto& cls : classes) {
        std::cout << "Class: " << cls.name << std::endl;
        
        std::cout << "  Fields:" << std::endl;
        for (const auto& field : cls.fields) 
            std::cout << "    Field Name: " << field.name << ", Type: " << field.info.type << ", Value: " << field.info.val << std::endl;

        std::cout << "  Methods:" << std::endl;
        for (const auto& method : cls.methods) {
            std::cout << "    Method Name: " << method.name << ", Return Type: " << method.type << std::endl;
            std::cout << "    Parameters:" << std::endl;
            for (const auto& param : method.params.list)
                std::cout << "      Param Name: " << param.name << ", Type: " << param.info.type << std::endl;
        }
    }

    std::cout << "Global Functions:" << std::endl;
    for (const auto& func : globalFuncs) {
        std::cout << "Function: " << func.name << " Return Type: " << func.type << std::endl;
        std::cout << "Parameters:" << std::endl;
        for (const auto& param : func.params.list)
            std::cout << "  Param Name: " << param.name << ", Type: " << param.info.type << std::endl;
    }

    return 0;
}
