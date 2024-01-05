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

using namespace std;

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();

vector<Parameter> globalParams;
class IdList ids;

void yyerror(const char * s);

#line 90 "lang.tab.c"

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
  YYSYMBOL_INT = 38,                       /* INT  */
  YYSYMBOL_FLOAT = 39,                     /* FLOAT  */
  YYSYMBOL_BOOL = 40,                      /* BOOL  */
  YYSYMBOL_CHAR = 41,                      /* CHAR  */
  YYSYMBOL_STRING = 42,                    /* STRING  */
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
  YYSYMBOL_user_defined_types = 62,        /* user_defined_types  */
  YYSYMBOL_user_defined_type = 63,         /* user_defined_type  */
  YYSYMBOL_field_variables = 64,           /* field_variables  */
  YYSYMBOL_field_functions = 65,           /* field_functions  */
  YYSYMBOL_function_declaration = 66,      /* function_declaration  */
  YYSYMBOL_global_variables = 67,          /* global_variables  */
  YYSYMBOL_global_functions = 68,          /* global_functions  */
  YYSYMBOL_parameter_list = 69,            /* parameter_list  */
  YYSYMBOL_parameter = 70,                 /* parameter  */
  YYSYMBOL_variable_declaration = 71,      /* variable_declaration  */
  YYSYMBOL_class_var_declaration = 72,     /* class_var_declaration  */
  YYSYMBOL_array_declaration = 73,         /* array_declaration  */
  YYSYMBOL_one_type_values = 74,           /* one_type_values  */
  YYSYMBOL_int_values = 75,                /* int_values  */
  YYSYMBOL_float_values = 76,              /* float_values  */
  YYSYMBOL_bool_values = 77,               /* bool_values  */
  YYSYMBOL_char_values = 78,               /* char_values  */
  YYSYMBOL_block = 79,                     /* block  */
  YYSYMBOL_statement = 80,                 /* statement  */
  YYSYMBOL_assignment_statement = 81,      /* assignment_statement  */
  YYSYMBOL_control_statement = 82,         /* control_statement  */
  YYSYMBOL_expr = 83,                      /* expr  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   385

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  226

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
       0,    55,    55,    58,    59,    62,    68,    69,    72,    73,
      76,    83,    84,    87,    88,    91,    92,    93,    97,    98,
     105,   115,   131,   146,   166,   177,   203,   208,   214,   222,
     231,   242,   243,   244,   245,   248,   249,   252,   253,   256,
     257,   260,   261,   264,   265,   268,   269,   270,   271,   272,
     273,   274,   279,   282,   283,   284,   285,   288,   289,   290,
     293,   294,   298,   299,   302,   303,   304,   305,   306,   310,
     311,   316,   322,   328,   334,   340,   346,   347,   351,   355,
     358,   361,   362,   363,   364,   365,   369,   372,   375,   378,
     379,   380,   386,   392,   398,   404,   410,   419,   423,   424,
     425
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
  "EVAL", "TYPEOF", "INT", "FLOAT", "BOOL", "CHAR", "STRING", "EQ", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'{'", "'}'", "';'", "'('", "')'", "','",
  "'='", "'['", "']'", "':'", "'.'", "$accept", "program",
  "user_defined_types", "user_defined_type", "field_variables",
  "field_functions", "function_declaration", "global_variables",
  "global_functions", "parameter_list", "parameter",
  "variable_declaration", "class_var_declaration", "array_declaration",
  "one_type_values", "int_values", "float_values", "bool_values",
  "char_values", "block", "statement", "assignment_statement",
  "control_statement", "expr", "if_statement", "case_block", "value",
  "expression", "arithm_expr", "bool_expr", "fn_call", "argument_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-115)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,   -19,    76,  -115,  -115,    38,    70,  -115,  -115,    74,
       5,  -115,    90,  -115,   102,  -115,    -2,   104,    67,   -12,
     -16,  -115,    24,    97,   107,  -115,  -115,    47,    58,  -115,
    -115,    68,   350,   115,    68,    21,  -115,  -115,  -115,   100,
     131,    68,   134,   273,   144,  -115,  -115,   135,   119,    68,
      68,   114,   262,   262,    95,   156,  -115,  -115,  -115,    94,
    -115,  -115,  -115,  -115,   141,   142,   273,  -115,    68,    96,
     165,  -115,  -115,   160,    16,  -115,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    68,    68,  -115,
     176,    12,    18,   181,  -115,  -115,   169,  -115,   168,   262,
      60,   197,  -115,  -115,     7,  -115,   108,   -34,   173,   179,
     187,  -115,  -115,  -115,    93,   327,   327,   327,   327,   327,
     327,   127,   127,  -115,  -115,  -115,  -115,   224,    82,   350,
     350,   188,   193,   225,  -115,   194,    33,  -115,   213,   217,
     124,  -115,  -115,    68,  -115,  -115,  -115,   283,  -115,   218,
     177,   182,    68,   311,    75,  -115,   196,   200,   226,  -115,
     209,     7,  -115,   129,   208,   246,  -115,    -6,   187,  -115,
    -115,  -115,  -115,   206,  -115,   311,   210,   219,   230,  -115,
     350,  -115,  -115,  -115,   -14,   181,   350,   211,   350,  -115,
     185,   215,   350,  -115,   235,   306,   350,   222,  -115,  -115,
    -115,  -115,   234,   259,   254,   258,   265,  -115,   255,   250,
     256,   328,  -115,   257,  -115,  -115,  -115,  -115,  -115,   350,
    -115,   264,  -115,   260,  -115,  -115
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,     0,    11,     4,     0,
       0,     6,     0,    13,     0,    12,     8,     0,     0,     0,
       0,     7,     0,     0,     0,    14,    20,     0,     0,     9,
      24,     0,     0,     0,     0,    80,    77,    78,    90,     0,
       0,     0,     0,    69,    70,    79,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    47,    46,     0,
      43,    48,    49,    53,     0,     0,     0,    88,    98,     0,
       0,    21,    22,     0,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,     0,     0,     0,    59,    58,     0,    57,     0,     0,
       0,     0,    44,    50,    15,    99,     0,     0,     0,     0,
      81,    82,    76,    89,     0,    96,    91,    93,    92,    94,
      95,    71,    72,    74,    73,    75,    86,    87,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     2,     0,     0,
       0,    16,    97,     0,    83,    84,    85,     0,    26,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    18,
       0,     0,   100,     0,     0,     0,    55,     0,     0,    64,
      65,    66,    68,     0,    67,     0,     0,     0,     0,    19,
       0,    17,    27,    28,     0,     0,     0,     0,     0,    29,
       0,     0,     0,    61,     0,     0,     0,     0,    36,    38,
      40,    42,     0,    31,    32,    33,    34,    10,     0,     0,
       0,     0,    54,     0,    35,    37,    39,    41,    60,     0,
      62,     0,    30,     0,    63,    56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,  -115,  -115,  -115,  -115,   289,  -115,  -115,  -115,
     150,    54,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -114,
     -56,   -92,  -115,   -36,   139,  -115,   157,    -3,   -30,   -28,
     -32,  -115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     5,     8,    16,    20,    25,    10,    18,   140,
     141,    56,    57,    58,   202,   203,   204,   205,   206,    59,
      60,    61,    62,    96,    63,   154,   173,    97,    43,    44,
      45,   106
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      64,   132,    49,   102,    66,    12,    67,    87,    88,    24,
       3,    73,    12,    74,   138,   150,   151,    98,    68,    66,
      66,    91,    92,   144,    42,    87,    88,    64,    47,    87,
      88,    87,    88,    14,    28,   192,    13,   109,   111,    26,
      14,     1,   139,    27,     6,   185,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,    66,    66,   126,
     127,   129,    34,   135,    15,   105,   191,   130,     7,   113,
      21,   156,   195,    68,   197,    30,     4,    69,   208,    31,
      70,    35,   211,    34,   147,    36,    37,    38,    39,    40,
     157,    23,    24,   194,   102,   102,   175,    64,    64,    41,
      48,    12,    35,   176,     9,   223,    36,    37,    38,    46,
      49,    26,    50,    51,    52,    27,   136,   164,    64,    64,
      41,   174,    66,    11,   167,    17,    53,    35,    54,    55,
     107,    36,    37,   148,   108,   102,    19,   149,    22,   102,
     162,   102,    33,   174,   101,   114,    32,    68,    64,    65,
      99,    71,   102,    90,    64,   102,    64,    87,    88,    64,
      64,   142,   143,    64,    64,    64,    93,   102,    76,    77,
      78,    79,    80,    84,    85,    86,    64,   160,   161,    64,
     182,    68,    72,    48,    12,    75,    89,    64,    48,    12,
     100,    64,   103,    49,   104,    50,    51,    52,    49,   110,
      50,    51,    52,    81,    82,    83,    84,    85,    86,    53,
     128,    54,    55,   112,    53,   131,    54,    55,   133,   134,
     137,    48,    12,   198,   199,   200,   201,   165,    48,    12,
     145,    49,   166,    50,    51,    52,   146,    87,    49,    68,
      50,    51,    52,    99,   152,   155,   153,    53,   158,    54,
      55,   159,   163,   177,    53,   178,    54,    55,   180,   183,
     179,    48,    12,   184,   186,   207,    48,    12,   188,   196,
     189,    49,   212,    50,    51,    52,    49,    34,    50,    51,
      52,    76,    77,    78,    79,    80,   190,    53,   209,    54,
      55,   213,    53,   215,    54,    55,    35,   214,   216,   219,
      36,    37,    38,    94,    95,   218,   217,   220,   222,    29,
     225,   181,    48,    12,    41,   224,    81,    82,    83,    84,
      85,    86,    49,   193,    50,    51,    52,    82,    83,    84,
      85,    86,   187,   210,    48,    12,   112,     0,    53,     0,
      54,    55,     0,     0,    49,   168,    50,    51,    52,   169,
     170,   171,     0,   172,     0,   221,    48,    12,     0,     0,
      53,     0,    54,    55,     0,     0,    49,     0,    50,    51,
      52,    82,    83,    84,    85,    86,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55
};

static const yytype_int16 yycheck[] =
{
      32,    93,    16,    59,    34,     7,    34,    13,    14,    25,
      29,    41,     7,    41,     7,   129,   130,    53,    52,    49,
      50,    49,    50,    57,    27,    13,    14,    59,    31,    13,
      14,    13,    14,    35,    50,    49,    31,    69,    70,    51,
      35,    22,    35,    55,     6,    51,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    87,
      88,    49,    15,    99,    10,    68,   180,    49,    30,    53,
      16,    38,   186,    52,   188,    51,     0,    56,   192,    55,
      59,    34,   196,    15,   114,    38,    39,    40,    41,    42,
      57,    24,    25,   185,   150,   151,    21,   129,   130,    52,
       6,     7,    34,    28,    34,   219,    38,    39,    40,    51,
      16,    51,    18,    19,    20,    55,    56,   149,   150,   151,
      52,   153,   152,    49,   152,    35,    32,    34,    34,    35,
      34,    38,    39,    51,    38,   191,    34,    55,    34,   195,
     143,   197,    35,   175,    50,    52,    49,    52,   180,    34,
      55,    51,   208,    34,   186,   211,   188,    13,    14,   191,
     192,    53,    54,   195,   196,   197,    52,   223,     8,     9,
      10,    11,    12,    46,    47,    48,   208,    53,    54,   211,
      51,    52,    51,     6,     7,    51,    51,   219,     6,     7,
      34,   223,    51,    16,    52,    18,    19,    20,    16,    34,
      18,    19,    20,    43,    44,    45,    46,    47,    48,    32,
      34,    34,    35,    53,    32,    34,    34,    35,    49,    51,
      23,     6,     7,    38,    39,    40,    41,    50,     6,     7,
      57,    16,    50,    18,    19,    20,    57,    13,    16,    52,
      18,    19,    20,    55,    51,    51,    21,    32,    35,    34,
      35,    34,    34,    57,    32,    55,    34,    35,    49,    51,
      34,     6,     7,    17,    58,    50,     6,     7,    58,    58,
      51,    16,    50,    18,    19,    20,    16,    15,    18,    19,
      20,     8,     9,    10,    11,    12,    56,    32,    53,    34,
      35,    57,    32,    39,    34,    35,    34,    38,    40,    49,
      38,    39,    40,    41,    42,    50,    41,    51,    51,    20,
      50,   161,     6,     7,    52,    51,    43,    44,    45,    46,
      47,    48,    16,   184,    18,    19,    20,    44,    45,    46,
      47,    48,   175,    27,     6,     7,    53,    -1,    32,    -1,
      34,    35,    -1,    -1,    16,    34,    18,    19,    20,    38,
      39,    40,    -1,    42,    -1,    27,     6,     7,    -1,    -1,
      32,    -1,    34,    35,    -1,    -1,    16,    -1,    18,    19,
      20,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    22,    61,    29,     0,    62,     6,    30,    63,    34,
      67,    49,     7,    31,    35,    71,    64,    35,    68,    34,
      65,    71,    34,    24,    25,    66,    51,    55,    50,    66,
      51,    55,    49,    35,    15,    34,    38,    39,    40,    41,
      42,    52,    87,    88,    89,    90,    51,    87,     6,    16,
      18,    19,    20,    32,    34,    35,    71,    72,    73,    79,
      80,    81,    82,    84,    90,    34,    88,    89,    52,    56,
      59,    51,    51,    88,    89,    51,     8,     9,    10,    11,
      12,    43,    44,    45,    46,    47,    48,    13,    14,    51,
      34,    89,    89,    52,    41,    42,    83,    87,    83,    55,
      34,    50,    80,    51,    52,    87,    91,    34,    38,    90,
      34,    90,    53,    53,    52,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    34,    49,
      49,    34,    81,    49,    51,    83,    56,    23,     7,    35,
      69,    70,    53,    54,    57,    57,    57,    88,    51,    55,
      79,    79,    51,    21,    85,    51,    38,    57,    35,    34,
      53,    54,    87,    34,    90,    50,    50,    89,    34,    38,
      39,    40,    42,    86,    90,    21,    28,    57,    55,    34,
      49,    70,    51,    51,    17,    51,    58,    86,    58,    51,
      56,    79,    49,    84,    81,    79,    58,    79,    38,    39,
      40,    41,    74,    75,    76,    77,    78,    50,    79,    53,
      27,    79,    50,    57,    38,    39,    40,    41,    50,    49,
      51,    27,    51,    79,    51,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    64,    64,    65,    65,
      66,    67,    67,    68,    68,    69,    69,    69,    70,    70,
      71,    71,    71,    71,    71,    71,    72,    72,    72,    73,
      73,    74,    74,    74,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    81,    82,    82,    82,    82,    83,    83,    83,
      84,    84,    85,    85,    86,    86,    86,    86,    86,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    90,    91,    91,
      91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    12,     0,     2,     7,     0,     2,     0,     2,
       9,     0,     2,     0,     2,     0,     1,     3,     2,     3,
       3,     5,     5,     5,     4,     6,     4,     6,     6,     6,
       9,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       2,     3,     4,     1,     8,     5,    11,     1,     1,     1,
       9,     7,     6,     7,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     3,     3,     4,     4,     4,     3,     3,     2,     3,
       1,     3,     3,     3,     3,     3,     3,     4,     0,     1,
       3
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
  case 2: /* program: ENTRY USRDEF user_defined_types GLOBALVAR global_variables GLOBALFUNC global_functions MAIN '{' block '}' EXIT  */
#line 55 "lang.y"
                                                                                                                        {printf("Program is correct!\n");}
#line 1350 "lang.tab.c"
    break;

  case 5: /* user_defined_type: CLASS ID '{' field_variables field_functions '}' ';'  */
#line 62 "lang.y"
                                                                        {
                        UserDefinedType type((yyvsp[-5].string));
                        ids.addUsrDef(type);
}
#line 1359 "lang.tab.c"
    break;

  case 6: /* field_variables: %empty  */
#line 68 "lang.y"
                           {}
#line 1365 "lang.tab.c"
    break;

  case 7: /* field_variables: field_variables variable_declaration  */
#line 69 "lang.y"
                                                      { }
#line 1371 "lang.tab.c"
    break;

  case 8: /* field_functions: %empty  */
#line 72 "lang.y"
                           { }
#line 1377 "lang.tab.c"
    break;

  case 9: /* field_functions: field_functions function_declaration  */
#line 73 "lang.y"
                                                      { }
#line 1383 "lang.tab.c"
    break;

  case 10: /* function_declaration: FNENTRY TYPE ID '(' parameter_list ')' '{' block '}'  */
#line 76 "lang.y"
                                                                           { 
                        Function func((yyvsp[-6].string), (yyvsp[-7].string), globalParams);
                        ids.addFunc(func);
                        globalParams.clear();
                    }
#line 1393 "lang.tab.c"
    break;

  case 15: /* parameter_list: %empty  */
#line 91 "lang.y"
                 {}
#line 1399 "lang.tab.c"
    break;

  case 16: /* parameter_list: parameter  */
#line 92 "lang.y"
                           { }
#line 1405 "lang.tab.c"
    break;

  case 17: /* parameter_list: parameter_list ',' parameter  */
#line 93 "lang.y"
                                               { }
#line 1411 "lang.tab.c"
    break;

  case 18: /* parameter: TYPE ID  */
#line 97 "lang.y"
                    { globalParams.push_back(Parameter((yyvsp[0].string), (yyvsp[-1].string)));}
#line 1417 "lang.tab.c"
    break;

  case 19: /* parameter: CONST TYPE ID  */
#line 98 "lang.y"
                         { 
            Parameter param((yyvsp[0].string), (yyvsp[-1].string));
            param.isConst = true; 
            globalParams.push_back(param);
        }
#line 1427 "lang.tab.c"
    break;

  case 20: /* variable_declaration: TYPE ID ';'  */
#line 105 "lang.y"
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
#line 1442 "lang.tab.c"
    break;

  case 21: /* variable_declaration: TYPE ID '=' CHAR ';'  */
#line 115 "lang.y"
                                           {
                        string type = "char";
                        if( ids.exists((yyvsp[-3].string)) ){
                            printf("Variable already exists.");
                            return 1;
                        } else if ((yyvsp[-4].string) == type){
                            Value val(type);
                            val.charVal = *(yyvsp[-1].string);
                            Variable var((yyvsp[-3].string), val);
                            ids.addVar(var);
                            printf("Expr value: %c", val.charVal);
                        }  else {
                            printf("Different types.");
                            return 1;
                        }                     
                    }
#line 1463 "lang.tab.c"
    break;

  case 22: /* variable_declaration: TYPE ID '=' STRING ';'  */
#line 131 "lang.y"
                                             {
                        string type = "string";
                        if( ids.exists((yyvsp[-3].string)) ){
                            printf("Variable already exists.");
                            return 1;
                        } else if ((yyvsp[-4].string) == type){
                            Value val(type);
                            val.stringVal = (yyvsp[-1].string);
                            Variable var((yyvsp[-3].string), val);
                            ids.addVar(var);
                        }  else {
                            printf("Different types.");
                            return 1;
                        }                     
                    }
#line 1483 "lang.tab.c"
    break;

  case 23: /* variable_declaration: TYPE ID '=' expression ';'  */
#line 146 "lang.y"
                                                 {
                        if ( ids.exists((yyvsp[-3].string)) ){
                            printf("Variable already exists.");
                            return 1;
                        }
                        if ((yyvsp[-4].string) == (yyvsp[-1].ASTNode)->TypeOf()) {
                            Value val((yyvsp[-4].string));
                            if(val.type == "int") {
                                val.intVal = (yyvsp[-1].ASTNode)->Eval().intVal;
                            } else if (val.type == "float") {
                                val.floatVal = (yyvsp[-1].ASTNode)->Eval().floatVal;
                            } else if (val.type == "bool") {
                                val.boolVal = (yyvsp[-1].ASTNode)->Eval().boolVal;
                            }        
                            Variable var((yyvsp[-3].string), val);
                            ids.addVar(var);
                        } else {
                            printf("Different types.");
                        }
                    }
#line 1508 "lang.tab.c"
    break;

  case 24: /* variable_declaration: CONST TYPE ID ';'  */
#line 166 "lang.y"
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
#line 1524 "lang.tab.c"
    break;

  case 25: /* variable_declaration: CONST TYPE ID '=' expression ';'  */
#line 177 "lang.y"
                                                        { 
                        if ( ids.exists((yyvsp[-3].string)) ){
                            printf("Variable already exists.");
                            return 1;
                        }
                        if ((yyvsp[-4].string) == (yyvsp[-1].ASTNode)->TypeOf()) {
                            Value val((yyvsp[-4].string));
                            val.isConst = true;
                            if(val.type == "int") {
                                val.intVal = (yyvsp[-1].ASTNode)->Eval().intVal;
                            } else if (val.type == "float") {
                                val.floatVal = (yyvsp[-1].ASTNode)->Eval().floatVal;
                            } else if (val.type == "bool") {
                                val.boolVal = (yyvsp[-1].ASTNode)->Eval().boolVal;
                            } 
                            Variable var((yyvsp[-3].string), val);
                            ids.addVar(var);
                        } else {
                            printf("Different types.");
                        }
                        
                    }
#line 1551 "lang.tab.c"
    break;

  case 26: /* class_var_declaration: CLASS ID ID ';'  */
#line 203 "lang.y"
                                       {
                            Value val((yyvsp[-2].string));
                            Variable var((yyvsp[-1].string), val);
                            ids.addVar(var);
                    }
#line 1561 "lang.tab.c"
    break;

  case 27: /* class_var_declaration: CLASS ID ID '=' ID ';'  */
#line 208 "lang.y"
                                              {
                            //check if they have same type
                            Value val((yyvsp[-4].string));
                            Variable var((yyvsp[-3].string), val);
                            ids.addVar(var);    
                     }
#line 1572 "lang.tab.c"
    break;

  case 28: /* class_var_declaration: CLASS ID ID '=' fn_call ';'  */
#line 214 "lang.y"
                                                   {
                        //check if they have same type
                            Value val((yyvsp[-4].string));
                            Variable var((yyvsp[-3].string), val);
                            ids.addVar(var);
                     }
#line 1583 "lang.tab.c"
    break;

  case 29: /* array_declaration: TYPE ID '[' INT ']' ';'  */
#line 222 "lang.y"
                                           {
                    if( ids.exists((yyvsp[-4].string)) ) {
                        printf("Array already exists.");
                        return 1;
                    } else {
                        Array arr((yyvsp[-4].string), atoi((yyvsp[-2].string)), (yyvsp[-5].string));
                        ids.addArr(arr);
                    }
                 }
#line 1597 "lang.tab.c"
    break;

  case 30: /* array_declaration: TYPE ID '[' ']' '=' '[' one_type_values ']' ';'  */
#line 231 "lang.y"
                                                                  {
                    if( ids.exists((yyvsp[-7].string)) ) {
                        printf("Array already exists.");
                        return 1;
                    } else {
                        Array arr((yyvsp[-7].string), (yyvsp[-8].string), (yyvsp[-2].string));
                        ids.addArr(arr);
                    }
                 }
#line 1611 "lang.tab.c"
    break;

  case 48: /* statement: assignment_statement  */
#line 271 "lang.y"
                                { /* handle assignment statement */ }
#line 1617 "lang.tab.c"
    break;

  case 49: /* statement: control_statement  */
#line 272 "lang.y"
                             { /* handle control statement */ }
#line 1623 "lang.tab.c"
    break;

  case 50: /* statement: fn_call ';'  */
#line 273 "lang.y"
                       { /* handle function call */ }
#line 1629 "lang.tab.c"
    break;

  case 51: /* statement: RETURN expr ';'  */
#line 274 "lang.y"
                           {

         }
#line 1637 "lang.tab.c"
    break;

  case 52: /* assignment_statement: ID '=' expr ';'  */
#line 279 "lang.y"
                                      {}
#line 1643 "lang.tab.c"
    break;

  case 71: /* arithm_expr: arithm_expr '+' arithm_expr  */
#line 316 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "+", (yyvsp[0].ASTNode)); 
               else 
                   printf("Different types.\n");
           }
#line 1654 "lang.tab.c"
    break;

  case 72: /* arithm_expr: arithm_expr '-' arithm_expr  */
#line 322 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "-", (yyvsp[0].ASTNode)); 
               else 
                   printf("Different types.\n");
           }
#line 1665 "lang.tab.c"
    break;

  case 73: /* arithm_expr: arithm_expr '/' arithm_expr  */
#line 328 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "/", (yyvsp[0].ASTNode)); 
               else 
                   printf("Different types.\n");
           }
#line 1676 "lang.tab.c"
    break;

  case 74: /* arithm_expr: arithm_expr '*' arithm_expr  */
#line 334 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "*", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.\n");
           }
#line 1687 "lang.tab.c"
    break;

  case 75: /* arithm_expr: arithm_expr '%' arithm_expr  */
#line 340 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "%", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.\n");
           }
#line 1698 "lang.tab.c"
    break;

  case 76: /* arithm_expr: '(' arithm_expr ')'  */
#line 346 "lang.y"
                                 {}
#line 1704 "lang.tab.c"
    break;

  case 77: /* arithm_expr: INT  */
#line 347 "lang.y"
                 {
               char* identifierText = strdup(yytext);
               (yyval.ASTNode) = new AST(new Value(identifierText, "int")); 
           }
#line 1713 "lang.tab.c"
    break;

  case 78: /* arithm_expr: FLOAT  */
#line 351 "lang.y"
                   {
               char* identifierText = strdup(yytext);
               (yyval.ASTNode) = new AST(new Value(identifierText, "float")); 
           }
#line 1722 "lang.tab.c"
    break;

  case 79: /* arithm_expr: fn_call  */
#line 355 "lang.y"
                     {
               //$$ = new AST($1->Eval());
            }
#line 1730 "lang.tab.c"
    break;

  case 80: /* arithm_expr: ID  */
#line 358 "lang.y"
                {
                
           }
#line 1738 "lang.tab.c"
    break;

  case 81: /* arithm_expr: ID '.' ID  */
#line 361 "lang.y"
                       { }
#line 1744 "lang.tab.c"
    break;

  case 82: /* arithm_expr: ID '.' fn_call  */
#line 362 "lang.y"
                            {}
#line 1750 "lang.tab.c"
    break;

  case 83: /* arithm_expr: ID '[' ID ']'  */
#line 363 "lang.y"
                           {}
#line 1756 "lang.tab.c"
    break;

  case 84: /* arithm_expr: ID '[' INT ']'  */
#line 364 "lang.y"
                            {}
#line 1762 "lang.tab.c"
    break;

  case 85: /* arithm_expr: ID '[' fn_call ']'  */
#line 365 "lang.y"
                                {}
#line 1768 "lang.tab.c"
    break;

  case 86: /* bool_expr: bool_expr AND bool_expr  */
#line 369 "lang.y"
                                   {
               (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "and", (yyvsp[0].ASTNode)); 
         }
#line 1776 "lang.tab.c"
    break;

  case 87: /* bool_expr: bool_expr OR bool_expr  */
#line 372 "lang.y"
                                  {
               (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "or", (yyvsp[0].ASTNode)); 
           }
#line 1784 "lang.tab.c"
    break;

  case 88: /* bool_expr: NOT bool_expr  */
#line 375 "lang.y"
                         {
               (yyval.ASTNode) = new AST((yyvsp[0].ASTNode), "not", NULL); 
         }
#line 1792 "lang.tab.c"
    break;

  case 89: /* bool_expr: '(' bool_expr ')'  */
#line 378 "lang.y"
                             {}
#line 1798 "lang.tab.c"
    break;

  case 90: /* bool_expr: BOOL  */
#line 379 "lang.y"
                {}
#line 1804 "lang.tab.c"
    break;

  case 91: /* bool_expr: arithm_expr GT arithm_expr  */
#line 380 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "gt", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.\n");
           }
#line 1815 "lang.tab.c"
    break;

  case 92: /* bool_expr: arithm_expr LT arithm_expr  */
#line 386 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "lt", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types\n");
           }
#line 1826 "lang.tab.c"
    break;

  case 93: /* bool_expr: arithm_expr GEQ arithm_expr  */
#line 392 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "geq", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.\n");
           }
#line 1837 "lang.tab.c"
    break;

  case 94: /* bool_expr: arithm_expr LEQ arithm_expr  */
#line 398 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "leq", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.\n");
           }
#line 1848 "lang.tab.c"
    break;

  case 95: /* bool_expr: arithm_expr EQ arithm_expr  */
#line 404 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "eq", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.\n");
           }
#line 1859 "lang.tab.c"
    break;

  case 96: /* bool_expr: arithm_expr NEQ arithm_expr  */
#line 410 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "neq", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.\n");
           }
#line 1870 "lang.tab.c"
    break;

  case 97: /* fn_call: ID '(' argument_list ')'  */
#line 419 "lang.y"
                                  { /* handle function call */ }
#line 1876 "lang.tab.c"
    break;


#line 1880 "lang.tab.c"

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

#line 428 "lang.y"

void yyerror(const char * s) {
    std::cerr << "error: " << s << " at line:" << yylineno << std::endl;
}

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");
    yyparse();

    ids.printVars();
    ids.printFuncs();
    ids.printUsrDefs();
    ids.exportToFile("symbol_table.txt");
    return 0;
}
