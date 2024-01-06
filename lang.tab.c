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
vector<int> intVals;
vector<float> floatVals;
vector<char> charVals;
vector<bool> boolVals;

void yyerror(const char * s);

#line 96 "lang.tab.c"

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
  YYSYMBOL_ARRAY_ELEMENT = 3,              /* ARRAY_ELEMENT  */
  YYSYMBOL_CLASS_VAR = 4,                  /* CLASS_VAR  */
  YYSYMBOL_CLASS_METHOD = 5,               /* CLASS_METHOD  */
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
  YYSYMBOL_FNEXIT = 26,                    /* FNEXIT  */
  YYSYMBOL_BREAK = 27,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 28,                   /* DEFAULT  */
  YYSYMBOL_USRDEF = 29,                    /* USRDEF  */
  YYSYMBOL_GLOBALVAR = 30,                 /* GLOBALVAR  */
  YYSYMBOL_GLOBALFUNC = 31,                /* GLOBALFUNC  */
  YYSYMBOL_RETURN = 32,                    /* RETURN  */
  YYSYMBOL_PRINT = 33,                     /* PRINT  */
  YYSYMBOL_ID = 34,                        /* ID  */
  YYSYMBOL_TYPE = 35,                      /* TYPE  */
  YYSYMBOL_EVAL = 36,                      /* EVAL  */
  YYSYMBOL_TYPEOF = 37,                    /* TYPEOF  */
  YYSYMBOL_STRING = 38,                    /* STRING  */
  YYSYMBOL_INT = 39,                       /* INT  */
  YYSYMBOL_CHAR = 40,                      /* CHAR  */
  YYSYMBOL_FLOAT = 41,                     /* FLOAT  */
  YYSYMBOL_BOOL = 42,                      /* BOOL  */
  YYSYMBOL_EQ = 43,                        /* EQ  */
  YYSYMBOL_44_ = 44,                       /* '+'  */
  YYSYMBOL_45_ = 45,                       /* '-'  */
  YYSYMBOL_46_ = 46,                       /* '*'  */
  YYSYMBOL_47_ = 47,                       /* '/'  */
  YYSYMBOL_48_ = 48,                       /* '%'  */
  YYSYMBOL_49_ = 49,                       /* '{'  */
  YYSYMBOL_50_ = 50,                       /* '}'  */
  YYSYMBOL_51_ = 51,                       /* ';'  */
  YYSYMBOL_52_ = 52,                       /* '('  */
  YYSYMBOL_53_ = 53,                       /* ')'  */
  YYSYMBOL_54_ = 54,                       /* ','  */
  YYSYMBOL_55_ = 55,                       /* '='  */
  YYSYMBOL_56_ = 56,                       /* '['  */
  YYSYMBOL_57_ = 57,                       /* ']'  */
  YYSYMBOL_58_ = 58,                       /* ':'  */
  YYSYMBOL_59_ = 59,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_program = 61,                   /* program  */
  YYSYMBOL_62_1 = 62,                      /* $@1  */
  YYSYMBOL_user_defined_types = 63,        /* user_defined_types  */
  YYSYMBOL_user_defined_type = 64,         /* user_defined_type  */
  YYSYMBOL_65_2 = 65,                      /* $@2  */
  YYSYMBOL_field_variables = 66,           /* field_variables  */
  YYSYMBOL_field_functions = 67,           /* field_functions  */
  YYSYMBOL_function_declaration = 68,      /* function_declaration  */
  YYSYMBOL_69_3 = 69,                      /* $@3  */
  YYSYMBOL_global_variables = 70,          /* global_variables  */
  YYSYMBOL_global_functions = 71,          /* global_functions  */
  YYSYMBOL_parameter_list = 72,            /* parameter_list  */
  YYSYMBOL_parameter = 73,                 /* parameter  */
  YYSYMBOL_variable_declaration = 74,      /* variable_declaration  */
  YYSYMBOL_class_var_declaration = 75,     /* class_var_declaration  */
  YYSYMBOL_array_declaration = 76,         /* array_declaration  */
  YYSYMBOL_int_values = 77,                /* int_values  */
  YYSYMBOL_float_values = 78,              /* float_values  */
  YYSYMBOL_bool_values = 79,               /* bool_values  */
  YYSYMBOL_char_values = 80,               /* char_values  */
  YYSYMBOL_block = 81,                     /* block  */
  YYSYMBOL_statement = 82,                 /* statement  */
  YYSYMBOL_assignment_statement = 83,      /* assignment_statement  */
  YYSYMBOL_control_statement = 84,         /* control_statement  */
  YYSYMBOL_if_statement = 85,              /* if_statement  */
  YYSYMBOL_case_block = 86,                /* case_block  */
  YYSYMBOL_value = 87,                     /* value  */
  YYSYMBOL_expression = 88,                /* expression  */
  YYSYMBOL_arithm_expr = 89,               /* arithm_expr  */
  YYSYMBOL_bool_expr = 90,                 /* bool_expr  */
  YYSYMBOL_fn_call = 91,                   /* fn_call  */
  YYSYMBOL_argument_list = 92              /* argument_list  */
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
#define YYLAST   503

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  278

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


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
       2,     2,     2,     2,     2,     2,     2,    48,     2,     2,
      52,    53,    46,    44,    54,    45,    59,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    51,
       2,    55,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    63,    66,    67,    70,    70,    77,    78,
      81,    82,    85,    85,    91,    92,    93,    94,    97,    98,
     101,   102,   103,   107,   108,   115,   125,   142,   158,   182,
     193,   219,   238,   261,   266,   272,   280,   289,   307,   324,
     341,   364,   365,   368,   369,   372,   373,   376,   377,   380,
     381,   384,   385,   386,   387,   388,   389,   390,   393,   394,
     397,   421,   438,   455,   473,   492,   509,   532,   533,   534,
     535,   536,   537,   541,   542,   546,   547,   550,   551,   552,
     553,   554,   558,   559,   564,   574,   582,   593,   604,   616,
     619,   623,   627,   630,   639,   647,   655,   669,   678,   682,
     685,   688,   691,   694,   698,   706,   714,   722,   731,   739,
     750,   754,   755,   756
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
  "\"end of file\"", "error", "\"invalid token\"", "ARRAY_ELEMENT",
  "CLASS_VAR", "CLASS_METHOD", "CLASS", "CONST", "NEQ", "GT", "GEQ", "LT",
  "LEQ", "AND", "OR", "NOT", "IF", "ELSE", "WHILE", "FOR", "SWITCH",
  "CASE", "ENTRY", "EXIT", "MAIN", "FNENTRY", "FNEXIT", "BREAK", "DEFAULT",
  "USRDEF", "GLOBALVAR", "GLOBALFUNC", "RETURN", "PRINT", "ID", "TYPE",
  "EVAL", "TYPEOF", "STRING", "INT", "CHAR", "FLOAT", "BOOL", "EQ", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'{'", "'}'", "';'", "'('", "')'", "','",
  "'='", "'['", "']'", "':'", "'.'", "$accept", "program", "$@1",
  "user_defined_types", "user_defined_type", "$@2", "field_variables",
  "field_functions", "function_declaration", "$@3", "global_variables",
  "global_functions", "parameter_list", "parameter",
  "variable_declaration", "class_var_declaration", "array_declaration",
  "int_values", "float_values", "bool_values", "char_values", "block",
  "statement", "assignment_statement", "control_statement", "if_statement",
  "case_block", "value", "expression", "arithm_expr", "bool_expr",
  "fn_call", "argument_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-167)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,   -14,    43,  -167,  -167,    74,    89,   102,  -167,  -167,
      94,     2,  -167,    69,   106,   114,  -167,   123,  -167,  -167,
    -167,   100,   125,    77,    65,     3,  -167,   133,   107,  -167,
     138,  -167,  -167,    73,   -23,   149,    36,  -167,    84,   140,
    -167,   146,   151,   155,    85,   -39,   156,  -167,   160,  -167,
    -167,    85,   164,   386,   168,  -167,   193,   206,   124,   217,
    -167,  -167,    85,  -167,   222,   226,   227,   468,  -167,   386,
    -167,    48,   254,  -167,  -167,    86,    11,  -167,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,    85,
      85,   244,   241,  -167,  -167,   159,  -167,  -167,  -167,    85,
      85,   249,   365,   385,    92,  -167,  -167,  -167,   158,  -167,
    -167,  -167,  -167,   251,   252,    53,   246,   253,   257,  -167,
    -167,  -167,   104,   188,   188,   188,   188,   188,   188,    26,
      26,  -167,  -167,  -167,  -167,   293,  -167,   180,  -167,    85,
      -7,    17,   277,   264,   267,   268,   270,   271,   275,   401,
      83,   295,  -167,  -167,     4,  -167,  -167,  -167,   218,  -167,
    -167,  -167,  -167,   -31,   142,   152,   195,  -167,   468,   468,
     170,   276,   307,   307,   307,  -167,  -167,  -167,   288,   289,
     290,   285,   286,  -167,   309,   312,   185,  -167,   310,   300,
     314,   305,   324,   322,   335,   328,   235,   240,    85,   163,
       8,    55,    63,  -167,  -167,  -167,   326,   327,   350,  -167,
     338,     4,  -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,
     371,  -167,    14,   257,  -167,  -167,  -167,  -167,   331,  -167,
     163,   333,   344,   352,   242,   320,  -167,   468,  -167,    -8,
     277,   468,   353,   468,   468,   468,   361,   362,   363,   364,
     273,   468,  -167,   356,   438,   468,   280,   313,   318,  -167,
    -167,  -167,  -167,  -167,   351,   369,   370,   444,  -167,  -167,
    -167,  -167,   468,  -167,   377,   358,  -167,  -167
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     4,     1,     0,     0,    14,     5,     6,
       0,     0,    17,     0,     0,     0,    18,     0,    15,    16,
       8,     0,     0,     0,     0,    10,    33,     0,     0,     2,
       0,    19,    25,     0,     0,     0,     0,     9,     0,     0,
      29,     0,     0,     0,     0,    93,     0,    90,     0,    91,
     103,     0,     0,    82,    83,    92,     0,     0,     0,     0,
      11,    34,   111,    35,     0,     0,     0,     0,    12,     0,
     101,     0,     0,    27,    26,     0,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,   112,     0,    32,    31,    30,     0,
       0,     0,     0,     0,     0,    51,    53,    52,     0,    49,
      54,    55,    67,     0,     0,     0,     0,     0,    94,    95,
      89,   102,     0,   109,   104,   106,   105,   107,   108,    84,
      85,    87,    86,    88,    99,   100,    36,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    56,    20,    96,    97,    98,     0,    42,
      48,    44,    46,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,     0,    58,    59,    57,     0,     0,
       0,     0,     0,     3,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    61,    60,     0,     0,     0,    23,
       0,     0,    41,    37,    43,    38,    45,    40,    47,    39,
       0,    71,     0,     0,    81,    77,    78,    79,     0,    80,
       0,     0,     0,     0,     0,     0,    24,     0,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,    66,
      65,    64,    63,    13,     0,     0,     0,     0,    69,    70,
      68,    73,     0,    75,     0,     0,    76,    72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,   384,  -167,
    -167,  -167,  -167,   211,     7,   429,   427,  -167,  -167,  -167,
    -167,  -166,  -104,  -137,  -167,   207,    70,   219,   -40,   -32,
     -30,   -27,  -167
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    42,     5,     8,    13,    25,    36,    31,   114,
      11,    23,   186,   187,   105,   106,   107,   163,   164,   165,
     166,   108,   109,   110,   111,   112,   200,   228,    52,    53,
      54,    55,    95
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    66,   196,   197,   152,   171,    89,    90,    99,    15,
      15,   184,    69,    62,    70,     3,    56,    71,    18,    75,
      72,    76,    94,   188,    89,    90,   189,    89,    90,   230,
      89,    90,    37,    16,    57,     1,   231,    17,    35,   185,
     113,   251,   168,     4,   117,   119,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,    69,    69,   134,
     135,    30,   145,   148,   121,   240,   169,    69,    69,   140,
     141,   250,    86,    87,    88,   254,   230,   256,   257,   258,
       6,   113,   115,   232,   230,   264,    59,   116,    44,   267,
     158,   233,   152,   152,    78,    79,    80,    81,    82,   167,
      44,    29,    30,   253,     7,    62,   275,    45,    10,   180,
     155,    46,    47,    48,    49,    50,    32,   181,    20,    45,
      33,    34,   182,     9,    47,    51,    49,    50,    14,    83,
      84,    85,    86,    87,    88,    61,    62,    51,    45,   120,
      21,   113,   113,    47,    62,    49,   152,   149,   150,    22,
     152,    26,   152,   152,   152,    27,   122,    24,    40,    28,
     152,    44,    41,   152,    10,    15,    69,    38,   222,   113,
     113,   152,   229,    43,    99,    32,   100,   101,   102,    33,
      45,    89,    90,    58,    64,    47,    65,    49,    50,    68,
     103,    63,   104,    17,   247,   249,   190,   223,    51,   191,
      67,   224,   225,   229,   226,   227,   192,    73,   151,   193,
     113,    74,   138,   139,   113,    77,   113,   113,   113,   159,
     160,   161,   162,   113,   113,   149,   150,   113,   113,   113,
     113,   113,    84,    85,    86,    87,    88,   113,   210,   211,
     113,    10,    15,   201,   202,   113,    10,    15,   113,   194,
      91,    99,   195,   100,   101,   102,    99,    44,   100,   101,
     102,    92,    84,    85,    86,    87,    88,   103,    93,   104,
      17,   120,   103,    96,   104,    17,    45,    97,    98,    10,
      15,    47,   246,    49,    50,   220,    10,    15,   118,    99,
     221,   100,   101,   102,    51,   136,    99,   137,   100,   101,
     102,   142,   153,   156,   154,   103,    89,   104,    17,    62,
     157,   170,   103,   172,   104,    17,   173,   174,   183,    10,
      15,   175,   176,   263,    10,    15,   177,   198,   199,    99,
     268,   100,   101,   102,    99,    44,   100,   101,   102,   203,
     204,   205,   206,   207,   208,   103,   209,   104,    17,   212,
     103,   213,   104,    17,    45,   214,   215,    10,    15,    47,
     248,    49,    50,   269,    10,    15,   216,    99,   270,   100,
     101,   102,    51,   217,    99,   218,   100,   101,   102,   219,
      44,   234,   235,   103,   236,   104,    17,   237,   239,   241,
     103,   243,   104,    17,    78,    79,    80,    81,    82,    45,
      44,   271,   244,   143,    47,   144,    49,    50,   277,   265,
     245,   255,   259,   260,   261,   262,    44,    51,   272,    45,
      60,   273,   238,   146,    47,   147,    49,    50,   276,    83,
      84,    85,    86,    87,    88,    45,    12,    51,    19,   178,
      47,   179,    49,    50,    10,    15,   252,     0,     0,   242,
      10,    15,     0,    51,    99,     0,   100,   101,   102,     0,
      99,     0,   100,   101,   102,   266,     0,     0,     0,     0,
     103,   274,   104,    17,    10,    15,   103,     0,   104,    17,
       0,     0,     0,     0,    99,     0,   100,   101,   102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     103,     0,   104,    17
};

static const yytype_int16 yycheck[] =
{
      27,    41,   168,   169,   108,   142,    13,    14,    16,     7,
       7,     7,    44,    52,    44,    29,    39,    56,    11,    51,
      59,    51,    62,    54,    13,    14,    57,    13,    14,    21,
      13,    14,    25,    31,    57,    22,    28,    35,    35,    35,
      67,    49,    49,     0,    71,    72,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    89,
      90,    25,   102,   103,    53,    51,    49,    99,   100,    99,
     100,   237,    46,    47,    48,   241,    21,   243,   244,   245,
       6,   108,    34,    28,    21,   251,    50,    39,    15,   255,
     122,    28,   196,   197,     8,     9,    10,    11,    12,   139,
      15,    24,    25,   240,    30,    52,   272,    34,     6,   149,
      57,    38,    39,    40,    41,    42,    51,    34,    49,    34,
      55,    56,    39,    34,    39,    52,    41,    42,    34,    43,
      44,    45,    46,    47,    48,    51,    52,    52,    34,    53,
      34,   168,   169,    39,    52,    41,   250,    55,    56,    35,
     254,    51,   256,   257,   258,    55,    52,    34,    51,    34,
     264,    15,    55,   267,     6,     7,   198,    34,   198,   196,
     197,   275,   199,    35,    16,    51,    18,    19,    20,    55,
      34,    13,    14,    34,    38,    39,    40,    41,    42,    34,
      32,    51,    34,    35,   234,   235,    54,    34,    52,    57,
      49,    38,    39,   230,    41,    42,    54,    51,    50,    57,
     237,    51,    53,    54,   241,    51,   243,   244,   245,    39,
      40,    41,    42,   250,   251,    55,    56,   254,   255,   256,
     257,   258,    44,    45,    46,    47,    48,   264,    53,    54,
     267,     6,     7,   173,   174,   272,     6,     7,   275,    54,
      57,    16,    57,    18,    19,    20,    16,    15,    18,    19,
      20,    55,    44,    45,    46,    47,    48,    32,    51,    34,
      35,    53,    32,    51,    34,    35,    34,    51,    51,     6,
       7,    39,    40,    41,    42,    50,     6,     7,    34,    16,
      50,    18,    19,    20,    52,    51,    16,    56,    18,    19,
      20,    52,    51,    57,    52,    32,    13,    34,    35,    52,
      57,    34,    32,    49,    34,    35,    49,    49,    23,     6,
       7,    51,    51,    50,     6,     7,    51,    51,    21,    16,
      50,    18,    19,    20,    16,    15,    18,    19,    20,    51,
      51,    51,    57,    57,    35,    32,    34,    34,    35,    39,
      32,    51,    34,    35,    34,    41,    51,     6,     7,    39,
      40,    41,    42,    50,     6,     7,    42,    16,    50,    18,
      19,    20,    52,    51,    16,    40,    18,    19,    20,    51,
      15,    55,    55,    32,    34,    34,    35,    49,    17,    58,
      32,    58,    34,    35,     8,     9,    10,    11,    12,    34,
      15,    50,    58,    38,    39,    40,    41,    42,    50,    53,
      58,    58,    51,    51,    51,    51,    15,    52,    49,    34,
      36,    51,   211,    38,    39,    40,    41,    42,    51,    43,
      44,    45,    46,    47,    48,    34,     7,    52,    11,    38,
      39,    40,    41,    42,     6,     7,   239,    -1,    -1,   230,
       6,     7,    -1,    52,    16,    -1,    18,    19,    20,    -1,
      16,    -1,    18,    19,    20,    27,    -1,    -1,    -1,    -1,
      32,    27,    34,    35,     6,     7,    32,    -1,    34,    35,
      -1,    -1,    -1,    -1,    16,    -1,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    22,    61,    29,     0,    63,     6,    30,    64,    34,
       6,    70,    75,    65,    34,     7,    31,    35,    74,    76,
      49,    34,    35,    71,    34,    66,    51,    55,    34,    24,
      25,    68,    51,    55,    56,    35,    67,    74,    34,    91,
      51,    55,    62,    35,    15,    34,    38,    39,    40,    41,
      42,    52,    88,    89,    90,    91,    39,    57,    34,    50,
      68,    51,    52,    51,    38,    40,    88,    49,    34,    89,
      90,    56,    59,    51,    51,    89,    90,    51,     8,     9,
      10,    11,    12,    43,    44,    45,    46,    47,    48,    13,
      14,    57,    55,    51,    88,    92,    51,    51,    51,    16,
      18,    19,    20,    32,    34,    74,    75,    76,    81,    82,
      83,    84,    85,    91,    69,    34,    39,    91,    34,    91,
      53,    53,    52,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    51,    56,    53,    54,
      90,    90,    52,    38,    40,    88,    38,    40,    88,    55,
      56,    50,    82,    51,    52,    57,    57,    57,    89,    39,
      40,    41,    42,    77,    78,    79,    80,    88,    49,    49,
      34,    83,    49,    49,    49,    51,    51,    51,    38,    40,
      88,    34,    39,    23,     7,    35,    72,    73,    54,    57,
      54,    57,    54,    57,    54,    57,    81,    81,    51,    21,
      86,    86,    86,    51,    51,    51,    57,    57,    35,    34,
      53,    54,    39,    51,    41,    51,    42,    51,    40,    51,
      50,    50,    90,    34,    38,    39,    41,    42,    87,    91,
      21,    28,    28,    28,    55,    55,    34,    49,    73,    17,
      51,    58,    87,    58,    58,    58,    40,    88,    40,    88,
      81,    49,    85,    83,    81,    58,    81,    81,    81,    51,
      51,    51,    51,    50,    81,    53,    27,    81,    50,    50,
      50,    50,    49,    51,    27,    81,    51,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    62,    61,    63,    63,    65,    64,    66,    66,
      67,    67,    69,    68,    70,    70,    70,    70,    71,    71,
      72,    72,    72,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    75,    75,    75,    76,    76,    76,    76,
      76,    77,    77,    78,    78,    79,    79,    80,    80,    81,
      81,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    84,    84,    84,
      84,    84,    84,    85,    85,    86,    86,    87,    87,    87,
      87,    87,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      91,    92,    92,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,    13,     0,     2,     0,     8,     0,     2,
       0,     2,     0,    10,     0,     2,     2,     1,     0,     2,
       0,     1,     3,     2,     3,     3,     5,     5,     5,     4,
       6,     6,     6,     4,     6,     6,     6,     9,     9,     9,
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
#line 63 "lang.y"
                                                                                                     { scope = "main"; }
#line 1399 "lang.tab.c"
    break;

  case 3: /* program: ENTRY USRDEF user_defined_types GLOBALVAR global_variables GLOBALFUNC global_functions MAIN $@1 '{' block '}' EXIT  */
#line 63 "lang.y"
                                                                                                                                            {printf("Program is correct!\n");}
#line 1405 "lang.tab.c"
    break;

  case 6: /* $@2: %empty  */
#line 70 "lang.y"
                            { scope = (yyvsp[0].string); }
#line 1411 "lang.tab.c"
    break;

  case 7: /* user_defined_type: CLASS ID $@2 '{' field_variables field_functions '}' ';'  */
#line 70 "lang.y"
                                                                                        {
                        UserDefinedType type((yyvsp[-6].string));
                        ids.addUsrDef(type);
                        scope = "global";
}
#line 1421 "lang.tab.c"
    break;

  case 8: /* field_variables: %empty  */
#line 77 "lang.y"
                           {}
#line 1427 "lang.tab.c"
    break;

  case 9: /* field_variables: field_variables variable_declaration  */
#line 78 "lang.y"
                                                      {  }
#line 1433 "lang.tab.c"
    break;

  case 10: /* field_functions: %empty  */
#line 81 "lang.y"
                           { }
#line 1439 "lang.tab.c"
    break;

  case 11: /* field_functions: field_functions function_declaration  */
#line 82 "lang.y"
                                                      { }
#line 1445 "lang.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 85 "lang.y"
                                      {Function func((yyvsp[0].string), (yyvsp[-1].string), globalParams, scope); ids.addFunc(func); globalParams.clear(); scope = (yyvsp[0].string); }
#line 1451 "lang.tab.c"
    break;

  case 13: /* function_declaration: FNENTRY TYPE ID $@3 '(' parameter_list ')' '{' block '}'  */
#line 85 "lang.y"
                                                                                                                                                                               {                                          
                        scope = "global";

                    }
#line 1460 "lang.tab.c"
    break;

  case 20: /* parameter_list: %empty  */
#line 101 "lang.y"
                 {}
#line 1466 "lang.tab.c"
    break;

  case 21: /* parameter_list: parameter  */
#line 102 "lang.y"
                           { }
#line 1472 "lang.tab.c"
    break;

  case 22: /* parameter_list: parameter_list ',' parameter  */
#line 103 "lang.y"
                                               { }
#line 1478 "lang.tab.c"
    break;

  case 23: /* parameter: TYPE ID  */
#line 107 "lang.y"
                    { globalParams.push_back(Parameter((yyvsp[0].string), (yyvsp[-1].string)));}
#line 1484 "lang.tab.c"
    break;

  case 24: /* parameter: CONST TYPE ID  */
#line 108 "lang.y"
                         { 
            Parameter param((yyvsp[0].string), (yyvsp[-1].string));
            param.isConst = true; 
            globalParams.push_back(param);
         }
#line 1494 "lang.tab.c"
    break;

  case 25: /* variable_declaration: TYPE ID ';'  */
#line 115 "lang.y"
                                  {
                        if( ids.exists((yyvsp[-1].string)) ){
                            printf("Variable already exists.");
                            return 1;
                        } else {
                            Value val((yyvsp[-2].string));
                            Variable var((yyvsp[-1].string), val);
                            ids.addVar(var);
                        }                        
                    }
#line 1509 "lang.tab.c"
    break;

  case 26: /* variable_declaration: TYPE ID '=' CHAR ';'  */
#line 125 "lang.y"
                                           {
                        string type = "char";
                        if( ids.exists((yyvsp[-3].string)) ){
                            printf("Variable already exists.");
                            return 1;
                        } else if ((yyvsp[-4].string) == type){
                            Value val(type);
                            val.isCharSet = true;
                            val.charVal = (yyvsp[-1].character);
                            Variable var((yyvsp[-3].string), val);
                            ids.addVar(var);
                            printf("Expr value: %c", val.charVal);
                        }  else {
                            printf("Different types.");
                            return 1;
                        }                     
                    }
#line 1531 "lang.tab.c"
    break;

  case 27: /* variable_declaration: TYPE ID '=' STRING ';'  */
#line 142 "lang.y"
                                             {
                        string type = "string";
                        if( ids.exists((yyvsp[-3].string)) ){
                            printf("Variable already exists.");
                            return 1;
                        } else if ((yyvsp[-4].string) == type){
                            Value val(type);
                            val.isStringSet = true;
                            val.stringVal = (yyvsp[-1].string);
                            Variable var((yyvsp[-3].string), val);
                            ids.addVar(var);
                        }  else {
                            printf("Different types.");
                            return 1;
                        }                     
                    }
#line 1552 "lang.tab.c"
    break;

  case 28: /* variable_declaration: TYPE ID '=' expression ';'  */
#line 158 "lang.y"
                                                 {
                        if ( ids.exists((yyvsp[-3].string)) ){
                            printf("Variable already exists.");
                            return 1;
                        }
                        if ((yyvsp[-4].string) == (yyvsp[-1].ASTNode)->TypeOf()) {
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
                            ids.addVar(var);
                        } else {
                            printf("Different types.");
                            return 1;
                        }
                    }
#line 1581 "lang.tab.c"
    break;

  case 29: /* variable_declaration: CONST TYPE ID ';'  */
#line 182 "lang.y"
                                         { 
                        if ( ids.exists((yyvsp[-1].string)) ){
                            printf("Variable already exists.");
                            return 1;
                        } else {
                            Value val((yyvsp[-2].string));
                            val.isConst = true;
                            Variable var((yyvsp[-1].string), val);
                            ids.addVar(var);
                        }
                    }
#line 1597 "lang.tab.c"
    break;

  case 30: /* variable_declaration: CONST TYPE ID '=' expression ';'  */
#line 193 "lang.y"
                                                        { 
                        if ( ids.exists((yyvsp[-3].string)) ){
                            printf("Variable already exists.");
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
                            ids.addVar(var);
                        } else {
                            printf("Different types.");
                            return 1;
                        }
                        
                    }
#line 1628 "lang.tab.c"
    break;

  case 31: /* variable_declaration: CONST TYPE ID '=' CHAR ';'  */
#line 219 "lang.y"
                                                  { 
                        if ( ids.exists((yyvsp[-3].string)) ){
                            printf("Variable already exists.");
                            return 1;
                        }
                       string type = "char";
                        if ( (yyvsp[-4].string) == type) {
                            Value val((yyvsp[-4].string));
                            val.isConst = true;
                            val.charVal = (yyvsp[-1].character);
                            val.isCharSet = true;
                            Variable var((yyvsp[-3].string), val);
                            ids.addVar(var);
                        } else {
                            printf("Different types.");
                            return 1;
                        }
                        
                    }
#line 1652 "lang.tab.c"
    break;

  case 32: /* variable_declaration: CONST TYPE ID '=' STRING ';'  */
#line 238 "lang.y"
                                                    { 
                        if ( ids.exists((yyvsp[-3].string)) ){
                            printf("Variable already exists.");
                            return 1;
                        }
                        string type = "string";
                        if ((yyvsp[-4].string) == "string") {
                            Value val((yyvsp[-4].string));
                            val.isConst = true;
                            val.stringVal = (yyvsp[-1].string);
                            val.isStringSet = true;
                            Variable var((yyvsp[-3].string), val);
                            ids.addVar(var);
                        } else {
                            printf("Different types.");
                            return 1;
                        }
                        
                    }
#line 1676 "lang.tab.c"
    break;

  case 33: /* class_var_declaration: CLASS ID ID ';'  */
#line 261 "lang.y"
                                       {
                            Value val((yyvsp[-2].string));
                            Variable var((yyvsp[-1].string), val);
                            ids.addVar(var);
                     }
#line 1686 "lang.tab.c"
    break;

  case 34: /* class_var_declaration: CLASS ID ID '=' ID ';'  */
#line 266 "lang.y"
                                              {
                            //check if they have same type
                            Value val((yyvsp[-4].string));
                            Variable var((yyvsp[-3].string), val);
                            ids.addVar(var);    
                     }
#line 1697 "lang.tab.c"
    break;

  case 35: /* class_var_declaration: CLASS ID ID '=' fn_call ';'  */
#line 272 "lang.y"
                                                   {
                        //check if they have same type
                            Value val((yyvsp[-4].string));
                            Variable var((yyvsp[-3].string), val);
                            ids.addVar(var);
                     }
#line 1708 "lang.tab.c"
    break;

  case 36: /* array_declaration: TYPE ID '[' INT ']' ';'  */
#line 280 "lang.y"
                                           {
                    if( ids.exists((yyvsp[-4].string)) ) {
                        printf("Array already exists.");
                        return 1;
                    } else {
                        Array arr((yyvsp[-4].string), (yyvsp[-2].integer), (yyvsp[-5].string));
                        ids.addArr(arr);
                    }
                 }
#line 1722 "lang.tab.c"
    break;

  case 37: /* array_declaration: TYPE ID '[' ']' '=' '[' int_values ']' ';'  */
#line 289 "lang.y"
                                                              {
                    if( ids.exists((yyvsp[-7].string)) ) {
                        printf("Array already exists.");
                        return 1;
                    } else {
                        Array arr((yyvsp[-7].string), static_cast<int>(intVals.size()), (yyvsp[-8].string));
                        
                        for (const auto &element : intVals) {
                            char val[10];
                            sprintf(val, "%d", element);
                            arr.push(Value(val, "int"));
                        }

                        intVals.clear();
                        ids.addArr(arr);
                        
                    }
                 }
#line 1745 "lang.tab.c"
    break;

  case 38: /* array_declaration: TYPE ID '[' ']' '=' '[' float_values ']' ';'  */
#line 307 "lang.y"
                                                                {
                    if( ids.exists((yyvsp[-7].string)) ) {
                        printf("Array already exists.");
                        return 1;
                    } else {
                        Array arr((yyvsp[-7].string), static_cast<int>(floatVals.size()), (yyvsp[-8].string));
                        
                        for (const auto &element : floatVals) {
                            char val[64];
                            sprintf(val, "%f", element);
                            arr.push(Value(val, "float"));
                        }
                        
                        ids.addArr(arr);
                        floatVals.clear();
                    }
                 }
#line 1767 "lang.tab.c"
    break;

  case 39: /* array_declaration: TYPE ID '[' ']' '=' '[' char_values ']' ';'  */
#line 324 "lang.y"
                                                               {
                    if( ids.exists((yyvsp[-7].string)) ) {
                        printf("Array already exists.");
                        return 1;
                    } else {
                        Array arr((yyvsp[-7].string), static_cast<int>(charVals.size()), (yyvsp[-8].string));
                        
                        for (const auto &element : charVals) {
                            char val[10];
                            sprintf(val, "%c", element);
                            arr.push(Value(val, "char"));
                        }
                        
                        ids.addArr(arr);
                        charVals.clear();
                    }
                 }
#line 1789 "lang.tab.c"
    break;

  case 40: /* array_declaration: TYPE ID '[' ']' '=' '[' bool_values ']' ';'  */
#line 341 "lang.y"
                                                               {
                    if( ids.exists((yyvsp[-7].string)) ) {
                        printf("Array already exists.");
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
                        
                        ids.addArr(arr);
                        boolVals.clear();
                    }
                 }
#line 1815 "lang.tab.c"
    break;

  case 41: /* int_values: int_values ',' INT  */
#line 364 "lang.y"
                               {intVals.push_back((yyvsp[0].integer));}
#line 1821 "lang.tab.c"
    break;

  case 42: /* int_values: INT  */
#line 365 "lang.y"
                {intVals.push_back((yyvsp[0].integer));}
#line 1827 "lang.tab.c"
    break;

  case 43: /* float_values: float_values ',' FLOAT  */
#line 368 "lang.y"
                                     {floatVals.push_back((yyvsp[0].floatnum));}
#line 1833 "lang.tab.c"
    break;

  case 44: /* float_values: FLOAT  */
#line 369 "lang.y"
                    {floatVals.push_back((yyvsp[0].floatnum));}
#line 1839 "lang.tab.c"
    break;

  case 45: /* bool_values: bool_values ',' BOOL  */
#line 372 "lang.y"
                                  {boolVals.push_back((yyvsp[0].boolean));}
#line 1845 "lang.tab.c"
    break;

  case 46: /* bool_values: BOOL  */
#line 373 "lang.y"
                  {boolVals.push_back((yyvsp[0].boolean));}
#line 1851 "lang.tab.c"
    break;

  case 47: /* char_values: char_values ',' CHAR  */
#line 376 "lang.y"
                                  {charVals.push_back((yyvsp[0].character));}
#line 1857 "lang.tab.c"
    break;

  case 48: /* char_values: CHAR  */
#line 377 "lang.y"
                  {charVals.push_back((yyvsp[0].character));}
#line 1863 "lang.tab.c"
    break;

  case 57: /* statement: RETURN expression ';'  */
#line 390 "lang.y"
                                 {
            
         }
#line 1871 "lang.tab.c"
    break;

  case 60: /* assignment_statement: ID '=' expression ';'  */
#line 397 "lang.y"
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
                                printf("Different types.");
                                return 1;
                            }        
                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
#line 1900 "lang.tab.c"
    break;

  case 61: /* assignment_statement: ID '=' CHAR ';'  */
#line 421 "lang.y"
                                      {
                        if( ids.exists((yyvsp[-3].string)) ) {

                            Variable& var = ids.getVar((yyvsp[-3].string));
                            if (var.val.type == "char"){
                                var.val.isCharSet = true;
                                var.val.charVal = (yyvsp[-1].character);  
                            } else {
                                printf("Different types.");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
#line 1922 "lang.tab.c"
    break;

  case 62: /* assignment_statement: ID '=' STRING ';'  */
#line 438 "lang.y"
                                        {
                        if( ids.exists((yyvsp[-3].string)) ) {

                            Variable& var = ids.getVar((yyvsp[-3].string));
                            if (var.val.type == "string"){
                                var.val.isStringSet = true;
                                var.val.stringVal = (yyvsp[-1].string);  
                            } else {
                                printf("Different types.");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
#line 1944 "lang.tab.c"
    break;

  case 63: /* assignment_statement: ID '[' INT ']' '=' expression ';'  */
#line 455 "lang.y"
                                                        {

                        Value result = (yyvsp[-1].ASTNode)->Eval();
                        if( ids.exists((yyvsp[-6].string)) ) {
                            
                            Array& arr = ids.getArray((yyvsp[-6].string));
                            if (arr.type == result.type){
                                arr.add((yyvsp[-4].integer), result);
                            } else {
                                printf("Different types.");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
#line 1967 "lang.tab.c"
    break;

  case 64: /* assignment_statement: ID '[' INT ']' '=' CHAR ';'  */
#line 473 "lang.y"
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
                                printf("Different types.");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
#line 1991 "lang.tab.c"
    break;

  case 65: /* assignment_statement: ID '[' ID ']' '=' expression ';'  */
#line 492 "lang.y"
                                                       {
                        Value result = (yyvsp[-1].ASTNode)->Eval();
                        if( ids.exists((yyvsp[-6].string)) && ids.exists((yyvsp[-4].string))) {
                            Array& arr = ids.getArray((yyvsp[-6].string));
                            Value& val = ids.getVar((yyvsp[-4].string)).val;
                            if (arr.type == result.type && val.type == "int"){
                                arr.add(val.intVal, result);
                            } else {
                                printf("Different types.");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
#line 2013 "lang.tab.c"
    break;

  case 66: /* assignment_statement: ID '[' ID ']' '=' CHAR ';'  */
#line 509 "lang.y"
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
                                printf("Different types.");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
#line 2039 "lang.tab.c"
    break;

  case 82: /* expression: arithm_expr  */
#line 558 "lang.y"
                        { (yyval.ASTNode) = (yyvsp[0].ASTNode); }
#line 2045 "lang.tab.c"
    break;

  case 83: /* expression: bool_expr  */
#line 559 "lang.y"
                      { (yyval.ASTNode) = (yyvsp[0].ASTNode); }
#line 2051 "lang.tab.c"
    break;

  case 84: /* arithm_expr: arithm_expr '+' arithm_expr  */
#line 564 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "+", (yyvsp[0].ASTNode)); 
               else{
                    printf("Different types between: %s and %s", (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());
                    
                    return 1;
               }

           }
#line 2066 "lang.tab.c"
    break;

  case 85: /* arithm_expr: arithm_expr '-' arithm_expr  */
#line 574 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "-", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types between: %s and %s", (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());
                    return 1;
               }
           }
#line 2079 "lang.tab.c"
    break;

  case 86: /* arithm_expr: arithm_expr '/' arithm_expr  */
#line 582 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "/", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types between: ");
                    (yyvsp[-2].ASTNode)->printAst();
                    printf(" and ");
                    (yyvsp[0].ASTNode)->printAst();
                    return 1;
               }
           }
#line 2095 "lang.tab.c"
    break;

  case 87: /* arithm_expr: arithm_expr '*' arithm_expr  */
#line 593 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "*", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types between: ");
                    (yyvsp[-2].ASTNode)->printAst();
                    printf(" and ");
                    (yyvsp[0].ASTNode)->printAst();
                    return 1;
               }
           }
#line 2111 "lang.tab.c"
    break;

  case 88: /* arithm_expr: arithm_expr '%' arithm_expr  */
#line 604 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "%", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types between: ");
                    (yyvsp[-2].ASTNode)->printAst();
                    printf(" and ");
                    (yyvsp[0].ASTNode)->printAst();
                    return 1;
               }
                    
           }
#line 2128 "lang.tab.c"
    break;

  case 89: /* arithm_expr: '(' arithm_expr ')'  */
#line 616 "lang.y"
                                 {
                (yyval.ASTNode) = (yyvsp[-1].ASTNode);
           }
#line 2136 "lang.tab.c"
    break;

  case 90: /* arithm_expr: INT  */
#line 619 "lang.y"
                 {
               char* identifierText = strdup(yytext);
               (yyval.ASTNode) = new AST(new Value(identifierText, "int")); 
           }
#line 2145 "lang.tab.c"
    break;

  case 91: /* arithm_expr: FLOAT  */
#line 623 "lang.y"
                   {
               char* identifierText = strdup(yytext);
               (yyval.ASTNode) = new AST(new Value(identifierText, "float")); 
           }
#line 2154 "lang.tab.c"
    break;

  case 92: /* arithm_expr: fn_call  */
#line 627 "lang.y"
                     {
               (yyval.ASTNode) = new AST((yyvsp[0].var)->val);
            }
#line 2162 "lang.tab.c"
    break;

  case 93: /* arithm_expr: ID  */
#line 630 "lang.y"
                {
                if( ids.exists((yyvsp[0].string)) ) {
                    Value val = ids.getVar((yyvsp[0].string)).Eval();
                    (yyval.ASTNode) = new AST(val);
                } else {
                    printf("Variable not found.");
                    return 1;
                }
           }
#line 2176 "lang.tab.c"
    break;

  case 94: /* arithm_expr: ID '.' ID  */
#line 639 "lang.y"
                       { 
                if( ids.exists((yyvsp[-2].string)) ) {
                    
                } else {
                    printf("Variable not found.");
                    return 1;
                }
           }
#line 2189 "lang.tab.c"
    break;

  case 95: /* arithm_expr: ID '.' fn_call  */
#line 647 "lang.y"
                            {
                if( ids.exists((yyvsp[-2].string)) ) {
                    
                } else {
                    printf("Variable not found.");
                    return 1;
                }
           }
#line 2202 "lang.tab.c"
    break;

  case 96: /* arithm_expr: ID '[' ID ']'  */
#line 655 "lang.y"
                           {
                if( ids.exists((yyvsp[-3].string)) && ids.exists((yyvsp[-1].string))) {
                    Array arr = ids.getArray((yyvsp[-3].string));
                    Value val = ids.getVar((yyvsp[-1].string)).Eval();
                    if( val.type == "int" )
                        (yyval.ASTNode) = new AST(arr.getVal(val.intVal));
                    else {
                        printf("Invalid index.");
                    }
                } else {
                    printf("Variable not found.");
                    return 1;
                }
           }
#line 2221 "lang.tab.c"
    break;

  case 97: /* arithm_expr: ID '[' INT ']'  */
#line 669 "lang.y"
                            {
                if( ids.exists((yyvsp[-3].string)) ) {
                    Array arr = ids.getArray((yyvsp[-3].string));
                    (yyval.ASTNode) = new AST(arr.getVal((yyvsp[-1].integer)));
                }else {
                    printf("Variable not found.");
                }

           }
#line 2235 "lang.tab.c"
    break;

  case 98: /* arithm_expr: ID '[' fn_call ']'  */
#line 678 "lang.y"
                                {}
#line 2241 "lang.tab.c"
    break;

  case 99: /* bool_expr: bool_expr AND bool_expr  */
#line 682 "lang.y"
                                   {
               (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "and", (yyvsp[0].ASTNode)); 
         }
#line 2249 "lang.tab.c"
    break;

  case 100: /* bool_expr: bool_expr OR bool_expr  */
#line 685 "lang.y"
                                  {
               (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "or", (yyvsp[0].ASTNode)); 
           }
#line 2257 "lang.tab.c"
    break;

  case 101: /* bool_expr: NOT bool_expr  */
#line 688 "lang.y"
                         {
               (yyval.ASTNode) = new AST((yyvsp[0].ASTNode), "not", NULL); 
         }
#line 2265 "lang.tab.c"
    break;

  case 102: /* bool_expr: '(' bool_expr ')'  */
#line 691 "lang.y"
                             {
            (yyval.ASTNode) = (yyvsp[-1].ASTNode);
         }
#line 2273 "lang.tab.c"
    break;

  case 103: /* bool_expr: BOOL  */
#line 694 "lang.y"
                { 
            char* identifierText = strdup(yytext);
            (yyval.ASTNode) = new AST(new Value(identifierText, "bool"));
          }
#line 2282 "lang.tab.c"
    break;

  case 104: /* bool_expr: arithm_expr GT arithm_expr  */
#line 698 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "gt", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types.\n");
                    return 1;
               }
           }
#line 2295 "lang.tab.c"
    break;

  case 105: /* bool_expr: arithm_expr LT arithm_expr  */
#line 706 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "lt", (yyvsp[0].ASTNode)); 
               else{
                    printf("Different types.\n");
                    return 1;
               }
           }
#line 2308 "lang.tab.c"
    break;

  case 106: /* bool_expr: arithm_expr GEQ arithm_expr  */
#line 714 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "geq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types.\n");
                    return 1;
               }
           }
#line 2321 "lang.tab.c"
    break;

  case 107: /* bool_expr: arithm_expr LEQ arithm_expr  */
#line 722 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "leq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types.\n");
                    return 1;
               }
                    
           }
#line 2335 "lang.tab.c"
    break;

  case 108: /* bool_expr: arithm_expr EQ arithm_expr  */
#line 731 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "eq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types.\n");
                    return 1;
               }
           }
#line 2348 "lang.tab.c"
    break;

  case 109: /* bool_expr: arithm_expr NEQ arithm_expr  */
#line 739 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "neq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types.\n");
                    return 1;
               }
           }
#line 2361 "lang.tab.c"
    break;

  case 110: /* fn_call: ID '(' argument_list ')'  */
#line 750 "lang.y"
                                  { /* handle function call */ }
#line 2367 "lang.tab.c"
    break;


#line 2371 "lang.tab.c"

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

#line 759 "lang.y"

void yyerror(const char * s) {
    std::cerr << "error: " << s << " at line:" << yylineno << std::endl;
}

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");
    yyparse();

    ids.printVars();
    ids.printFuncs();
    ids.printUsrDefs();
    ids.printArrays();
    ids.exportToFile("symbol_table.txt");
    return 0;
}
