%{
#include <stdio.h>
#include "lang.tab.h"
%}

%option noyywrap
%%
"ENTRY" { return ENTRY; }
"EXIT" { return EXIT; }
"USRDEF" { return USRDEF; }
"GLOBALVAR" { return GLOBALVAR; }
"GLOBALFUNC" { return GLOBALFUNC; }
"master" { return MAIN; }
"fnentry" { return FNENTRY; }
"fnexit" { return FNEXIT; }
"ret" { return RETURN; }
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
"geq" { return GEQ; }
"lt" { return LT; }
"leq" { return LEQ; }
"and" { return AND; }
"or" { return OR; }
"not" { return NOT; }
"true" { yylval.boolean = 1; return BOOL; }
"false" { yylval.boolean = 0; return BOOL; }
"break" { return BREAK; }
"print" { return PRINT; }
"=" {return ASSIGN;}
"int"|"float"|"char"|"string" {yylval.string = strdup(yytext);return TYPE;}
b[a-zA-Z][a-zA-Z0-9]* {yylval.string = strdup(yytext); return BID;}
[a-zA-Z][a-zA-Z0-9]* {yylval.string = strdup(yytext); return ID;}
[0-9]+ { yylval.integer = atoi(yytext); return INT; }
[0-9]+\.[0-9]+ { yylval.floatnum = atof(yytext); return FLOAT; }
\"[^"]*\" { yylval.string = strdup(yytext); return STRING; }
\'[^']\' { yylval.character = yytext[0]; return CHAR; }
[ \t] ;
(\r|\n|\r\n) {yylineno++;}
. {return yytext[0];}
