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
"fn" { return FNENTRY; }
"ret" { return RETURN; }
"if" { return IF; }
"else" { return ELSE; }
"while" { return WHILE; }
"for" { return FOR; }
"switch" { return SWITCH; }
"case" { return CASE; }
"eq" { return EQ; }
"neq" { return NEQ; }
"geq" { return GEQ; }
"leq" { return LEQ; }
"and" { return AND; }
"or" { return OR; }
"not" { return NOT; }
"true" { yylval.boolean = 1; return BOOL; }
"false" { yylval.boolean = 0; return BOOL; }
"break" { return BREAK; }
"print" { return PRINT; }
"int"|"float"|"char"|"string"|"bool" {yylval.string = strdup(yytext);return TYPE;}
"class" {yylval.string = strdup(yytext); return CLASS;}
[a-zA-Z][a-zA-Z0-9]* {yylval.string = strdup(yytext); return ID;}
[1-9][0-9]+|0 { yylval.integer = atoi(yytext); return INT; }
([1-9][0-9]+|0)\.[0-9]+ { yylval.floatnum = atof(yytext); return FLOAT; }
\"[^"]*\" { yylval.string = strdup(yytext); return STRING; }
\'[^']\' { yylval.character = yytext[0]; return CHAR; }
[ \t] ;
(\r|\n|\r\n) {yylineno++;}
. {return yytext[0];}
