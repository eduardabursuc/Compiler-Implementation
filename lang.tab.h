/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_LANG_TAB_H_INCLUDED
# define YY_YY_LANG_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    FLOAT = 259,                   /* FLOAT  */
    BOOL = 260,                    /* BOOL  */
    CHAR = 261,                    /* CHAR  */
    STRING = 262,                  /* STRING  */
    ARRAY_ELEMENT = 263,           /* ARRAY_ELEMENT  */
    CLASS_VAR = 264,               /* CLASS_VAR  */
    CLASS_METHOD = 265,            /* CLASS_METHOD  */
    CLASS = 266,                   /* CLASS  */
    ASSIGN = 267,                  /* ASSIGN  */
    PLUS = 268,                    /* PLUS  */
    MINUS = 269,                   /* MINUS  */
    MUL = 270,                     /* MUL  */
    DIV = 271,                     /* DIV  */
    MOD = 272,                     /* MOD  */
    EQ = 273,                      /* EQ  */
    NEQ = 274,                     /* NEQ  */
    GT = 275,                      /* GT  */
    GEQ = 276,                     /* GEQ  */
    LT = 277,                      /* LT  */
    LEQ = 278,                     /* LEQ  */
    AND = 279,                     /* AND  */
    OR = 280,                      /* OR  */
    NOT = 281,                     /* NOT  */
    IF = 282,                      /* IF  */
    ELSE = 283,                    /* ELSE  */
    WHILE = 284,                   /* WHILE  */
    FOR = 285,                     /* FOR  */
    SWITCH = 286,                  /* SWITCH  */
    CASE = 287,                    /* CASE  */
    ENTRY = 288,                   /* ENTRY  */
    EXIT = 289,                    /* EXIT  */
    MAIN = 290,                    /* MAIN  */
    FNENTRY = 291,                 /* FNENTRY  */
    FNEXIT = 292,                  /* FNEXIT  */
    BREAK = 293,                   /* BREAK  */
    DEFAULT = 294,                 /* DEFAULT  */
    USRDEF = 295,                  /* USRDEF  */
    GLOBALVAR = 296,               /* GLOBALVAR  */
    GLOBALFUNC = 297,              /* GLOBALFUNC  */
    RETURN = 298,                  /* RETURN  */
    PRINT = 299,                   /* PRINT  */
    ID = 300,                      /* ID  */
    TYPE = 301                     /* TYPE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "lang.y"

     char* string;
     int integer;
     int boolean;
     char character;
     float floatnum;
     Vars varType;
     FunctionInfo funcType;
     ListParam listParams;

#line 121 "lang.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_LANG_TAB_H_INCLUDED  */