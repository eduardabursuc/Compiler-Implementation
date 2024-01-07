/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lang.y"

#include <iostream>
#include <vector>
#include "lang.h"
#include <cstring>
#include <cstdio>

using namespace std;

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();

vector<Parameter> globalParams;
class IdList ids;
string scope = "global";
string altscope;
vector<int> intVals;
vector<float> floatVals;
vector<char> charVals;
vector<bool> boolVals;
vector<Value> params;

void yyerror(const char * s);

#line 98 "lang.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "lang.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VARS = 3,                       /* VARS  */
  YYSYMBOL_FUNCS = 4,                      /* FUNCS  */
  YYSYMBOL_CONSTRUCTS = 5,                 /* CONSTRUCTS  */
  YYSYMBOL_CLASS = 6,                      /* CLASS  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_NEQ = 8,                        /* NEQ  */
  YYSYMBOL_GT = 9,                         /* GT  */
  YYSYMBOL_GEQ = 10,                       /* GEQ  */
  YYSYMBOL_LT = 11,                        /* LT  */
  YYSYMBOL_LEQ = 12,                       /* LEQ  */
  YYSYMBOL_AND = 13,                       /* AND  */
  YYSYMBOL_OR = 14,                        /* OR  */
  YYSYMBOL_NOT = 15,                       /* NOT  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_FOR = 19,                       /* FOR  */
  YYSYMBOL_SWITCH = 20,                    /* SWITCH  */
  YYSYMBOL_CASE = 21,                      /* CASE  */
  YYSYMBOL_ENTRY = 22,                     /* ENTRY  */
  YYSYMBOL_EXIT = 23,                      /* EXIT  */
  YYSYMBOL_MAIN = 24,                      /* MAIN  */
  YYSYMBOL_FNENTRY = 25,                   /* FNENTRY  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 27,                   /* DEFAULT  */
  YYSYMBOL_USRDEF = 28,                    /* USRDEF  */
  YYSYMBOL_GLOBALVAR = 29,                 /* GLOBALVAR  */
  YYSYMBOL_GLOBALFUNC = 30,                /* GLOBALFUNC  */
  YYSYMBOL_RETURN = 31,                    /* RETURN  */
  YYSYMBOL_PRINT = 32,                     /* PRINT  */
  YYSYMBOL_ID = 33,                        /* ID  */
  YYSYMBOL_TYPE = 34,                      /* TYPE  */
  YYSYMBOL_EVAL = 35,                      /* EVAL  */
  YYSYMBOL_TYPEOF = 36,                    /* TYPEOF  */
  YYSYMBOL_STRING = 37,                    /* STRING  */
  YYSYMBOL_INT = 38,                       /* INT  */
  YYSYMBOL_CHAR = 39,                      /* CHAR  */
  YYSYMBOL_FLOAT = 40,                     /* FLOAT  */
  YYSYMBOL_BOOL = 41,                      /* BOOL  */
  YYSYMBOL_EQ = 42,                        /* EQ  */
  YYSYMBOL_43_ = 43,                       /* '+'  */
  YYSYMBOL_44_ = 44,                       /* '-'  */
  YYSYMBOL_45_ = 45,                       /* '*'  */
  YYSYMBOL_46_ = 46,                       /* '/'  */
  YYSYMBOL_47_ = 47,                       /* '%'  */
  YYSYMBOL_48_ = 48,                       /* '{'  */
  YYSYMBOL_49_ = 49,                       /* '}'  */
  YYSYMBOL_50_ = 50,                       /* ';'  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* ','  */
  YYSYMBOL_54_ = 54,                       /* '='  */
  YYSYMBOL_55_ = 55,                       /* '['  */
  YYSYMBOL_56_ = 56,                       /* ']'  */
  YYSYMBOL_57_ = 57,                       /* ':'  */
  YYSYMBOL_58_ = 58,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_program = 60,                   /* program  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_user_defined_types = 62,        /* user_defined_types  */
  YYSYMBOL_user_defined_type = 63,         /* user_defined_type  */
  YYSYMBOL_64_2 = 64,                      /* $@2  */
  YYSYMBOL_field_variables = 65,           /* field_variables  */
  YYSYMBOL_field_functions = 66,           /* field_functions  */
  YYSYMBOL_function_declaration = 67,      /* function_declaration  */
  YYSYMBOL_68_3 = 68,                      /* $@3  */
  YYSYMBOL_global_variables = 69,          /* global_variables  */
  YYSYMBOL_global_functions = 70,          /* global_functions  */
  YYSYMBOL_parameter_list = 71,            /* parameter_list  */
  YYSYMBOL_parameter = 72,                 /* parameter  */
  YYSYMBOL_variable_declaration = 73,      /* variable_declaration  */
  YYSYMBOL_class_var_declaration = 74,     /* class_var_declaration  */
  YYSYMBOL_array_declaration = 75,         /* array_declaration  */
  YYSYMBOL_int_values = 76,                /* int_values  */
  YYSYMBOL_float_values = 77,              /* float_values  */
  YYSYMBOL_bool_values = 78,               /* bool_values  */
  YYSYMBOL_char_values = 79,               /* char_values  */
  YYSYMBOL_block = 80,                     /* block  */
  YYSYMBOL_statement = 81,                 /* statement  */
  YYSYMBOL_assignment_statement = 82,      /* assignment_statement  */
  YYSYMBOL_control_statement = 83,         /* control_statement  */
  YYSYMBOL_if_statement = 84,              /* if_statement  */
  YYSYMBOL_case_block = 85,                /* case_block  */
  YYSYMBOL_value = 86,                     /* value  */
  YYSYMBOL_expression = 87,                /* expression  */
  YYSYMBOL_arithm_expr = 88,               /* arithm_expr  */
  YYSYMBOL_bool_expr = 89,                 /* bool_expr  */
  YYSYMBOL_fn_call = 90,                   /* fn_call  */
  YYSYMBOL_argument_list = 91              /* argument_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   473

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  278

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    47,     2,     2,
      51,    52,    45,    43,    53,    44,    58,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,    50,
       2,    54,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    66,    66,    66,    69,    70,    73,    73,    81,    82,
      83,    86,    87,    90,    90,   115,   116,   117,   118,   121,
     122,   125,   126,   127,   131,   141,   156,   179,   208,   236,
     272,   296,   334,   365,   400,   428,   468,   489,   519,   548,
     577,   611,   612,   615,   616,   619,   620,   623,   624,   627,
     628,   631,   632,   633,   634,   635,   636,   637,   652,   665,
     680,   704,   721,   738,   756,   775,   792,   815,   816,   817,
     818,   819,   820,   824,   825,   829,   830,   833,   834,   835,
     836,   837,   841,   842,   847,   856,   864,   872,   880,   889,
     892,   896,   900,   903,   912,   935,   955,   969,   978,   995,
     998,  1001,  1004,  1007,  1011,  1019,  1027,  1035,  1044,  1052,
    1063,  1107,  1108,  1109
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "VARS", "FUNCS",
  "CONSTRUCTS", "CLASS", "CONST", "NEQ", "GT", "GEQ", "LT", "LEQ", "AND",
  "OR", "NOT", "IF", "ELSE", "WHILE", "FOR", "SWITCH", "CASE", "ENTRY",
  "EXIT", "MAIN", "FNENTRY", "BREAK", "DEFAULT", "USRDEF", "GLOBALVAR",
  "GLOBALFUNC", "RETURN", "PRINT", "ID", "TYPE", "EVAL", "TYPEOF",
  "STRING", "INT", "CHAR", "FLOAT", "BOOL", "EQ", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'{'", "'}'", "';'", "'('", "')'", "','", "'='", "'['",
  "']'", "':'", "'.'", "$accept", "program", "$@1", "user_defined_types",
  "user_defined_type", "$@2", "field_variables", "field_functions",
  "function_declaration", "$@3", "global_variables", "global_functions",
  "parameter_list", "parameter", "variable_declaration",
  "class_var_declaration", "array_declaration", "int_values",
  "float_values", "bool_values", "char_values", "block", "statement",
  "assignment_statement", "control_statement", "if_statement",
  "case_block", "value", "expression", "arithm_expr", "bool_expr",
  "fn_call", "argument_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-153)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,    45,    90,  -153,  -153,     3,    67,  -153,  -153,  -153,
      88,    64,   145,    85,  -153,   153,  -153,  -153,  -153,   197,
     169,   183,   185,   188,  -153,   -24,   137,  -153,   131,  -153,
    -153,   108,   -25,    74,  -153,   200,  -153,   190,   205,   203,
     363,    66,   212,  -153,   218,  -153,  -153,   363,   225,   348,
     246,  -153,   221,   226,  -153,  -153,  -153,   232,   240,   259,
     262,   435,  -153,   348,  -153,   363,   -15,   281,  -153,  -153,
      25,   -10,  -153,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   363,   363,   272,   268,    15,  -153,
    -153,  -153,  -153,   363,   363,   273,   266,   328,   219,  -153,
    -153,  -153,    95,  -153,  -153,  -153,  -153,   275,   278,  -153,
     214,   115,   279,   280,   287,  -153,  -153,  -153,   141,   392,
     392,   392,   392,   392,   392,   106,   106,  -153,  -153,  -153,
    -153,   331,  -153,   208,   293,  -153,    11,    14,   313,   301,
     302,   303,   327,   332,   333,   347,   139,   330,  -153,  -153,
       4,  -153,   363,  -153,  -153,  -153,   329,  -153,  -153,  -153,
    -153,    86,   132,   148,   162,   339,   435,   435,   231,   352,
     343,   343,   343,  -153,  -153,  -153,   355,   356,   357,   315,
     341,  -153,   374,   377,   239,  -153,  -153,   378,   365,   382,
     367,   384,   368,   389,   373,  -153,   201,   206,   363,    46,
      53,    55,   113,  -153,  -153,  -153,   375,   390,   398,  -153,
     395,     4,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
     429,  -153,     8,   287,  -153,  -153,  -153,  -153,   399,  -153,
      46,   400,   401,   402,    92,   122,  -153,   435,  -153,    -9,
     313,   435,   403,   435,   435,   435,   411,   412,   413,   415,
     238,   435,  -153,   397,   393,   435,   245,   277,   282,  -153,
    -153,  -153,  -153,  -153,   314,   404,   417,   414,  -153,  -153,
    -153,  -153,   435,  -153,   420,   321,  -153,  -153
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     4,     1,     0,     0,    15,     5,     6,
       0,     0,     0,     0,    19,     0,    16,    18,    17,     0,
       0,     0,     0,     0,     8,     0,     0,     2,     0,    20,
      26,     0,     0,     0,    34,     0,    30,     0,     0,     0,
       0,    93,     0,    90,     0,    91,   103,     0,     0,    82,
      83,    92,     0,     0,    11,     9,    10,     0,     0,     0,
       0,     0,    13,     0,   101,   111,     0,     0,    28,    27,
       0,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      33,    32,    31,     0,     0,     0,     0,     0,     0,    51,
      53,    52,     0,    49,    54,    55,    67,     0,     0,   112,
       0,     0,     0,     0,    94,    95,    89,   102,     0,   109,
     104,   106,   105,   107,   108,    84,    85,    87,    86,    88,
      99,   100,    36,     0,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    56,
      21,   110,     0,    96,    97,    98,     0,    42,    48,    44,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,    59,    57,     0,     0,     0,     0,
       0,     3,     0,     0,     0,    22,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     0,
       0,     0,     0,    62,    61,    60,     0,     0,     0,    24,
       0,     0,    41,    37,    43,    38,    45,    40,    47,    39,
       0,    71,     0,     0,    81,    77,    78,    79,     0,    80,
       0,     0,     0,     0,     0,     0,    25,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,    66,
      65,    64,    63,    14,     0,     0,     0,     0,    69,    70,
      68,    73,     0,    75,     0,     0,    76,    72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,   362,  -153,
    -153,  -153,  -153,   253,    65,   461,    94,  -153,  -153,  -153,
    -153,  -152,  -100,  -130,  -153,   233,   147,   243,   -36,   -30,
     -28,   -61,  -153
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    38,     5,     8,    11,    33,    88,    29,   108,
      10,    22,   184,   185,    99,   100,   101,   161,   162,   163,
     164,   102,   103,   104,   105,   106,   200,   228,    48,    49,
      50,    51,   110
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     107,    60,   148,    84,    85,   113,   115,    93,   169,     6,
      63,   182,    64,    52,   196,   197,     1,    70,   111,    71,
     134,    84,    85,   112,    84,    85,    34,    84,    85,   109,
      35,    53,     7,    73,    74,    75,    76,    77,   183,   251,
      28,   107,   117,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,    63,    63,   130,   131,   240,   166,
     141,   144,   167,    63,    63,   136,   137,    78,    79,    80,
      81,    82,    83,     3,   230,    16,   230,   116,    54,   223,
     231,    13,   232,   224,   225,   250,   226,   227,   156,   254,
       4,   256,   257,   258,    12,    13,   148,   148,    55,   264,
       9,    12,    13,   267,    18,   107,   107,    40,    15,   178,
     253,    93,    19,    94,    95,    96,   186,    65,    14,    21,
     275,    66,    15,    40,    67,    41,    97,    56,    98,    15,
      43,   246,    45,    46,   230,   107,   107,    40,   229,   187,
     233,    41,   188,    47,   147,    42,    43,    44,    45,    46,
     148,    81,    82,    83,   148,    41,   148,   148,   148,    47,
      43,   248,    45,    46,   148,    39,    65,   148,    63,   229,
     222,   153,   179,    47,    41,   148,   107,   180,    20,    43,
     107,    45,   107,   107,   107,   189,    23,    36,   190,   107,
     107,    37,   118,   107,   107,   107,   107,   107,   247,   249,
      24,   191,    25,   107,   192,    40,   107,    12,    13,    27,
      28,   107,    12,    13,   107,   193,    26,    93,   194,    94,
      95,    96,    93,    41,    94,    95,    96,    58,    43,    59,
      45,    46,    97,    57,    98,    15,    62,    97,    30,    98,
      15,    47,    31,    32,    12,    13,   157,   158,   159,   160,
     220,    12,    13,    61,    93,   221,    94,    95,    96,    84,
      85,    93,    68,    94,    95,    96,   151,   152,    69,    97,
      65,    98,    15,   145,   146,    72,    97,    86,    98,    15,
      87,    40,    89,    12,    13,   145,   146,   263,    12,    13,
      90,   210,   211,    93,   268,    94,    95,    96,    93,    41,
      94,    95,    96,   139,    43,   140,    45,    46,    97,    91,
      98,    15,    92,    97,   114,    98,    15,    47,   201,   202,
      12,    13,   132,   133,   138,   149,   269,    12,    13,   150,
      93,   270,    94,    95,    96,   154,   155,    93,    65,    94,
      95,    96,   165,    40,    84,    97,   168,    98,    15,   170,
     171,   172,    97,   181,    98,    15,    73,    74,    75,    76,
      77,    41,    40,   271,   199,   142,    43,   143,    45,    46,
     277,   206,    79,    80,    81,    82,    83,   173,    40,    47,
      41,   116,   174,   175,   176,    43,   177,    45,    46,   195,
      78,    79,    80,    81,    82,    83,    41,   207,    47,    12,
      13,    43,   198,    45,    46,   203,   204,   205,   208,    93,
     209,    94,    95,    96,    47,   213,   212,   215,   217,   266,
      12,    13,   214,   219,    97,   216,    98,    15,   218,   234,
      93,   236,    94,    95,    96,    79,    80,    81,    82,    83,
     274,    12,    13,   237,   235,    97,   239,    98,    15,   265,
     135,    93,   272,    94,    95,    96,   241,   243,   244,   245,
     255,   259,   260,   261,   238,   262,    97,   273,    98,    15,
     276,    17,   252,   242
};

static const yytype_int16 yycheck[] =
{
      61,    37,   102,    13,    14,    66,    67,    16,   138,     6,
      40,     7,    40,    38,   166,   167,    22,    47,    33,    47,
       5,    13,    14,    38,    13,    14,    50,    13,    14,    65,
      54,    56,    29,     8,     9,    10,    11,    12,    34,    48,
      25,   102,    52,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    84,    85,    50,    48,
      96,    97,    48,    93,    94,    93,    94,    42,    43,    44,
      45,    46,    47,    28,    21,    10,    21,    52,     4,    33,
      27,     7,    27,    37,    38,   237,    40,    41,   118,   241,
       0,   243,   244,   245,     6,     7,   196,   197,    33,   251,
      33,     6,     7,   255,    10,   166,   167,    15,    34,   145,
     240,    16,    48,    18,    19,    20,   152,    51,    30,    34,
     272,    55,    34,    15,    58,    33,    31,    33,    33,    34,
      38,    39,    40,    41,    21,   196,   197,    15,   199,    53,
      27,    33,    56,    51,    49,    37,    38,    39,    40,    41,
     250,    45,    46,    47,   254,    33,   256,   257,   258,    51,
      38,    39,    40,    41,   264,    34,    51,   267,   198,   230,
     198,    56,    33,    51,    33,   275,   237,    38,    33,    38,
     241,    40,   243,   244,   245,    53,    33,    50,    56,   250,
     251,    54,    51,   254,   255,   256,   257,   258,   234,   235,
       3,    53,    33,   264,    56,    15,   267,     6,     7,    24,
      25,   272,     6,     7,   275,    53,    33,    16,    56,    18,
      19,    20,    16,    33,    18,    19,    20,    37,    38,    39,
      40,    41,    31,    33,    33,    34,    33,    31,    50,    33,
      34,    51,    54,    55,     6,     7,    38,    39,    40,    41,
      49,     6,     7,    48,    16,    49,    18,    19,    20,    13,
      14,    16,    50,    18,    19,    20,    52,    53,    50,    31,
      51,    33,    34,    54,    55,    50,    31,    56,    33,    34,
      54,    15,    50,     6,     7,    54,    55,    49,     6,     7,
      50,    52,    53,    16,    49,    18,    19,    20,    16,    33,
      18,    19,    20,    37,    38,    39,    40,    41,    31,    50,
      33,    34,    50,    31,    33,    33,    34,    51,   171,   172,
       6,     7,    50,    55,    51,    50,    49,     6,     7,    51,
      16,    49,    18,    19,    20,    56,    56,    16,    51,    18,
      19,    20,    49,    15,    13,    31,    33,    33,    34,    48,
      48,    48,    31,    23,    33,    34,     8,     9,    10,    11,
      12,    33,    15,    49,    21,    37,    38,    39,    40,    41,
      49,    56,    43,    44,    45,    46,    47,    50,    15,    51,
      33,    52,    50,    50,    37,    38,    39,    40,    41,    50,
      42,    43,    44,    45,    46,    47,    33,    56,    51,     6,
       7,    38,    50,    40,    41,    50,    50,    50,    34,    16,
      33,    18,    19,    20,    51,    50,    38,    50,    50,    26,
       6,     7,    40,    50,    31,    41,    33,    34,    39,    54,
      16,    33,    18,    19,    20,    43,    44,    45,    46,    47,
      26,     6,     7,    48,    54,    31,    17,    33,    34,    52,
      88,    16,    48,    18,    19,    20,    57,    57,    57,    57,
      57,    50,    50,    50,   211,    50,    31,    50,    33,    34,
      50,    10,   239,   230
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    22,    60,    28,     0,    62,     6,    29,    63,    33,
      69,    64,     6,     7,    30,    34,    73,    74,    75,    48,
      33,    34,    70,    33,     3,    33,    33,    24,    25,    67,
      50,    54,    55,    65,    50,    54,    50,    54,    61,    34,
      15,    33,    37,    38,    39,    40,    41,    51,    87,    88,
      89,    90,    38,    56,     4,    73,    75,    33,    37,    39,
      87,    48,    33,    88,    89,    51,    55,    58,    50,    50,
      88,    89,    50,     8,     9,    10,    11,    12,    42,    43,
      44,    45,    46,    47,    13,    14,    56,    54,    66,    50,
      50,    50,    50,    16,    18,    19,    20,    31,    33,    73,
      74,    75,    80,    81,    82,    83,    84,    90,    68,    87,
      91,    33,    38,    90,    33,    90,    52,    52,    51,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      89,    89,    50,    55,     5,    67,    89,    89,    51,    37,
      39,    87,    37,    39,    87,    54,    55,    49,    81,    50,
      51,    52,    53,    56,    56,    56,    88,    38,    39,    40,
      41,    76,    77,    78,    79,    49,    48,    48,    33,    82,
      48,    48,    48,    50,    50,    50,    37,    39,    87,    33,
      38,    23,     7,    34,    71,    72,    87,    53,    56,    53,
      56,    53,    56,    53,    56,    50,    80,    80,    50,    21,
      85,    85,    85,    50,    50,    50,    56,    56,    34,    33,
      52,    53,    38,    50,    40,    50,    41,    50,    39,    50,
      49,    49,    89,    33,    37,    38,    40,    41,    86,    90,
      21,    27,    27,    27,    54,    54,    33,    48,    72,    17,
      50,    57,    86,    57,    57,    57,    39,    87,    39,    87,
      80,    48,    84,    82,    80,    57,    80,    80,    80,    50,
      50,    50,    50,    49,    80,    52,    26,    80,    49,    49,
      49,    49,    48,    50,    26,    80,    50,    49
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    61,    60,    62,    62,    64,    63,    65,    65,
      65,    66,    66,    68,    67,    69,    69,    69,    69,    70,
      70,    71,    71,    71,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    73,    74,    74,    75,    75,    75,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      82,    82,    82,    82,    82,    82,    82,    83,    83,    83,
      83,    83,    83,    84,    84,    85,    85,    86,    86,    86,
      86,    86,    87,    87,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    91,    91,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,    13,     0,     2,     0,    11,     0,     2,
       2,     0,     2,     0,    10,     0,     2,     2,     2,     0,
       2,     0,     1,     3,     2,     3,     3,     5,     5,     5,
       4,     6,     6,     6,     4,     6,     6,     9,     9,     9,
       9,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       2,     1,     1,     1,     1,     1,     2,     3,     3,     3,
       4,     4,     4,     7,     7,     7,     7,     1,     8,     8,
       8,     5,    11,     9,     7,     6,     7,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     3,     3,     4,     4,     4,     3,
       3,     2,     3,     1,     3,     3,     3,     3,     3,     3,
       4,     0,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 66 "lang.y"
                                                                                                     { scope = "main"; }
#line 1394 "lang.tab.c"
    break;

  case 3: /* program: ENTRY USRDEF user_defined_types GLOBALVAR global_variables GLOBALFUNC global_functions MAIN $@1 '{' block '}' EXIT  */
#line 66 "lang.y"
                                                                                                                                            {printf("Program is correct!\n");}
#line 1400 "lang.tab.c"
    break;

  case 6: /* $@2: %empty  */
#line 73 "lang.y"
                            { if(ids.existsClass((yyvsp[0].string))) {printf("Error at line %d: the class \"%s\" is already defined.\n", yylineno, (yyvsp[0].string)); return 1;} scope = (yyvsp[0].string); 
                        UserDefinedType type((yyvsp[0].string));
                        ids.addUsrDef(type);}
#line 1408 "lang.tab.c"
    break;

  case 7: /* user_defined_type: CLASS ID $@2 '{' VARS field_variables FUNCS field_functions CONSTRUCTS '}' ';'  */
#line 76 "lang.y"
                                                                                         {
                        scope = "global";
}
#line 1416 "lang.tab.c"
    break;

  case 8: /* field_variables: %empty  */
#line 81 "lang.y"
                           {}
#line 1422 "lang.tab.c"
    break;

  case 9: /* field_variables: field_variables variable_declaration  */
#line 82 "lang.y"
                                                      {  }
#line 1428 "lang.tab.c"
    break;

  case 10: /* field_variables: field_variables array_declaration  */
#line 83 "lang.y"
                                                   { }
#line 1434 "lang.tab.c"
    break;

  case 11: /* field_functions: %empty  */
#line 86 "lang.y"
                           { }
#line 1440 "lang.tab.c"
    break;

  case 12: /* field_functions: field_functions function_declaration  */
#line 87 "lang.y"
                                                      { }
#line 1446 "lang.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 90 "lang.y"
                                       {    altscope = scope;
                                            int result = ids.existsFunc((yyvsp[0].string), altscope);
                                            if( result == 1 ) {
                                                printf("Error at line %d: the function \"%s\" is already defined inside this scope: %s.\n", yylineno, (yyvsp[0].string), altscope.c_str());
                                                return 1;
                                            }
                                            else if ( result == 2 ) {
                                                printf("Error at line %d: return type specification for constructor invalid.\n", yylineno);
                                                return 1;
                                            }
                                            else if ( result == 3) {
                                                printf("Error at line %d: %s already exists as a class variable or array.\n", yylineno, (yyvsp[0].string));
                                                return 1;
                                            }
                                            Function func((yyvsp[0].string), (yyvsp[-1].string), globalParams, altscope); 
                                            ids.addFunc(func); 
                                            globalParams.clear();  
                                            scope = (yyvsp[0].string); 
                                        }
#line 1470 "lang.tab.c"
    break;

  case 14: /* function_declaration: FNENTRY TYPE ID $@3 '(' parameter_list ')' '{' block '}'  */
#line 109 "lang.y"
                                                             {                                          
                                            scope = altscope;
                        }
#line 1478 "lang.tab.c"
    break;

  case 21: /* parameter_list: %empty  */
#line 125 "lang.y"
                 {}
#line 1484 "lang.tab.c"
    break;

  case 22: /* parameter_list: parameter  */
#line 126 "lang.y"
                           { }
#line 1490 "lang.tab.c"
    break;

  case 23: /* parameter_list: parameter_list ',' parameter  */
#line 127 "lang.y"
                                               { }
#line 1496 "lang.tab.c"
    break;

  case 24: /* parameter: TYPE ID  */
#line 131 "lang.y"
                    { 
            for(const auto &param: globalParams)
            {
                if(param.name == (yyvsp[0].string))
                {
                    printf("Error at line %d: parameter \"%s\" declared more than once for this function.\n", yylineno, (yyvsp[0].string));
                    return 1;
                }
            }
    globalParams.push_back(Parameter((yyvsp[0].string), (yyvsp[-1].string)));}
#line 1511 "lang.tab.c"
    break;

  case 25: /* parameter: CONST TYPE ID  */
#line 141 "lang.y"
                         { 
            for(const auto &param: globalParams)
            {
                if(param.name == (yyvsp[0].string))
                {
                    printf("Error at line %d: parameter \"%s\" declared more than once for this function.\n", yylineno, (yyvsp[0].string));
                return 1;
                }
            }
            Parameter param((yyvsp[0].string), (yyvsp[-1].string));
            param.isConst = true; 
            globalParams.push_back(param);
         }
#line 1529 "lang.tab.c"
    break;

  case 26: /* variable_declaration: TYPE ID ';'  */
#line 156 "lang.y"
                                  {
                        int result = ids.exists((yyvsp[-1].string), scope);
                        if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-1].string));
                            return 1;
                        } 
                        else if (result == 2)
                        {
                            printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-1].string));
                            return 1;
                        }
                        else if (result == 3)
                        {
                            printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-1].string));
                            return 1;
                        }
                        else {
                            Value val((yyvsp[-2].string));
                            Variable var((yyvsp[-1].string), val);
                            var.scope = scope;
                            ids.addVar(var);
                        }
                    }
#line 1557 "lang.tab.c"
    break;

  case 27: /* variable_declaration: TYPE ID '=' CHAR ';'  */
#line 179 "lang.y"
                                           {
                        string type = "char";
                        int result = ids.exists((yyvsp[-3].string), scope);
                        if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        } 
                        else if (result == 2)
                        {
                            printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        }
                        else if (result == 3)
                        {
                            printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        }
                        else if ((yyvsp[-4].string) == type){
                            Value val(type);
                            val.isCharSet = true;
                            val.charVal = (yyvsp[-1].character);
                            Variable var((yyvsp[-3].string), val);
                            var.scope = scope;
                            ids.addVar(var);
                        }  else {
                            printf("Error at line %d: Different types.1\n", yylineno);
                            return 1;
                        }                     
                    }
#line 1591 "lang.tab.c"
    break;

  case 28: /* variable_declaration: TYPE ID '=' STRING ';'  */
#line 208 "lang.y"
                                             {
                        string type = "string";
                        int result = ids.exists((yyvsp[-3].string), scope);
                        if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        } 
                        else if (result == 2)
                        {
                            printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        }
                        else if (result == 3)
                        {
                            printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        } else if ((yyvsp[-4].string) == type){
                            Value val(type);
                            val.isStringSet = true;
                            val.stringVal = (yyvsp[-1].string);
                            Variable var((yyvsp[-3].string), val);
                            var.scope = scope;
                            ids.addVar(var);
                        }  else {
                            printf("Error at line %d: Different types.2\n", yylineno);
                            return 1;
                        }                     
                    }
#line 1624 "lang.tab.c"
    break;

  case 29: /* variable_declaration: TYPE ID '=' expression ';'  */
#line 236 "lang.y"
                                                 {
                       int result = ids.exists((yyvsp[-3].string), scope);
                        if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        } 
                        else if (result == 2)
                        {
                            printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        }
                        else if (result == 3)
                        {
                            printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        }
                        if ((yyvsp[-4].string) == (yyvsp[-1].ASTNode)->Eval().type) {
                            Value val((yyvsp[-4].string));
                            if(val.type == "int") {
                                val.isIntSet = true;
                                val.intVal = (yyvsp[-1].ASTNode)->Eval().intVal;
                            } else if (val.type == "float") {
                                val.isFloatSet = true;
                                val.floatVal = (yyvsp[-1].ASTNode)->Eval().floatVal;
                            } else if (val.type == "bool") {
                                val.isBoolSet = true;
                                val.boolVal = (yyvsp[-1].ASTNode)->Eval().boolVal;
                            }        
                            Variable var((yyvsp[-3].string), val);
                            var.scope = scope;
                            ids.addVar(var);
                        } else {
                            printf("Error at line %d: Different types.3\n", yylineno);
                            return 1;
                        }
                    }
#line 1665 "lang.tab.c"
    break;

  case 30: /* variable_declaration: CONST TYPE ID ';'  */
#line 272 "lang.y"
                                         { 
                        int result = ids.exists((yyvsp[-1].string), scope);
                        if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-1].string));
                            return 1;
                        } 
                        else if (result == 2)
                        {
                            printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-1].string));
                            return 1;
                        }
                        else if (result == 3)
                        {
                            printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-1].string));
                            return 1;
                        }
                        else {
                            Value val((yyvsp[-2].string));
                            val.isConst = true;
                            Variable var((yyvsp[-1].string), val);
                            var.scope = scope;
                            ids.addVar(var);
                        }
                    }
#line 1694 "lang.tab.c"
    break;

  case 31: /* variable_declaration: CONST TYPE ID '=' expression ';'  */
#line 296 "lang.y"
                                                        { 
                        int result = ids.exists((yyvsp[-3].string), scope);
                        if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        } 
                        else if (result == 2)
                        {
                            printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        }
                        else if (result == 3)
                        {
                            printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        }
                        if ((yyvsp[-4].string) == (yyvsp[-1].ASTNode)->TypeOf()) {
                            Value val((yyvsp[-4].string));
                            val.isConst = true;
                            if(val.type == "int") {
                                val.isIntSet = true;
                                val.intVal = (yyvsp[-1].ASTNode)->Eval().intVal;
                            } else if (val.type == "float") {
                                val.isFloatSet = true;
                                val.floatVal = (yyvsp[-1].ASTNode)->Eval().floatVal;
                            } else if (val.type == "bool") {
                                val.isBoolSet = true;
                                val.boolVal = (yyvsp[-1].ASTNode)->Eval().boolVal;
                            } 
                            Variable var((yyvsp[-3].string), val);
                            var.scope = scope;
                            ids.addVar(var);
                        } else {
                            printf("Error at line %d: Different types.4\n", yylineno);
                            return 1;
                        }
                        
                    }
#line 1737 "lang.tab.c"
    break;

  case 32: /* variable_declaration: CONST TYPE ID '=' CHAR ';'  */
#line 334 "lang.y"
                                                  { 
                        int result = ids.exists((yyvsp[-3].string), scope);
                        if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        } 
                        else if (result == 2)
                        {
                            printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        }
                        else if (result == 3)
                        {
                            printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        }
                       string type = "char";
                        if ( (yyvsp[-4].string) == type) {
                            Value val((yyvsp[-4].string));
                            val.isConst = true;
                            val.charVal = (yyvsp[-1].character);
                            val.isCharSet = true;
                            Variable var((yyvsp[-3].string), val);
                            var.scope = scope;
                            ids.addVar(var);
                        } else {
                            printf("Error at line %d: Different types.5\n",yylineno);
                            return 1;
                        }
                        
                    }
#line 1773 "lang.tab.c"
    break;

  case 33: /* variable_declaration: CONST TYPE ID '=' STRING ';'  */
#line 365 "lang.y"
                                                    { 
                        int result = ids.exists((yyvsp[-3].string), scope);
                        if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        } 
                        else if (result == 2)
                        {
                            printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        }
                        else if (result == 3)
                        {
                            printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                        }
                        string type = "string";
                        if ((yyvsp[-4].string) == "string") {
                            Value val((yyvsp[-4].string));
                            val.isConst = true;
                            val.stringVal = (yyvsp[-1].string);
                            val.isStringSet = true;
                            Variable var((yyvsp[-3].string), val);
                            var.scope = scope;
                            ids.addVar(var);
                        } else {
                            printf("Error at line %d: Different types.6\n",yylineno);
                            return 1;
                        }
                        
                    }
#line 1809 "lang.tab.c"
    break;

  case 34: /* class_var_declaration: CLASS ID ID ';'  */
#line 400 "lang.y"
                                       {
                            if(!ids.existsClass((yyvsp[-2].string)))
                            {
                                printf("Error at line %d: the class \"%s\" is not defined.\n", yylineno, (yyvsp[-2].string));
                                return 1;
                            }
                            int result = ids.exists((yyvsp[-1].string), scope);
                            if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-1].string));
                            return 1;
                            } 
                            else if (result == 2)
                            {
                                printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-1].string));
                                return 1;
                            }
                            else if (result == 3)
                            {
                                printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-1].string));
                                return 1;
                            } else {
                                Value val((yyvsp[-2].string));
                                Variable var((yyvsp[-1].string), val);
                                var.scope = scope;
                                ids.addVar(var);
                            }
                            
                     }
#line 1842 "lang.tab.c"
    break;

  case 35: /* class_var_declaration: CLASS ID ID '=' ID ';'  */
#line 428 "lang.y"
                                              { 
                            if(!ids.existsClass((yyvsp[-4].string)))
                            {
                                printf("Error at line %d: the class \"%s\" is not defined.\n", yylineno, (yyvsp[-4].string));
                                return 1;
                            }
                            int result = ids.exists((yyvsp[-3].string), scope);
                            if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-3].string));
                            return 1;
                            } 
                            else if (result == 2)
                            {
                                printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-3].string));
                                return 1;
                            }
                            else if (result == 3)
                            {
                                printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-3].string));
                                return 1;
                            } else {
                                
                                if ( !ids.exists((yyvsp[-1].string)) ){
                                printf("Error at line %d: No %s variable found.\n",yylineno, (yyvsp[-1].string));
                                return 1;
                                }
                                
                                
                                if( ids.getVar((yyvsp[-1].string)).Eval().type != (yyvsp[-4].string)) {
                                    printf("Error at line %d: Different types between %s and %s.\n",yylineno, (yyvsp[-3].string), (yyvsp[-1].string));
                                    return 1;
                                }
                                Value val((yyvsp[-4].string));
                                Variable var((yyvsp[-3].string), val);
                                var.scope = scope;
                                ids.addVar(var);
                            }   
                     }
#line 1885 "lang.tab.c"
    break;

  case 36: /* array_declaration: TYPE ID '[' INT ']' ';'  */
#line 468 "lang.y"
                                           {
                    int result = ids.exists((yyvsp[-4].string), scope);
                        if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-4].string));
                            return 1;
                        } 
                        else if (result == 2)
                        {
                            printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-4].string));
                            return 1;
                        }
                        else if (result == 3)
                        {
                            printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-4].string));
                            return 1;
                        } else {
                        Array arr((yyvsp[-4].string), (yyvsp[-2].integer), (yyvsp[-5].string));
                        arr.scope = scope;
                        ids.addArr(arr);
                    }
                 }
#line 1911 "lang.tab.c"
    break;

  case 37: /* array_declaration: TYPE ID '[' ']' '=' '[' int_values ']' ';'  */
#line 489 "lang.y"
                                                              {
                   int result = ids.exists((yyvsp[-7].string), scope);
                        if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-7].string));
                            return 1;
                        } 
                        else if (result == 2)
                        {
                            printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-7].string));
                            return 1;
                        }
                        else if (result == 3)
                        {
                            printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-7].string));
                            return 1;
                        } else {
                        Array arr((yyvsp[-7].string), static_cast<int>(intVals.size()), (yyvsp[-8].string));
                        
                        for (const auto &element : intVals) {
                            char val[10];
                            sprintf(val, "%d", element);
                            arr.push(Value(val, "int"));
                        }

                        intVals.clear();
                        arr.scope = scope;
                        ids.addArr(arr);
                        
                    }
                 }
#line 1946 "lang.tab.c"
    break;

  case 38: /* array_declaration: TYPE ID '[' ']' '=' '[' float_values ']' ';'  */
#line 519 "lang.y"
                                                                {
                    int result = ids.exists((yyvsp[-7].string), scope);
                        if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-7].string));
                            return 1;
                        } 
                        else if (result == 2)
                        {
                            printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-7].string));
                            return 1;
                        }
                        else if (result == 3)
                        {
                            printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-7].string));
                            return 1;
                        } else {
                        Array arr((yyvsp[-7].string), static_cast<int>(floatVals.size()), (yyvsp[-8].string));
                        
                        for (const auto &element : floatVals) {
                            char val[64];
                            sprintf(val, "%f", element);
                            arr.push(Value(val, "float"));
                        }
                        
                        arr.scope = scope;
                        ids.addArr(arr);
                        floatVals.clear();
                    }
                 }
#line 1980 "lang.tab.c"
    break;

  case 39: /* array_declaration: TYPE ID '[' ']' '=' '[' char_values ']' ';'  */
#line 548 "lang.y"
                                                               {
                   int result = ids.exists((yyvsp[-7].string), scope);
                        if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-7].string));
                            return 1;
                        } 
                        else if (result == 2)
                        {
                            printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-7].string));
                            return 1;
                        }
                        else if (result == 3)
                        {
                            printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-7].string));
                            return 1;
                        } else {
                        Array arr((yyvsp[-7].string), static_cast<int>(charVals.size()), (yyvsp[-8].string));
                        
                        for (const auto &element : charVals) {
                            char val[10];
                            sprintf(val, "%c", element);
                            arr.push(Value(val, "char"));
                        }
                        
                        arr.scope = scope;
                        ids.addArr(arr);
                        charVals.clear();
                    }
                 }
#line 2014 "lang.tab.c"
    break;

  case 40: /* array_declaration: TYPE ID '[' ']' '=' '[' bool_values ']' ';'  */
#line 577 "lang.y"
                                                               {
                    int result = ids.exists((yyvsp[-7].string), scope);
                        if( result == 1 ){
                            printf("Error at line %d: \"%s\" already exists as a variable or array in this scope.\n", yylineno, (yyvsp[-7].string));
                            return 1;
                        } 
                        else if (result == 2)
                        {
                            printf("Error at line %d: \"%s\" already exists as a function.\n", yylineno, (yyvsp[-7].string));
                            return 1;
                        }
                        else if (result == 3)
                        {
                            printf("Error at line %d: \"%s\" already exists as a user defined type.\n", yylineno, (yyvsp[-7].string));
                            return 1;
                        } else {
                        Array arr((yyvsp[-7].string), static_cast<int>(boolVals.size()), (yyvsp[-8].string));
                        
                        for (const auto &element : boolVals) { 
                            char val[6];
                            if (element){
                                strcpy(val, "true");
                            } else {
                                strcpy(val, "false");
                            }
                            arr.push(Value(val, "bool"));
                        }
                        arr.scope = scope;
                        ids.addArr(arr);
                        boolVals.clear();
                    }
                 }
#line 2051 "lang.tab.c"
    break;

  case 41: /* int_values: int_values ',' INT  */
#line 611 "lang.y"
                               {intVals.push_back((yyvsp[0].integer));}
#line 2057 "lang.tab.c"
    break;

  case 42: /* int_values: INT  */
#line 612 "lang.y"
                {intVals.push_back((yyvsp[0].integer));}
#line 2063 "lang.tab.c"
    break;

  case 43: /* float_values: float_values ',' FLOAT  */
#line 615 "lang.y"
                                     {floatVals.push_back((yyvsp[0].floatnum));}
#line 2069 "lang.tab.c"
    break;

  case 44: /* float_values: FLOAT  */
#line 616 "lang.y"
                    {floatVals.push_back((yyvsp[0].floatnum));}
#line 2075 "lang.tab.c"
    break;

  case 45: /* bool_values: bool_values ',' BOOL  */
#line 619 "lang.y"
                                  {boolVals.push_back((yyvsp[0].boolean));}
#line 2081 "lang.tab.c"
    break;

  case 46: /* bool_values: BOOL  */
#line 620 "lang.y"
                  {boolVals.push_back((yyvsp[0].boolean));}
#line 2087 "lang.tab.c"
    break;

  case 47: /* char_values: char_values ',' CHAR  */
#line 623 "lang.y"
                                  {charVals.push_back((yyvsp[0].character));}
#line 2093 "lang.tab.c"
    break;

  case 48: /* char_values: CHAR  */
#line 624 "lang.y"
                  {charVals.push_back((yyvsp[0].character));}
#line 2099 "lang.tab.c"
    break;

  case 57: /* statement: RETURN expression ';'  */
#line 637 "lang.y"
                                 {
            if ( scope == "main" ) {
                if ( (yyvsp[-1].ASTNode)->Eval().type != "int" ){
                    printf("Error at line %d: Error at returning a non integer in main scope.\n", yylineno);
                    return 1;
                }

            } else {
                Function fn = ids.getFunc(scope.c_str());
                if( fn.returnType != (yyvsp[-1].ASTNode)->Eval().type ){
                    printf("Error at line %d: Different returning types in function: %s.\n", yylineno, fn.name.c_str());
                    return 1;
                } 
            }
         }
#line 2119 "lang.tab.c"
    break;

  case 58: /* statement: RETURN STRING ';'  */
#line 652 "lang.y"
                             {
            if ( scope == "main") {
                printf("Error at line %d: Error at returning a non integer in main scope.\n",yylineno);
                return 1;
            } else {
                Function fn = ids.getFunc(scope.c_str());
                string type = "string";
                if( fn.returnType != type ){
                    printf("Error at line %d: Different returning types in function: %s.\n",yylineno, fn.name.c_str());
                    return 1;
                }
            }
         }
#line 2137 "lang.tab.c"
    break;

  case 59: /* statement: RETURN CHAR ';'  */
#line 665 "lang.y"
                           {
            if ( scope == "main") {
                printf("Error at line %d: Error at returning a non integer in main scope.\n",yylineno);
                return 1;
            } else {
                Function fn = ids.getFunc(scope.c_str());
                string type = "char";
                if( fn.returnType != type ){
                    printf("Error at line %d: Different returning types in function: %s.\n",yylineno, fn.name.c_str());
                    return 1;
                }
            }
         }
#line 2155 "lang.tab.c"
    break;

  case 60: /* assignment_statement: ID '=' expression ';'  */
#line 680 "lang.y"
                                            {
                        if( ids.exists((yyvsp[-3].string)) ) {
                            Value result = (yyvsp[-1].ASTNode)->Eval();
                            Variable& var = ids.getVar((yyvsp[-3].string));
                            if (var.val.type == (yyvsp[-1].ASTNode)->TypeOf()){
                                if (var.val.type == "int") {
                                    var.val.isIntSet = true;
                                    var.val.intVal = result.intVal;
                                } else if (var.val.type == "float") {
                                    var.val.isFloatSet = true;
                                    var.val.floatVal = result.floatVal;
                                } else if (var.val.type == "bool") {
                                    var.val.isBoolSet = true;
                                    var.val.boolVal = result.boolVal;
                                }
                            } else {
                                printf("Error at line %d: Different types.7\n", yylineno);
                                return 1;
                            }        
                        } else {
                            printf("Error at line %d: Variable not found.1", yylineno);
                            return 1;
                        }
                    }
#line 2184 "lang.tab.c"
    break;

  case 61: /* assignment_statement: ID '=' CHAR ';'  */
#line 704 "lang.y"
                                      {
                        if( ids.exists((yyvsp[-3].string)) ) {

                            Variable& var = ids.getVar((yyvsp[-3].string));
                            if (var.val.type == "char"){
                                var.val.isCharSet = true;
                                var.val.charVal = (yyvsp[-1].character);  
                            } else {
                                printf("Error at line %d: Different types.7", yylineno);
                                return 1;
                            }   

                        } else {
                            printf("Error at line %d: Variable not found.2",yylineno);
                            return 1;
                        }
                    }
#line 2206 "lang.tab.c"
    break;

  case 62: /* assignment_statement: ID '=' STRING ';'  */
#line 721 "lang.y"
                                        {
                        if( ids.exists((yyvsp[-3].string)) ) {

                            Variable& var = ids.getVar((yyvsp[-3].string));
                            if (var.val.type == "string"){
                                var.val.isStringSet = true;
                                var.val.stringVal = (yyvsp[-1].string);  
                            } else {
                                printf("Error at line %d: Different types.8", yylineno);
                                return 1;
                            }   

                        } else {
                            printf("Error at line %d: Variable not found.3", yylineno);
                            return 1;
                        }
                    }
#line 2228 "lang.tab.c"
    break;

  case 63: /* assignment_statement: ID '[' INT ']' '=' expression ';'  */
#line 738 "lang.y"
                                                        {

                        Value result = (yyvsp[-1].ASTNode)->Eval();
                        if( ids.exists((yyvsp[-6].string)) ) {
                            
                            Array& arr = ids.getArray((yyvsp[-6].string));
                            if (arr.type == result.type){
                                arr.add((yyvsp[-4].integer), result);
                            } else {
                                printf("Error at line %d: Different types.9",yylineno);
                                return 1;
                            }   

                        } else {
                            printf("Error at line %d: Variable not found.4",yylineno);
                            return 1;
                        }
                    }
#line 2251 "lang.tab.c"
    break;

  case 64: /* assignment_statement: ID '[' INT ']' '=' CHAR ';'  */
#line 756 "lang.y"
                                                  {
                        if( ids.exists((yyvsp[-6].string))) {
                            Array& arr = ids.getArray((yyvsp[-6].string));
                            if (arr.type == "char"){
                                Value val("char");
                                val.charVal = (yyvsp[-1].character);
                                val.isCharSet = true;
                                val.type = "char";
                                arr.add((yyvsp[-4].integer), val);
                            } else {
                                printf("Error at line %d: Different types.10", yylineno);
                                return 1;
                            }   

                        } else {
                            printf("Error at line %d: Variable not found.5", yylineno);
                            return 1;
                        }
                    }
#line 2275 "lang.tab.c"
    break;

  case 65: /* assignment_statement: ID '[' ID ']' '=' expression ';'  */
#line 775 "lang.y"
                                                       {
                        Value result = (yyvsp[-1].ASTNode)->Eval();
                        if( ids.exists((yyvsp[-6].string)) && ids.exists((yyvsp[-4].string))) {
                            Array& arr = ids.getArray((yyvsp[-6].string));
                            Value& val = ids.getVar((yyvsp[-4].string)).val;
                            if (arr.type == result.type && val.type == "int"){
                                arr.add(val.intVal, result);
                            } else {
                                printf("Error at line %d: Different types.11", yylineno);
                                return 1;
                            }   

                        } else {
                            printf("Error at line %d: Variable not found.6", yylineno);
                            return 1;
                        }
                    }
#line 2297 "lang.tab.c"
    break;

  case 66: /* assignment_statement: ID '[' ID ']' '=' CHAR ';'  */
#line 792 "lang.y"
                                                 {

                        if( ids.exists((yyvsp[-6].string)) && ids.exists((yyvsp[-4].string))) {
                            Array& arr = ids.getArray((yyvsp[-6].string));
                            Value& val = ids.getVar((yyvsp[-4].string)).val;
                            if (arr.type == "char" && val.type == "int"){
                                Value v("char");
                                v.charVal = (yyvsp[-1].character);
                                v.isCharSet = true;
                                v.type = "char";
                                arr.add(val.intVal, v);
                            } else {
                                printf("Error at line %d: Different types.12",yylineno);
                                return 1;
                            }   

                        } else {
                            printf("Error at line %d: Variable not found.7");
                            return 1;
                        }
                    }
#line 2323 "lang.tab.c"
    break;

  case 82: /* expression: arithm_expr  */
#line 841 "lang.y"
                        { (yyval.ASTNode) = (yyvsp[0].ASTNode); }
#line 2329 "lang.tab.c"
    break;

  case 83: /* expression: bool_expr  */
#line 842 "lang.y"
                      { (yyval.ASTNode) = (yyvsp[0].ASTNode); }
#line 2335 "lang.tab.c"
    break;

  case 84: /* arithm_expr: arithm_expr '+' arithm_expr  */
#line 847 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "+", (yyvsp[0].ASTNode)); 
               else{
                    printf("Error at line %d: Different types between: %s and %s", yylineno,(yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }

           }
#line 2349 "lang.tab.c"
    break;

  case 85: /* arithm_expr: arithm_expr '-' arithm_expr  */
#line 856 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "-", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types between: %s and %s", yylineno,(yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());
                    return 1;
               }
           }
#line 2362 "lang.tab.c"
    break;

  case 86: /* arithm_expr: arithm_expr '/' arithm_expr  */
#line 864 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "/", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types between: %s and %s", yylineno,(yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2375 "lang.tab.c"
    break;

  case 87: /* arithm_expr: arithm_expr '*' arithm_expr  */
#line 872 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "*", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types between: %s and %s", yylineno,(yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2388 "lang.tab.c"
    break;

  case 88: /* arithm_expr: arithm_expr '%' arithm_expr  */
#line 880 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "%", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types between: %s and %s", yylineno, (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
                    
           }
#line 2402 "lang.tab.c"
    break;

  case 89: /* arithm_expr: '(' arithm_expr ')'  */
#line 889 "lang.y"
                                 {
                (yyval.ASTNode) = (yyvsp[-1].ASTNode);
           }
#line 2410 "lang.tab.c"
    break;

  case 90: /* arithm_expr: INT  */
#line 892 "lang.y"
                 {
               char* identifierText = strdup(yytext);
               (yyval.ASTNode) = new AST(new Value(identifierText, "int")); 
           }
#line 2419 "lang.tab.c"
    break;

  case 91: /* arithm_expr: FLOAT  */
#line 896 "lang.y"
                   {
               char* identifierText = strdup(yytext);
               (yyval.ASTNode) = new AST(new Value(identifierText, "float")); 
           }
#line 2428 "lang.tab.c"
    break;

  case 92: /* arithm_expr: fn_call  */
#line 900 "lang.y"
                     {
               (yyval.ASTNode) = new AST((yyvsp[0].var)->val);
            }
#line 2436 "lang.tab.c"
    break;

  case 93: /* arithm_expr: ID  */
#line 903 "lang.y"
                {
                if( ids.exists((yyvsp[0].string)) ) {
                    Value val = ids.getVar((yyvsp[0].string)).Eval();
                    (yyval.ASTNode) = new AST(val);
                } else {
                    printf("Error at line %d: Variable not found.9", yylineno);
                    return 1;
                }
           }
#line 2450 "lang.tab.c"
    break;

  case 94: /* arithm_expr: ID '.' ID  */
#line 912 "lang.y"
                       { 
                if( ids.exists((yyvsp[-2].string)) ) {
                    if( ids.exists((yyvsp[0].string)) ) {

                        Variable var = ids.getVar((yyvsp[0].string));
                        Variable obj = ids.getVar((yyvsp[-2].string));

                        if( var.scope == obj.val.type ){
                            (yyval.ASTNode) = new AST(var.val);
                        } else {
                            printf("Error at line %d: No %s member in class %s.",yylineno, (yyvsp[0].string), (yyvsp[-2].string));
                            return 0;
                        }
                             
                    } else {
                         printf("Error at line %d: No %s member in class %s.",yylineno, (yyvsp[0].string), (yyvsp[-2].string));
                         return 0;
                    }
                } else {
                    printf("Error at line %d: Class %s not found.",yylineno, (yyvsp[-2].string));
                    return 1;
                }
           }
#line 2478 "lang.tab.c"
    break;

  case 95: /* arithm_expr: ID '.' fn_call  */
#line 935 "lang.y"
                            {
                if( ids.exists((yyvsp[-2].string)) ) {
                    
                    Variable obj = ids.getVar((yyvsp[-2].string));
                    Function fn = ids.getFunc((yyvsp[0].var)->name.c_str());

                        if( obj.val.type == fn.scope ){
                            (yyval.ASTNode) = new AST((yyvsp[0].var)->val);
                        } else {
                            printf("Error at line %d: No %s method found in class variable %s.", yylineno, (yyvsp[0].var)->name.c_str(), (yyvsp[-2].string));
                            return 0;
                        }
                    
                } else {

                    printf("Error at line %d: Variable %s not found.\n",yylineno, (yyvsp[-2].string));
                    return 1;

                }
           }
#line 2503 "lang.tab.c"
    break;

  case 96: /* arithm_expr: ID '[' ID ']'  */
#line 955 "lang.y"
                           {
                if( ids.exists((yyvsp[-3].string)) && ids.exists((yyvsp[-1].string))) {
                    Array arr = ids.getArray((yyvsp[-3].string));
                    Value val = ids.getVar((yyvsp[-1].string)).Eval();
                    if( val.type == "int" )
                        (yyval.ASTNode) = new AST(arr.getVal(val.intVal));
                    else {
                        printf("Error at line %d: Invalid index.", yylineno);
                    }
                } else {
                    printf("Error at line %d: Variable not found.10", yylineno);
                    return 1;
                }
           }
#line 2522 "lang.tab.c"
    break;

  case 97: /* arithm_expr: ID '[' INT ']'  */
#line 969 "lang.y"
                            {
                if( ids.exists((yyvsp[-3].string)) ) {
                    Array arr = ids.getArray((yyvsp[-3].string));
                    (yyval.ASTNode) = new AST(arr.getVal((yyvsp[-1].integer)));
                }else {
                    printf("Error at line %d: Variable not found.11", yylineno);
                }

           }
#line 2536 "lang.tab.c"
    break;

  case 98: /* arithm_expr: ID '[' fn_call ']'  */
#line 978 "lang.y"
                                {
                if( ids.exists((yyvsp[-3].string))) {
                    Array arr = ids.getArray((yyvsp[-3].string));

                    if( (yyvsp[-1].var)->val.type == "int" )
                        (yyval.ASTNode) = new AST(arr.getVal((yyvsp[-1].var)->val.intVal));
                    else {
                        printf("Error at line %d: Invalid index.", yylineno);
                    }
                } else {
                    printf("Error at line %d: Variable not found.12", yylineno);
                    return 1;
                }
           }
#line 2555 "lang.tab.c"
    break;

  case 99: /* bool_expr: bool_expr AND bool_expr  */
#line 995 "lang.y"
                                   {
               (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "and", (yyvsp[0].ASTNode)); 
         }
#line 2563 "lang.tab.c"
    break;

  case 100: /* bool_expr: bool_expr OR bool_expr  */
#line 998 "lang.y"
                                  {
               (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "or", (yyvsp[0].ASTNode)); 
           }
#line 2571 "lang.tab.c"
    break;

  case 101: /* bool_expr: NOT bool_expr  */
#line 1001 "lang.y"
                         {
               (yyval.ASTNode) = new AST((yyvsp[0].ASTNode), "not", NULL); 
         }
#line 2579 "lang.tab.c"
    break;

  case 102: /* bool_expr: '(' bool_expr ')'  */
#line 1004 "lang.y"
                             {
            (yyval.ASTNode) = (yyvsp[-1].ASTNode);
         }
#line 2587 "lang.tab.c"
    break;

  case 103: /* bool_expr: BOOL  */
#line 1007 "lang.y"
                { 
            char* identifierText = strdup(yytext);
            (yyval.ASTNode) = new AST(new Value(identifierText, "bool"));
          }
#line 2596 "lang.tab.c"
    break;

  case 104: /* bool_expr: arithm_expr GT arithm_expr  */
#line 1011 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "gt", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types between: %s and %s", yylineno, (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2609 "lang.tab.c"
    break;

  case 105: /* bool_expr: arithm_expr LT arithm_expr  */
#line 1019 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "lt", (yyvsp[0].ASTNode)); 
               else{
                    printf("Error at line %d: Different types between: %s and %s", yylineno, (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2622 "lang.tab.c"
    break;

  case 106: /* bool_expr: arithm_expr GEQ arithm_expr  */
#line 1027 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "geq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types between: %s and %s", yylineno, (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2635 "lang.tab.c"
    break;

  case 107: /* bool_expr: arithm_expr LEQ arithm_expr  */
#line 1035 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "leq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types.\n", yylineno);
                    return 1;
               }
                    
           }
#line 2649 "lang.tab.c"
    break;

  case 108: /* bool_expr: arithm_expr EQ arithm_expr  */
#line 1044 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "eq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types.\n", yylineno);
                    return 1;
               }
           }
#line 2662 "lang.tab.c"
    break;

  case 109: /* bool_expr: arithm_expr NEQ arithm_expr  */
#line 1052 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "neq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types.\n", yylineno);
                    return 1;
               }
           }
#line 2675 "lang.tab.c"
    break;

  case 110: /* fn_call: ID '(' argument_list ')'  */
#line 1063 "lang.y"
                                  { 
            
            if( ids.exists((yyvsp[-3].string)) ) {
                Function fn = ids.getFunc((yyvsp[-3].string));

                if ( params.size() != fn.params.size() ){
                    printf("Error at line %d: The %s function call has inapropriate number of parameters.\n", yylineno, fn.name.c_str());
                    return 1;
                } else {
                    for( int i = 0; i < params.size(); i++ ) {
                        if (params.at(i).type != fn.params.at(i).type){
                            printf("Error at line %d: The parameter .... should be of type %s.\n", yylineno, fn.params.at(i).type.c_str());
                            return 1;
                        }
                    }
                    params.clear();

                    Value result(fn.returnType);
                    if( result.type == "int" ){
                        result.intVal = 0;
                        result.isIntSet = true;
                    } else if( result.type == "float" ){
                        result.floatVal = 0.0;
                        result.isFloatSet = true;
                    } else if( result.type == "bool" ){
                        result.boolVal = true;
                        result.isIntSet = true;
                    } else if( result.type == "char" ){
                        result.charVal = '\0';
                        result.isCharSet = true;
                    } else if( result.type == "string" ){
                        result.stringVal = "";
                        result.isStringSet = true;
                    }
                    
                   
                    (yyval.var) = new Variable(fn.name.c_str(), result);

                }
            }
        }
#line 2721 "lang.tab.c"
    break;

  case 112: /* argument_list: expression  */
#line 1108 "lang.y"
                          { params.push_back((yyvsp[0].ASTNode)->Eval());}
#line 2727 "lang.tab.c"
    break;

  case 113: /* argument_list: argument_list ',' expression  */
#line 1109 "lang.y"
                                            { params.push_back((yyvsp[0].ASTNode)->Eval());}
#line 2733 "lang.tab.c"
    break;


#line 2737 "lang.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1112 "lang.y"

void yyerror(const char * s) {
    std::cerr << "error: " << s << " at line:" << yylineno << std::endl;
}

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");
    yyparse();

    /* ids.printVars();
    ids.printFuncs();
    ids.printUsrDefs();
    ids.printArrays(); */
    ids.exportToFile("symbol_table.txt");
    return 0;
}
