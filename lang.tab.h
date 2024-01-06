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
    ARRAY_ELEMENT = 258,           /* ARRAY_ELEMENT  */
    CLASS_VAR = 259,               /* CLASS_VAR  */
    CLASS_METHOD = 260,            /* CLASS_METHOD  */
    CLASS = 261,                   /* CLASS  */
    CONST = 262,                   /* CONST  */
    NEQ = 263,                     /* NEQ  */
    GT = 264,                      /* GT  */
    GEQ = 265,                     /* GEQ  */
    LT = 266,                      /* LT  */
    LEQ = 267,                     /* LEQ  */
    AND = 268,                     /* AND  */
    OR = 269,                      /* OR  */
    NOT = 270,                     /* NOT  */
    IF = 271,                      /* IF  */
    ELSE = 272,                    /* ELSE  */
    WHILE = 273,                   /* WHILE  */
    FOR = 274,                     /* FOR  */
    SWITCH = 275,                  /* SWITCH  */
    CASE = 276,                    /* CASE  */
    ENTRY = 277,                   /* ENTRY  */
    EXIT = 278,                    /* EXIT  */
    MAIN = 279,                    /* MAIN  */
    FNENTRY = 280,                 /* FNENTRY  */
    FNEXIT = 281,                  /* FNEXIT  */
    BREAK = 282,                   /* BREAK  */
    DEFAULT = 283,                 /* DEFAULT  */
    USRDEF = 284,                  /* USRDEF  */
    GLOBALVAR = 285,               /* GLOBALVAR  */
    GLOBALFUNC = 286,              /* GLOBALFUNC  */
    RETURN = 287,                  /* RETURN  */
    PRINT = 288,                   /* PRINT  */
    ID = 289,                      /* ID  */
    TYPE = 290,                    /* TYPE  */
    EVAL = 291,                    /* EVAL  */
    TYPEOF = 292,                  /* TYPEOF  */
    STRING = 293,                  /* STRING  */
    INT = 294,                     /* INT  */
    CHAR = 295,                    /* CHAR  */
    FLOAT = 296,                   /* FLOAT  */
    BOOL = 297,                    /* BOOL  */
    EQ = 298                       /* EQ  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "lang.y"

     char* string;
     int integer;
     int boolean;
     char character;
     float floatnum;
     class AST* ASTNode;
     class Parameter* param;
     class Variable* var;

#line 118 "lang.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_LANG_TAB_H_INCLUDED  */
