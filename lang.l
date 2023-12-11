%{
    #include <iostream>
    #include <string.h>
    #include "lang.tab.h"
%}

%option noyywrap

%%
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
"int" { return INT; }
"float" { return FLOAT; }
"char" { return CHAR; }
"bool" { return BOOL; }
"string" { return STRING; }
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
"print" { return PRINT; }
%%