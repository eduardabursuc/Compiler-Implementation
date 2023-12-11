%{
#include <stdio.h>
#include "string.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string" {yylval.string = strdup(yytext);return TYPE;}
"begin_progr" {return BGIN;}
"end_progr" {return END;}
[a-zA-Z][a-zA-Z0-9]* {yylval.string = strdup(yytext); return ID;}
":=" {return ASSIGN;}
"ENTRYPOINT" { return ENTRY; }
"EXITPOINT" { return EXIT; }
"master" { return MAIN; }
"fnentry" { return FNENTRY; }
"fnexit" { return FNEXIT; }
"return" { return RETURN; }
"if" { return IF; }
"else" { return ELSE; }
"while" { return WHILE; }
"for" { return FOR; }
"switch" { return SWITCH; }
"case" { return CASE; }
"add" { return PLUS; }
"sub" { return MINUS; }
"mul" { return MUL; }
"div" { return DIV; }
"mod" { return MOD; }
"eq" { return EQ; }
"neq" { return NEQ; }
"gt" { return GT; }
"ge" { return GE; }
"lt" { return LT; }
"le" { return LE; }
"and" { return AND; }
"or" { return OR; }
"not" { return NOT; }
"true" { return TRUE; }
"false" { return FALSE; }
"break" { return BREAK; }
"print" { return PRINT; }
[0-9]+ {return NR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

 

