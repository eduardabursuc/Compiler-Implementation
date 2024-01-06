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
#define YYLAST   515

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  276

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
       0,    65,    65,    65,    68,    69,    72,    72,    79,    80,
      83,    84,    87,    87,    99,   100,   101,   102,   105,   106,
     109,   110,   111,   115,   116,   123,   134,   152,   169,   194,
     206,   233,   253,   277,   289,   313,   323,   342,   360,   378,
     401,   402,   405,   406,   409,   410,   413,   414,   417,   418,
     421,   422,   423,   424,   425,   426,   427,   442,   455,   472,
     496,   513,   530,   548,   567,   584,   607,   608,   609,   610,
     611,   612,   616,   617,   621,   622,   625,   626,   627,   628,
     629,   633,   634,   639,   648,   656,   664,   672,   681,   684,
     688,   692,   695,   704,   727,   747,   761,   770,   787,   790,
     793,   796,   799,   803,   811,   819,   827,   836,   844,   855,
     899,   900,   901
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

#define YYPACT_NINF (-163)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,   -13,    37,  -163,  -163,    12,    67,  -163,  -163,  -163,
      93,    10,   115,    81,  -163,   125,  -163,  -163,  -163,  -163,
     127,   134,   101,    82,    71,   126,   145,  -163,   140,  -163,
    -163,   319,    55,   136,    65,  -163,  -163,   164,  -163,   334,
     163,   189,   407,   -28,   179,  -163,   184,  -163,  -163,   407,
     199,    24,   122,  -163,   200,   220,   146,   208,  -163,   233,
     237,   238,   239,   480,  -163,    24,  -163,   407,   117,   249,
    -163,  -163,    74,     9,  -163,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   407,   407,   246,   250,
    -163,  -163,  -163,  -163,  -163,   407,   407,   256,   349,   364,
     132,  -163,  -163,  -163,   123,  -163,  -163,  -163,  -163,   260,
     261,  -163,   129,   110,   259,   264,   265,  -163,  -163,  -163,
     -26,   257,   257,   257,   257,   257,   257,   232,   232,  -163,
    -163,  -163,  -163,   305,  -163,   224,    25,    62,   288,   274,
     279,   286,   273,   290,   291,   379,   135,   314,  -163,  -163,
      88,  -163,   407,  -163,  -163,  -163,   180,  -163,  -163,  -163,
    -163,   -27,    56,   157,   214,   480,   480,   150,   292,   323,
     323,   323,  -163,  -163,  -163,   295,   299,   300,   308,   309,
    -163,   321,   328,   186,  -163,  -163,   330,   316,   336,   327,
     338,   331,   341,   333,   197,   202,   407,   106,    68,    76,
      77,  -163,  -163,  -163,   337,   340,   351,  -163,   344,    88,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,   380,  -163,
       7,   265,  -163,  -163,  -163,  -163,   342,  -163,   106,   352,
     353,   354,   204,   393,  -163,   480,  -163,    -9,   288,   480,
     356,   480,   480,   480,   345,   348,   358,   372,   235,   480,
    -163,   362,   436,   480,   242,   275,   280,  -163,  -163,  -163,
    -163,  -163,   313,   375,   374,   458,  -163,  -163,  -163,  -163,
     480,  -163,   377,   320,  -163,  -163
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     4,     1,     0,     0,    14,     5,     6,
       0,     0,     0,     0,    18,     0,    15,    17,    16,     8,
       0,     0,     0,     0,    10,     0,     0,     2,     0,    19,
      25,     0,     0,     0,     0,     9,    33,     0,    29,     0,
       0,     0,     0,    92,     0,    89,     0,    90,   102,     0,
       0,    81,    82,    91,     0,     0,     0,     0,    11,     0,
       0,     0,     0,     0,    12,     0,   100,   110,     0,     0,
      27,    26,     0,     0,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,    34,    32,    31,    30,     0,     0,     0,     0,     0,
       0,    50,    52,    51,     0,    48,    53,    54,    66,     0,
       0,   111,     0,     0,     0,     0,    93,    94,    88,   101,
       0,   108,   103,   105,   104,   106,   107,    83,    84,    86,
      85,    87,    98,    99,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,    55,
      20,   109,     0,    95,    96,    97,     0,    41,    47,    43,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,    58,    56,     0,     0,     0,     0,     0,
       3,     0,     0,     0,    21,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    60,    59,     0,     0,     0,    23,     0,     0,
      40,    36,    42,    37,    44,    39,    46,    38,     0,    70,
       0,     0,    80,    76,    77,    78,     0,    79,     0,     0,
       0,     0,     0,     0,    24,     0,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,     0,     0,    65,    64,    63,
      62,    13,     0,     0,     0,     0,    68,    69,    67,    72,
       0,    74,     0,     0,    75,    71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,   373,  -163,
    -163,  -163,  -163,   217,     1,   419,   420,  -163,  -163,  -163,
    -163,  -162,  -102,  -129,  -163,   201,   102,   209,   -38,   -32,
     -30,   -63,  -163
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    40,     5,     8,    11,    24,    34,    29,   110,
      10,    22,   183,   184,   101,   102,   103,   161,   162,   163,
     164,   104,   105,   106,   107,   108,   198,   226,    50,    51,
      52,    53,   112
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     109,    62,   148,   194,   195,   115,   117,    95,    43,   168,
      65,    16,    66,    45,     1,    47,     3,    72,     6,    73,
      86,    87,    86,    87,    67,    35,   120,   186,    68,   111,
     187,    69,    75,    76,    77,    78,    79,     4,    86,    87,
     249,   109,     7,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,    65,    65,   132,   133,   238,    19,
     141,   144,   119,    65,    65,   136,   137,    80,    81,    82,
      83,    84,    85,   248,   165,    86,    87,   252,    13,   254,
     255,   256,    75,    76,    77,    78,    79,   262,   156,   228,
      28,   265,   148,   148,    54,   181,   229,   228,   228,    12,
      13,     9,   109,   109,   230,   231,    33,   177,   273,   251,
     188,   166,    55,   189,   185,    57,    21,    80,    81,    82,
      83,    84,    85,   182,    14,    27,    28,   118,    15,    12,
      13,   109,   109,    30,   227,    86,    87,    31,    32,    95,
     221,    96,    97,    98,   222,   223,   148,   224,   225,    20,
     148,   113,   148,   148,   148,    99,   114,   100,    15,    23,
     148,    25,    67,   148,    65,   227,   220,   153,    26,   178,
      56,   148,   109,   147,   179,    41,   109,    36,   109,   109,
     109,    37,   151,   152,    67,   109,   109,   145,   146,   109,
     109,   109,   109,   109,   245,   247,    38,    30,    59,   109,
      39,    31,   109,    12,    13,   145,   146,   109,    12,    13,
     109,   190,    63,    95,   191,    96,    97,    98,    95,    42,
      96,    97,    98,    64,    81,    82,    83,    84,    85,    99,
      70,   100,    15,   118,    99,    71,   100,    15,    43,   208,
     209,    12,    13,    45,   244,    47,    48,   218,    12,    13,
      74,    95,   219,    96,    97,    98,    49,    88,    95,    90,
      96,    97,    98,   157,   158,   159,   160,    99,   192,   100,
      15,   193,   199,   200,    99,    89,   100,    15,    83,    84,
      85,    12,    13,   116,    91,   261,    12,    13,    92,    93,
      94,    95,   266,    96,    97,    98,    95,   134,    96,    97,
      98,    81,    82,    83,    84,    85,   135,    99,   138,   100,
      15,   149,    99,   150,   100,    15,   154,    67,    86,    12,
      13,   155,   167,   169,   172,   267,    12,    13,   170,    95,
     268,    96,    97,    98,    42,   171,    95,   180,    96,    97,
      98,   173,   174,   196,   197,    99,   201,   100,    15,    42,
     202,   203,    99,    43,   100,    15,   206,    44,    45,    46,
      47,    48,   207,   269,    42,   204,   205,   211,    43,   210,
     275,    49,    60,    45,    61,    47,    48,   212,   213,    42,
     214,   216,   215,    43,   217,   234,    49,   139,    45,   140,
      47,    48,   232,   235,    42,   233,   257,   237,    43,   258,
     239,    49,   142,    45,   143,    47,    48,    58,    42,   259,
     241,   242,   243,    43,   253,   263,    49,   175,    45,   176,
      47,    48,    42,   260,   270,   271,   236,    43,   274,    17,
      18,    49,    45,   246,    47,    48,     0,   240,   250,     0,
       0,    43,    12,    13,     0,    49,    45,     0,    47,    48,
       0,     0,    95,     0,    96,    97,    98,     0,     0,    49,
       0,     0,     0,   264,    12,    13,     0,     0,    99,     0,
     100,    15,     0,     0,    95,     0,    96,    97,    98,     0,
       0,     0,     0,     0,     0,   272,    12,    13,     0,     0,
      99,     0,   100,    15,     0,     0,    95,     0,    96,    97,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,     0,   100,    15
};

static const yytype_int16 yycheck[] =
{
      63,    39,   104,   165,   166,    68,    69,    16,    34,   138,
      42,    10,    42,    39,    22,    41,    29,    49,     6,    49,
      13,    14,    13,    14,    52,    24,    52,    54,    56,    67,
      57,    59,     8,     9,    10,    11,    12,     0,    13,    14,
      49,   104,    30,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    86,    87,    51,    49,
      98,    99,    53,    95,    96,    95,    96,    43,    44,    45,
      46,    47,    48,   235,    49,    13,    14,   239,     7,   241,
     242,   243,     8,     9,    10,    11,    12,   249,   120,    21,
      25,   253,   194,   195,    39,     7,    28,    21,    21,     6,
       7,    34,   165,   166,    28,    28,    35,   145,   270,   238,
      54,    49,    57,    57,   152,    50,    35,    43,    44,    45,
      46,    47,    48,    35,    31,    24,    25,    53,    35,     6,
       7,   194,   195,    51,   197,    13,    14,    55,    56,    16,
      34,    18,    19,    20,    38,    39,   248,    41,    42,    34,
     252,    34,   254,   255,   256,    32,    39,    34,    35,    34,
     262,    34,    52,   265,   196,   228,   196,    57,    34,    34,
      34,   273,   235,    50,    39,    35,   239,    51,   241,   242,
     243,    55,    53,    54,    52,   248,   249,    55,    56,   252,
     253,   254,   255,   256,   232,   233,    51,    51,    34,   262,
      55,    55,   265,     6,     7,    55,    56,   270,     6,     7,
     273,    54,    49,    16,    57,    18,    19,    20,    16,    15,
      18,    19,    20,    34,    44,    45,    46,    47,    48,    32,
      51,    34,    35,    53,    32,    51,    34,    35,    34,    53,
      54,     6,     7,    39,    40,    41,    42,    50,     6,     7,
      51,    16,    50,    18,    19,    20,    52,    57,    16,    51,
      18,    19,    20,    39,    40,    41,    42,    32,    54,    34,
      35,    57,   170,   171,    32,    55,    34,    35,    46,    47,
      48,     6,     7,    34,    51,    50,     6,     7,    51,    51,
      51,    16,    50,    18,    19,    20,    16,    51,    18,    19,
      20,    44,    45,    46,    47,    48,    56,    32,    52,    34,
      35,    51,    32,    52,    34,    35,    57,    52,    13,     6,
       7,    57,    34,    49,    51,    50,     6,     7,    49,    16,
      50,    18,    19,    20,    15,    49,    16,    23,    18,    19,
      20,    51,    51,    51,    21,    32,    51,    34,    35,    15,
      51,    51,    32,    34,    34,    35,    35,    38,    39,    40,
      41,    42,    34,    50,    15,    57,    57,    51,    34,    39,
      50,    52,    38,    39,    40,    41,    42,    41,    51,    15,
      42,    40,    51,    34,    51,    34,    52,    38,    39,    40,
      41,    42,    55,    49,    15,    55,    51,    17,    34,    51,
      58,    52,    38,    39,    40,    41,    42,    34,    15,    51,
      58,    58,    58,    34,    58,    53,    52,    38,    39,    40,
      41,    42,    15,    51,    49,    51,   209,    34,    51,    10,
      10,    52,    39,    40,    41,    42,    -1,   228,   237,    -1,
      -1,    34,     6,     7,    -1,    52,    39,    -1,    41,    42,
      -1,    -1,    16,    -1,    18,    19,    20,    -1,    -1,    52,
      -1,    -1,    -1,    27,     6,     7,    -1,    -1,    32,    -1,
      34,    35,    -1,    -1,    16,    -1,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,     6,     7,    -1,    -1,
      32,    -1,    34,    35,    -1,    -1,    16,    -1,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    22,    61,    29,     0,    63,     6,    30,    64,    34,
      70,    65,     6,     7,    31,    35,    74,    75,    76,    49,
      34,    35,    71,    34,    66,    34,    34,    24,    25,    68,
      51,    55,    56,    35,    67,    74,    51,    55,    51,    55,
      62,    35,    15,    34,    38,    39,    40,    41,    42,    52,
      88,    89,    90,    91,    39,    57,    34,    50,    68,    34,
      38,    40,    88,    49,    34,    89,    90,    52,    56,    59,
      51,    51,    89,    90,    51,     8,     9,    10,    11,    12,
      43,    44,    45,    46,    47,    48,    13,    14,    57,    55,
      51,    51,    51,    51,    51,    16,    18,    19,    20,    32,
      34,    74,    75,    76,    81,    82,    83,    84,    85,    91,
      69,    88,    92,    34,    39,    91,    34,    91,    53,    53,
      52,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    51,    56,    90,    90,    52,    38,
      40,    88,    38,    40,    88,    55,    56,    50,    82,    51,
      52,    53,    54,    57,    57,    57,    89,    39,    40,    41,
      42,    77,    78,    79,    80,    49,    49,    34,    83,    49,
      49,    49,    51,    51,    51,    38,    40,    88,    34,    39,
      23,     7,    35,    72,    73,    88,    54,    57,    54,    57,
      54,    57,    54,    57,    81,    81,    51,    21,    86,    86,
      86,    51,    51,    51,    57,    57,    35,    34,    53,    54,
      39,    51,    41,    51,    42,    51,    40,    51,    50,    50,
      90,    34,    38,    39,    41,    42,    87,    91,    21,    28,
      28,    28,    55,    55,    34,    49,    73,    17,    51,    58,
      87,    58,    58,    58,    40,    88,    40,    88,    81,    49,
      85,    83,    81,    58,    81,    81,    81,    51,    51,    51,
      51,    50,    81,    53,    27,    81,    50,    50,    50,    50,
      49,    51,    27,    81,    51,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    62,    61,    63,    63,    65,    64,    66,    66,
      67,    67,    69,    68,    70,    70,    70,    70,    71,    71,
      72,    72,    72,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    75,    75,    76,    76,    76,    76,    76,
      77,    77,    78,    78,    79,    79,    80,    80,    81,    81,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    85,    85,    86,    86,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      92,    92,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,    13,     0,     2,     0,     8,     0,     2,
       0,     2,     0,    10,     0,     2,     2,     2,     0,     2,
       0,     1,     3,     2,     3,     3,     5,     5,     5,     4,
       6,     6,     6,     4,     6,     6,     9,     9,     9,     9,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     2,
       1,     1,     1,     1,     1,     2,     3,     3,     3,     4,
       4,     4,     7,     7,     7,     7,     1,     8,     8,     8,
       5,    11,     9,     7,     6,     7,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     3,     3,     4,     4,     4,     3,     3,
       2,     3,     1,     3,     3,     3,     3,     3,     3,     4,
       0,     1,     3
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
#line 65 "lang.y"
                                                                                                     { scope = "main"; }
#line 1403 "lang.tab.c"
    break;

  case 3: /* program: ENTRY USRDEF user_defined_types GLOBALVAR global_variables GLOBALFUNC global_functions MAIN $@1 '{' block '}' EXIT  */
#line 65 "lang.y"
                                                                                                                                            {printf("Program is correct!\n");}
#line 1409 "lang.tab.c"
    break;

  case 6: /* $@2: %empty  */
#line 72 "lang.y"
                            { scope = (yyvsp[0].string); }
#line 1415 "lang.tab.c"
    break;

  case 7: /* user_defined_type: CLASS ID $@2 '{' field_variables field_functions '}' ';'  */
#line 72 "lang.y"
                                                                                        {
                        UserDefinedType type((yyvsp[-6].string));
                        ids.addUsrDef(type);
                        scope = "global";
}
#line 1425 "lang.tab.c"
    break;

  case 8: /* field_variables: %empty  */
#line 79 "lang.y"
                           {}
#line 1431 "lang.tab.c"
    break;

  case 9: /* field_variables: field_variables variable_declaration  */
#line 80 "lang.y"
                                                      {  }
#line 1437 "lang.tab.c"
    break;

  case 10: /* field_functions: %empty  */
#line 83 "lang.y"
                           { }
#line 1443 "lang.tab.c"
    break;

  case 11: /* field_functions: field_functions function_declaration  */
#line 84 "lang.y"
                                                      { }
#line 1449 "lang.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 87 "lang.y"
                                       {    altscope = scope; 
                                            Function func((yyvsp[0].string), (yyvsp[-1].string), globalParams, altscope); 
                                            ids.addFunc(func); 
                                            globalParams.clear();  
                                            scope = (yyvsp[0].string); 
                                        }
#line 1460 "lang.tab.c"
    break;

  case 13: /* function_declaration: FNENTRY TYPE ID $@3 '(' parameter_list ')' '{' block '}'  */
#line 93 "lang.y"
                                                             {                                          
                                            scope = altscope;
                        }
#line 1468 "lang.tab.c"
    break;

  case 20: /* parameter_list: %empty  */
#line 109 "lang.y"
                 {}
#line 1474 "lang.tab.c"
    break;

  case 21: /* parameter_list: parameter  */
#line 110 "lang.y"
                           { }
#line 1480 "lang.tab.c"
    break;

  case 22: /* parameter_list: parameter_list ',' parameter  */
#line 111 "lang.y"
                                               { }
#line 1486 "lang.tab.c"
    break;

  case 23: /* parameter: TYPE ID  */
#line 115 "lang.y"
                    { globalParams.push_back(Parameter((yyvsp[0].string), (yyvsp[-1].string)));}
#line 1492 "lang.tab.c"
    break;

  case 24: /* parameter: CONST TYPE ID  */
#line 116 "lang.y"
                         { 
            Parameter param((yyvsp[0].string), (yyvsp[-1].string));
            param.isConst = true; 
            globalParams.push_back(param);
         }
#line 1502 "lang.tab.c"
    break;

  case 25: /* variable_declaration: TYPE ID ';'  */
#line 123 "lang.y"
                                  {
                        if( ids.exists((yyvsp[-1].string)) ){
                            printf("Variable already exists.");
                            return 1;
                        } else {
                            Value val((yyvsp[-2].string));
                            Variable var((yyvsp[-1].string), val);
                            var.scope = scope;
                            ids.addVar(var);
                        }                        
                    }
#line 1518 "lang.tab.c"
    break;

  case 26: /* variable_declaration: TYPE ID '=' CHAR ';'  */
#line 134 "lang.y"
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
                            var.scope = scope;
                            ids.addVar(var);
                            printf("Expr value: %c", val.charVal);
                        }  else {
                            printf("Different types.16");
                            return 1;
                        }                     
                    }
#line 1541 "lang.tab.c"
    break;

  case 27: /* variable_declaration: TYPE ID '=' STRING ';'  */
#line 152 "lang.y"
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
                            var.scope = scope;
                            ids.addVar(var);
                        }  else {
                            printf("Different types.15");
                            return 1;
                        }                     
                    }
#line 1563 "lang.tab.c"
    break;

  case 28: /* variable_declaration: TYPE ID '=' expression ';'  */
#line 169 "lang.y"
                                                 {
                        if ( ids.exists((yyvsp[-3].string)) ){
                            printf("Variable already exists.");
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
                            printf("Different types.");
                            return 1;
                        }
                    }
#line 1593 "lang.tab.c"
    break;

  case 29: /* variable_declaration: CONST TYPE ID ';'  */
#line 194 "lang.y"
                                         { 
                        if ( ids.exists((yyvsp[-1].string)) ){
                            printf("Variable already exists.");
                            return 1;
                        } else {
                            Value val((yyvsp[-2].string));
                            val.isConst = true;
                            Variable var((yyvsp[-1].string), val);
                            var.scope = scope;
                            ids.addVar(var);
                        }
                    }
#line 1610 "lang.tab.c"
    break;

  case 30: /* variable_declaration: CONST TYPE ID '=' expression ';'  */
#line 206 "lang.y"
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
                            var.scope = scope;
                            ids.addVar(var);
                        } else {
                            printf("Different types.13");
                            return 1;
                        }
                        
                    }
#line 1642 "lang.tab.c"
    break;

  case 31: /* variable_declaration: CONST TYPE ID '=' CHAR ';'  */
#line 233 "lang.y"
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
                            var.scope = scope;
                            ids.addVar(var);
                        } else {
                            printf("Different types.12");
                            return 1;
                        }
                        
                    }
#line 1667 "lang.tab.c"
    break;

  case 32: /* variable_declaration: CONST TYPE ID '=' STRING ';'  */
#line 253 "lang.y"
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
                            var.scope = scope;
                            ids.addVar(var);
                        } else {
                            printf("Different types.11");
                            return 1;
                        }
                        
                    }
#line 1692 "lang.tab.c"
    break;

  case 33: /* class_var_declaration: CLASS ID ID ';'  */
#line 277 "lang.y"
                                       {
                            if ( ids.exists((yyvsp[-1].string)) ) {
                                printf("Variable %s exists already.", (yyvsp[-1].string));
                                return 1;
                            } else {
                                Value val((yyvsp[-2].string));
                                Variable var((yyvsp[-1].string), val);
                                var.scope = scope;
                                ids.addVar(var);
                            }
                            
                     }
#line 1709 "lang.tab.c"
    break;

  case 34: /* class_var_declaration: CLASS ID ID '=' ID ';'  */
#line 289 "lang.y"
                                              { 
                            if ( ids.exists((yyvsp[-3].string))) {
                                printf("Variable %s exists already.", (yyvsp[-3].string));
                                return 1;
                            } else {
                                
                                if ( !ids.exists((yyvsp[-1].string))) {
                                printf("No %s variable found.", (yyvsp[-1].string));
                                return 1;
                                }
                                
                                
                                if( ids.getVar((yyvsp[-1].string)).Eval().type != (yyvsp[-4].string)) {
                                    printf("Different types between %s and %s.\n", (yyvsp[-3].string), (yyvsp[-1].string));
                                    return 1;
                                }
                                Value val((yyvsp[-4].string));
                                Variable var((yyvsp[-3].string), val);
                                var.scope = scope;
                                ids.addVar(var);
                            }   
                     }
#line 1736 "lang.tab.c"
    break;

  case 35: /* array_declaration: TYPE ID '[' INT ']' ';'  */
#line 313 "lang.y"
                                           {
                    if( ids.exists((yyvsp[-4].string)) ) {
                        printf("Array already exists.");
                        return 1;
                    } else {
                        Array arr((yyvsp[-4].string), (yyvsp[-2].integer), (yyvsp[-5].string));
                        arr.scope = scope;
                        ids.addArr(arr);
                    }
                 }
#line 1751 "lang.tab.c"
    break;

  case 36: /* array_declaration: TYPE ID '[' ']' '=' '[' int_values ']' ';'  */
#line 323 "lang.y"
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
                        arr.scope = scope;
                        ids.addArr(arr);
                        
                    }
                 }
#line 1775 "lang.tab.c"
    break;

  case 37: /* array_declaration: TYPE ID '[' ']' '=' '[' float_values ']' ';'  */
#line 342 "lang.y"
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
                        
                        arr.scope = scope;
                        ids.addArr(arr);
                        floatVals.clear();
                    }
                 }
#line 1798 "lang.tab.c"
    break;

  case 38: /* array_declaration: TYPE ID '[' ']' '=' '[' char_values ']' ';'  */
#line 360 "lang.y"
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
                        
                        arr.scope = scope;
                        ids.addArr(arr);
                        charVals.clear();
                    }
                 }
#line 1821 "lang.tab.c"
    break;

  case 39: /* array_declaration: TYPE ID '[' ']' '=' '[' bool_values ']' ';'  */
#line 378 "lang.y"
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
                        arr.scope = scope;
                        ids.addArr(arr);
                        boolVals.clear();
                    }
                 }
#line 1847 "lang.tab.c"
    break;

  case 40: /* int_values: int_values ',' INT  */
#line 401 "lang.y"
                               {intVals.push_back((yyvsp[0].integer));}
#line 1853 "lang.tab.c"
    break;

  case 41: /* int_values: INT  */
#line 402 "lang.y"
                {intVals.push_back((yyvsp[0].integer));}
#line 1859 "lang.tab.c"
    break;

  case 42: /* float_values: float_values ',' FLOAT  */
#line 405 "lang.y"
                                     {floatVals.push_back((yyvsp[0].floatnum));}
#line 1865 "lang.tab.c"
    break;

  case 43: /* float_values: FLOAT  */
#line 406 "lang.y"
                    {floatVals.push_back((yyvsp[0].floatnum));}
#line 1871 "lang.tab.c"
    break;

  case 44: /* bool_values: bool_values ',' BOOL  */
#line 409 "lang.y"
                                  {boolVals.push_back((yyvsp[0].boolean));}
#line 1877 "lang.tab.c"
    break;

  case 45: /* bool_values: BOOL  */
#line 410 "lang.y"
                  {boolVals.push_back((yyvsp[0].boolean));}
#line 1883 "lang.tab.c"
    break;

  case 46: /* char_values: char_values ',' CHAR  */
#line 413 "lang.y"
                                  {charVals.push_back((yyvsp[0].character));}
#line 1889 "lang.tab.c"
    break;

  case 47: /* char_values: CHAR  */
#line 414 "lang.y"
                  {charVals.push_back((yyvsp[0].character));}
#line 1895 "lang.tab.c"
    break;

  case 56: /* statement: RETURN expression ';'  */
#line 427 "lang.y"
                                 {
            if ( scope == "main" ) {
                if ( (yyvsp[-1].ASTNode)->Eval().type != "int" ){
                    printf("Error at returning a non integer in main scope.\n");
                    return 1;
                }

            } else {
                Function fn = ids.getFunc(scope.c_str());
                if( fn.returnType != (yyvsp[-1].ASTNode)->Eval().type ){
                    printf("Different returning types in function: %s.\n", fn.name.c_str());
                    return 1;
                } 
            }
         }
#line 1915 "lang.tab.c"
    break;

  case 57: /* statement: RETURN STRING ';'  */
#line 442 "lang.y"
                             {
            if ( scope == "main") {
                printf("Error at returning a non integer in main scope.\n");
                return 1;
            } else {
                Function fn = ids.getFunc(scope.c_str());
                string type = "string";
                if( fn.returnType != type ){
                    printf("Different returning types in function: %s.\n", fn.name.c_str());
                    return 1;
                }
            }
         }
#line 1933 "lang.tab.c"
    break;

  case 58: /* statement: RETURN CHAR ';'  */
#line 455 "lang.y"
                           {
            if ( scope == "main") {
                printf("Error at returning a non integer in main scope.\n");
                return 1;
            } else {
                Function fn = ids.getFunc(scope.c_str());
                string type = "char";
                if( fn.returnType != type ){
                    printf("Different returning types in function: %s.\n", fn.name.c_str());
                    return 1;
                }
            }
         }
#line 1951 "lang.tab.c"
    break;

  case 59: /* assignment_statement: ID '=' expression ';'  */
#line 472 "lang.y"
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
                                printf("Different types.1");
                                return 1;
                            }        
                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
#line 1980 "lang.tab.c"
    break;

  case 60: /* assignment_statement: ID '=' CHAR ';'  */
#line 496 "lang.y"
                                      {
                        if( ids.exists((yyvsp[-3].string)) ) {

                            Variable& var = ids.getVar((yyvsp[-3].string));
                            if (var.val.type == "char"){
                                var.val.isCharSet = true;
                                var.val.charVal = (yyvsp[-1].character);  
                            } else {
                                printf("Different types.2");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
#line 2002 "lang.tab.c"
    break;

  case 61: /* assignment_statement: ID '=' STRING ';'  */
#line 513 "lang.y"
                                        {
                        if( ids.exists((yyvsp[-3].string)) ) {

                            Variable& var = ids.getVar((yyvsp[-3].string));
                            if (var.val.type == "string"){
                                var.val.isStringSet = true;
                                var.val.stringVal = (yyvsp[-1].string);  
                            } else {
                                printf("Different types.3");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
#line 2024 "lang.tab.c"
    break;

  case 62: /* assignment_statement: ID '[' INT ']' '=' expression ';'  */
#line 530 "lang.y"
                                                        {

                        Value result = (yyvsp[-1].ASTNode)->Eval();
                        if( ids.exists((yyvsp[-6].string)) ) {
                            
                            Array& arr = ids.getArray((yyvsp[-6].string));
                            if (arr.type == result.type){
                                arr.add((yyvsp[-4].integer), result);
                            } else {
                                printf("Different types.4");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
#line 2047 "lang.tab.c"
    break;

  case 63: /* assignment_statement: ID '[' INT ']' '=' CHAR ';'  */
#line 548 "lang.y"
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
                                printf("Different types.5");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
#line 2071 "lang.tab.c"
    break;

  case 64: /* assignment_statement: ID '[' ID ']' '=' expression ';'  */
#line 567 "lang.y"
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
#line 2093 "lang.tab.c"
    break;

  case 65: /* assignment_statement: ID '[' ID ']' '=' CHAR ';'  */
#line 584 "lang.y"
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
                                printf("Different types.7");
                                return 1;
                            }   

                        } else {
                            printf("Variable not found.");
                            return 1;
                        }
                    }
#line 2119 "lang.tab.c"
    break;

  case 81: /* expression: arithm_expr  */
#line 633 "lang.y"
                        { (yyval.ASTNode) = (yyvsp[0].ASTNode); }
#line 2125 "lang.tab.c"
    break;

  case 82: /* expression: bool_expr  */
#line 634 "lang.y"
                      { (yyval.ASTNode) = (yyvsp[0].ASTNode); }
#line 2131 "lang.tab.c"
    break;

  case 83: /* arithm_expr: arithm_expr '+' arithm_expr  */
#line 639 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "+", (yyvsp[0].ASTNode)); 
               else{
                    printf("Different types between: %s and %s", (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }

           }
#line 2145 "lang.tab.c"
    break;

  case 84: /* arithm_expr: arithm_expr '-' arithm_expr  */
#line 648 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "-", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types between: %s and %s", (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());
                    return 1;
               }
           }
#line 2158 "lang.tab.c"
    break;

  case 85: /* arithm_expr: arithm_expr '/' arithm_expr  */
#line 656 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "/", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types between: %s and %s", (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2171 "lang.tab.c"
    break;

  case 86: /* arithm_expr: arithm_expr '*' arithm_expr  */
#line 664 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "*", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types between: %s and %s", (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2184 "lang.tab.c"
    break;

  case 87: /* arithm_expr: arithm_expr '%' arithm_expr  */
#line 672 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "%", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types between: %s and %s", (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
                    
           }
#line 2198 "lang.tab.c"
    break;

  case 88: /* arithm_expr: '(' arithm_expr ')'  */
#line 681 "lang.y"
                                 {
                (yyval.ASTNode) = (yyvsp[-1].ASTNode);
           }
#line 2206 "lang.tab.c"
    break;

  case 89: /* arithm_expr: INT  */
#line 684 "lang.y"
                 {
               char* identifierText = strdup(yytext);
               (yyval.ASTNode) = new AST(new Value(identifierText, "int")); 
           }
#line 2215 "lang.tab.c"
    break;

  case 90: /* arithm_expr: FLOAT  */
#line 688 "lang.y"
                   {
               char* identifierText = strdup(yytext);
               (yyval.ASTNode) = new AST(new Value(identifierText, "float")); 
           }
#line 2224 "lang.tab.c"
    break;

  case 91: /* arithm_expr: fn_call  */
#line 692 "lang.y"
                     {
               (yyval.ASTNode) = new AST((yyvsp[0].var)->val);
            }
#line 2232 "lang.tab.c"
    break;

  case 92: /* arithm_expr: ID  */
#line 695 "lang.y"
                {
                if( ids.exists((yyvsp[0].string)) ) {
                    Value val = ids.getVar((yyvsp[0].string)).Eval();
                    (yyval.ASTNode) = new AST(val);
                } else {
                    printf("Variable not found.4");
                    return 1;
                }
           }
#line 2246 "lang.tab.c"
    break;

  case 93: /* arithm_expr: ID '.' ID  */
#line 704 "lang.y"
                       { 
                if( ids.exists((yyvsp[-2].string)) ) {
                    if( ids.exists((yyvsp[0].string)) ) {

                        Variable var = ids.getVar((yyvsp[0].string));
                        Variable obj = ids.getVar((yyvsp[-2].string));

                        if( var.scope == obj.val.type ){
                            (yyval.ASTNode) = new AST(var.val);
                        } else {
                            printf("No %s member in class %s.", (yyvsp[0].string), (yyvsp[-2].string));
                            return 0;
                        }
                             
                    } else {
                         printf("No %s member in class %s.", (yyvsp[0].string), (yyvsp[-2].string));
                         return 0;
                    }
                } else {
                    printf("Class %s not found.", (yyvsp[-2].string));
                    return 1;
                }
           }
#line 2274 "lang.tab.c"
    break;

  case 94: /* arithm_expr: ID '.' fn_call  */
#line 727 "lang.y"
                            {
                if( ids.exists((yyvsp[-2].string)) ) {
                    
                    Variable obj = ids.getVar((yyvsp[-2].string));
                    Function fn = ids.getFunc((yyvsp[0].var)->name.c_str());

                        if( obj.val.type == fn.scope ){
                            (yyval.ASTNode) = new AST((yyvsp[0].var)->val);
                        } else {
                            printf("No %s method found in class variable %s.", (yyvsp[0].var)->name.c_str(), (yyvsp[-2].string));
                            return 0;
                        }
                    
                } else {

                    printf("Variable %s not found.\n", (yyvsp[-2].string));
                    return 1;

                }
           }
#line 2299 "lang.tab.c"
    break;

  case 95: /* arithm_expr: ID '[' ID ']'  */
#line 747 "lang.y"
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
                    printf("Variable not found.2");
                    return 1;
                }
           }
#line 2318 "lang.tab.c"
    break;

  case 96: /* arithm_expr: ID '[' INT ']'  */
#line 761 "lang.y"
                            {
                if( ids.exists((yyvsp[-3].string)) ) {
                    Array arr = ids.getArray((yyvsp[-3].string));
                    (yyval.ASTNode) = new AST(arr.getVal((yyvsp[-1].integer)));
                }else {
                    printf("Variable not found.1");
                }

           }
#line 2332 "lang.tab.c"
    break;

  case 97: /* arithm_expr: ID '[' fn_call ']'  */
#line 770 "lang.y"
                                {
                if( ids.exists((yyvsp[-3].string))) {
                    Array arr = ids.getArray((yyvsp[-3].string));

                    if( (yyvsp[-1].var)->val.type == "int" )
                        (yyval.ASTNode) = new AST(arr.getVal((yyvsp[-1].var)->val.intVal));
                    else {
                        printf("Invalid index.");
                    }
                } else {
                    printf("Variable not found.2");
                    return 1;
                }
           }
#line 2351 "lang.tab.c"
    break;

  case 98: /* bool_expr: bool_expr AND bool_expr  */
#line 787 "lang.y"
                                   {
               (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "and", (yyvsp[0].ASTNode)); 
         }
#line 2359 "lang.tab.c"
    break;

  case 99: /* bool_expr: bool_expr OR bool_expr  */
#line 790 "lang.y"
                                  {
               (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "or", (yyvsp[0].ASTNode)); 
           }
#line 2367 "lang.tab.c"
    break;

  case 100: /* bool_expr: NOT bool_expr  */
#line 793 "lang.y"
                         {
               (yyval.ASTNode) = new AST((yyvsp[0].ASTNode), "not", NULL); 
         }
#line 2375 "lang.tab.c"
    break;

  case 101: /* bool_expr: '(' bool_expr ')'  */
#line 796 "lang.y"
                             {
            (yyval.ASTNode) = (yyvsp[-1].ASTNode);
         }
#line 2383 "lang.tab.c"
    break;

  case 102: /* bool_expr: BOOL  */
#line 799 "lang.y"
                { 
            char* identifierText = strdup(yytext);
            (yyval.ASTNode) = new AST(new Value(identifierText, "bool"));
          }
#line 2392 "lang.tab.c"
    break;

  case 103: /* bool_expr: arithm_expr GT arithm_expr  */
#line 803 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "gt", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types between: %s and %s", (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2405 "lang.tab.c"
    break;

  case 104: /* bool_expr: arithm_expr LT arithm_expr  */
#line 811 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "lt", (yyvsp[0].ASTNode)); 
               else{
                    printf("Different types between: %s and %s", (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2418 "lang.tab.c"
    break;

  case 105: /* bool_expr: arithm_expr GEQ arithm_expr  */
#line 819 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "geq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types between: %s and %s", (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2431 "lang.tab.c"
    break;

  case 106: /* bool_expr: arithm_expr LEQ arithm_expr  */
#line 827 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "leq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types.9\n");
                    return 1;
               }
                    
           }
#line 2445 "lang.tab.c"
    break;

  case 107: /* bool_expr: arithm_expr EQ arithm_expr  */
#line 836 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "eq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types.10\n");
                    return 1;
               }
           }
#line 2458 "lang.tab.c"
    break;

  case 108: /* bool_expr: arithm_expr NEQ arithm_expr  */
#line 844 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "neq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Different types.11\n");
                    return 1;
               }
           }
#line 2471 "lang.tab.c"
    break;

  case 109: /* fn_call: ID '(' argument_list ')'  */
#line 855 "lang.y"
                                  { 
            
            if( ids.exists((yyvsp[-3].string)) ) {
                Function fn = ids.getFunc((yyvsp[-3].string));

                if ( params.size() != fn.params.size() ){
                    printf("The %s function call has inapropriate number of parameters.\n", fn.name.c_str());
                    return 1;
                } else {
                    for( int i = 0; i < params.size(); i++ ) {
                        if (params.at(i).type != fn.params.at(i).type){
                            printf("The parameter .... should be of type %s.\n", fn.params.at(i).type.c_str());
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
#line 2517 "lang.tab.c"
    break;

  case 111: /* argument_list: expression  */
#line 900 "lang.y"
                          { params.push_back((yyvsp[0].ASTNode)->Eval());}
#line 2523 "lang.tab.c"
    break;

  case 112: /* argument_list: argument_list ',' expression  */
#line 901 "lang.y"
                                            { params.push_back((yyvsp[0].ASTNode)->Eval());}
#line 2529 "lang.tab.c"
    break;


#line 2533 "lang.tab.c"

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

#line 904 "lang.y"

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
