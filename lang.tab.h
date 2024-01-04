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
    CONST = 267,                   /* CONST  */
    NEQ = 268,                     /* NEQ  */
    GT = 269,                      /* GT  */
    GEQ = 270,                     /* GEQ  */
    LT = 271,                      /* LT  */
    LEQ = 272,                     /* LEQ  */
    AND = 273,                     /* AND  */
    OR = 274,                      /* OR  */
    NOT = 275,                     /* NOT  */
    IF = 276,                      /* IF  */
    ELSE = 277,                    /* ELSE  */
    WHILE = 278,                   /* WHILE  */
    FOR = 279,                     /* FOR  */
    SWITCH = 280,                  /* SWITCH  */
    CASE = 281,                    /* CASE  */
    ENTRY = 282,                   /* ENTRY  */
    EXIT = 283,                    /* EXIT  */
    MAIN = 284,                    /* MAIN  */
    FNENTRY = 285,                 /* FNENTRY  */
    FNEXIT = 286,                  /* FNEXIT  */
    BREAK = 287,                   /* BREAK  */
    DEFAULT = 288,                 /* DEFAULT  */
    USRDEF = 289,                  /* USRDEF  */
    GLOBALVAR = 290,               /* GLOBALVAR  */
    GLOBALFUNC = 291,              /* GLOBALFUNC  */
    RETURN = 292,                  /* RETURN  */
    PRINT = 293,                   /* PRINT  */
    ID = 294,                      /* ID  */
    TYPE = 295,                    /* TYPE  */
    EVAL = 296,                    /* EVAL  */
    TYPEOF = 297,                  /* TYPEOF  */
    EQ = 298                       /* EQ  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "lang.y"

     char* string;
     int integer;
     int boolean;
     char character;
     float floatnum;

#line 115 "lang.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_LANG_TAB_H_INCLUDED  */
