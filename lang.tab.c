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
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_BOOL = 5,                       /* BOOL  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_STRING = 7,                     /* STRING  */
  YYSYMBOL_ARRAY_ELEMENT = 8,              /* ARRAY_ELEMENT  */
  YYSYMBOL_CLASS_VAR = 9,                  /* CLASS_VAR  */
  YYSYMBOL_CLASS_METHOD = 10,              /* CLASS_METHOD  */
  YYSYMBOL_CLASS = 11,                     /* CLASS  */
  YYSYMBOL_CONST = 12,                     /* CONST  */
  YYSYMBOL_NEQ = 13,                       /* NEQ  */
  YYSYMBOL_GT = 14,                        /* GT  */
  YYSYMBOL_GEQ = 15,                       /* GEQ  */
  YYSYMBOL_LT = 16,                        /* LT  */
  YYSYMBOL_LEQ = 17,                       /* LEQ  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_OR = 19,                        /* OR  */
  YYSYMBOL_NOT = 20,                       /* NOT  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_WHILE = 23,                     /* WHILE  */
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_SWITCH = 25,                    /* SWITCH  */
  YYSYMBOL_CASE = 26,                      /* CASE  */
  YYSYMBOL_ENTRY = 27,                     /* ENTRY  */
  YYSYMBOL_EXIT = 28,                      /* EXIT  */
  YYSYMBOL_MAIN = 29,                      /* MAIN  */
  YYSYMBOL_FNENTRY = 30,                   /* FNENTRY  */
  YYSYMBOL_FNEXIT = 31,                    /* FNEXIT  */
  YYSYMBOL_BREAK = 32,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 33,                   /* DEFAULT  */
  YYSYMBOL_USRDEF = 34,                    /* USRDEF  */
  YYSYMBOL_GLOBALVAR = 35,                 /* GLOBALVAR  */
  YYSYMBOL_GLOBALFUNC = 36,                /* GLOBALFUNC  */
  YYSYMBOL_RETURN = 37,                    /* RETURN  */
  YYSYMBOL_PRINT = 38,                     /* PRINT  */
  YYSYMBOL_ID = 39,                        /* ID  */
  YYSYMBOL_TYPE = 40,                      /* TYPE  */
  YYSYMBOL_EVAL = 41,                      /* EVAL  */
  YYSYMBOL_TYPEOF = 42,                    /* TYPEOF  */
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
  YYSYMBOL_if_statement = 83,              /* if_statement  */
  YYSYMBOL_case_block = 84,                /* case_block  */
  YYSYMBOL_value = 85,                     /* value  */
  YYSYMBOL_expression = 86,                /* expression  */
  YYSYMBOL_arithm_expr = 87,               /* arithm_expr  */
  YYSYMBOL_bool_expr = 88,                 /* bool_expr  */
  YYSYMBOL_fn_call = 89,                   /* fn_call  */
  YYSYMBOL_argument_list = 90              /* argument_list  */
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
#define YYLAST   393

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  218

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
       0,    51,    51,    54,    55,    58,    61,    62,    65,    66,
      69,    76,    77,    80,    81,    84,    85,    86,    90,    92,
      97,   102,   107,   116,   121,   122,   125,   126,   129,   130,
     131,   132,   135,   136,   139,   140,   143,   144,   147,   148,
     151,   152,   155,   156,   157,   158,   159,   160,   161,   164,
     167,   168,   169,   170,   173,   174,   178,   179,   182,   183,
     184,   185,   186,   190,   191,   192,   193,   198,   204,   210,
     216,   222,   228,   229,   233,   237,   238,   241,   242,   243,
     244,   245,   249,   252,   255,   258,   259,   260,   266,   272,
     278,   284,   290,   299,   303,   304,   305
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT", "BOOL",
  "CHAR", "STRING", "ARRAY_ELEMENT", "CLASS_VAR", "CLASS_METHOD", "CLASS",
  "CONST", "NEQ", "GT", "GEQ", "LT", "LEQ", "AND", "OR", "NOT", "IF",
  "ELSE", "WHILE", "FOR", "SWITCH", "CASE", "ENTRY", "EXIT", "MAIN",
  "FNENTRY", "FNEXIT", "BREAK", "DEFAULT", "USRDEF", "GLOBALVAR",
  "GLOBALFUNC", "RETURN", "PRINT", "ID", "TYPE", "EVAL", "TYPEOF", "EQ",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'{'", "'}'", "';'", "'('", "')'",
  "','", "'='", "'['", "']'", "':'", "'.'", "$accept", "program",
  "user_defined_types", "user_defined_type", "field_variables",
  "field_functions", "function_declaration", "global_variables",
  "global_functions", "parameter_list", "parameter",
  "variable_declaration", "class_var_declaration", "array_declaration",
  "one_type_values", "int_values", "float_values", "bool_values",
  "char_values", "block", "statement", "assignment_statement",
  "control_statement", "if_statement", "case_block", "value", "expression",
  "arithm_expr", "bool_expr", "fn_call", "argument_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-108)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -14,    29,    78,  -108,  -108,    -6,    30,  -108,  -108,    54,
     -10,  -108,    85,  -108,    93,  -108,     3,   100,   105,    59,
      44,  -108,    66,   104,   127,  -108,  -108,   102,   107,  -108,
    -108,   102,   353,   139,  -108,  -108,  -108,  -108,  -108,   157,
      16,   157,   129,   292,   119,  -108,  -108,   130,   143,   157,
     157,   132,   102,   102,    71,   148,  -108,  -108,  -108,   174,
    -108,  -108,  -108,  -108,   137,   138,   292,  -108,   102,     1,
     150,   159,   -12,  -108,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,   157,   157,  -108,   152,    15,
      17,   153,   144,   149,   102,    40,   166,  -108,  -108,   161,
    -108,    89,   151,    33,   162,   158,  -108,  -108,  -108,    28,
      53,    53,    53,    53,    53,    53,    82,    82,  -108,  -108,
    -108,  -108,   199,    69,   353,   353,   163,   171,   197,  -108,
     175,     5,  -108,   196,    96,  -108,  -108,   102,  -108,  -108,
    -108,   192,  -108,   203,   204,   209,   157,    79,    -5,  -108,
     190,   176,  -108,   208,   161,  -108,   118,   201,   231,  -108,
       6,  -108,  -108,  -108,  -108,   158,   200,  -108,    79,   212,
     210,   215,   353,  -108,  -108,  -108,    21,   153,   353,   214,
     353,  -108,   160,   239,   353,  -108,   213,   309,   353,   244,
    -108,  -108,  -108,  -108,   216,   271,   273,   270,   276,  -108,
     274,   238,   229,   331,  -108,   237,  -108,  -108,  -108,  -108,
    -108,   353,  -108,   241,  -108,   279,  -108,  -108
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,     0,    11,     4,     0,
       0,     6,     0,    13,     0,    12,     8,     0,     0,     0,
       0,     7,     0,     0,     0,    14,    19,     0,     0,     9,
      21,     0,     0,     0,    73,    74,    86,    66,    65,     0,
      76,     0,     0,    63,    64,    75,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    44,    43,     0,
      40,    45,    46,    50,     0,     0,     0,    84,    94,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    47,    15,
      95,     0,     0,     0,     0,    77,    78,    72,    85,     0,
      92,    87,    89,    88,    90,    91,    67,    68,    70,    69,
      71,    82,    83,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     2,     0,     0,    16,    93,     0,    80,    79,
      81,     0,    23,     0,     0,     0,     0,     0,     0,    49,
       0,     0,    18,     0,     0,    96,     0,     0,     0,    52,
       0,    58,    59,    60,    62,     0,     0,    61,     0,     0,
       0,     0,     0,    17,    24,    25,     0,     0,     0,     0,
       0,    26,     0,     0,     0,    55,     0,     0,     0,     0,
      33,    35,    37,    39,     0,    28,    29,    30,    31,    10,
       0,     0,     0,     0,    51,     0,    32,    34,    36,    38,
      54,     0,    56,     0,    27,     0,    57,    53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,  -108,  -108,  -108,  -108,   281,  -108,  -108,  -108,
     142,     0,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -107,
     -56,   -90,  -108,   117,  -108,   147,     8,   -30,   -27,   -32,
    -108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     5,     8,    16,    20,    25,    10,    18,   134,
     135,    56,    57,    58,   194,   195,   196,   197,   198,    59,
      60,    61,    62,    63,   148,   166,    42,    43,    44,    45,
     101
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      64,   127,    12,    97,   102,     6,    85,    86,   150,    66,
      15,    71,    67,     1,    72,    12,    21,   144,   145,    66,
      66,   168,    89,    90,    85,    86,    13,    64,   169,     7,
      14,    34,    35,    85,    86,    85,    86,   104,   106,    47,
     103,   108,    49,    14,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,    66,    66,   177,   121,   122,
      92,    93,   151,     3,   124,   183,   125,    40,    68,     9,
     184,   187,    69,   189,    24,    70,   100,   200,     4,   141,
     109,   203,   161,   162,   163,    68,   164,   186,    97,    97,
     139,    26,    64,    64,    28,    27,   131,    80,    81,    82,
      83,    84,   130,    11,   215,    34,    35,    36,    37,    38,
      26,   157,    64,    64,    27,   167,    66,    30,   165,   160,
     142,    31,    39,    68,   143,    17,    94,    97,    82,    83,
      84,    97,    19,    97,    23,    24,   167,    85,    86,    22,
      64,    40,   136,   137,    97,   155,    64,    97,    64,   153,
     154,    64,    64,    32,    41,    64,    64,    64,    46,    97,
      34,    35,    36,   190,   191,   192,   193,    33,    64,   174,
      68,    64,    74,    75,    76,    77,    78,    39,    65,    64,
      73,    87,    88,    64,    91,    48,    12,    95,    98,   105,
      99,   123,   126,   128,   132,    49,    40,    50,    51,    52,
     129,   133,    79,    80,    81,    82,    83,    84,   138,    41,
      68,    53,   107,    54,    55,    48,    12,    85,    94,   140,
      48,    12,   146,   147,    96,    49,   149,    50,    51,    52,
      49,   171,    50,    51,    52,   152,    80,    81,    82,    83,
      84,    53,   156,    54,    55,   107,    53,   170,    54,    55,
      48,    12,   175,   176,   158,    48,    12,   172,   178,   159,
      49,   181,    50,    51,    52,    49,   201,    50,    51,    52,
     180,   182,   188,   205,   206,   208,    53,   207,    54,    55,
     212,    53,   209,    54,    55,    48,    12,   211,   214,   199,
      48,    12,   216,   185,   204,    49,   173,    50,    51,    52,
      49,    29,    50,    51,    52,    74,    75,    76,    77,    78,
       0,    53,     0,    54,    55,   179,    53,     0,    54,    55,
      48,    12,     0,     0,   210,     0,     0,     0,     0,   217,
      49,     0,    50,    51,    52,    79,    80,    81,    82,    83,
      84,   202,    48,    12,     0,     0,    53,     0,    54,    55,
       0,     0,    49,     0,    50,    51,    52,     0,     0,     0,
       0,     0,     0,   213,    48,    12,     0,     0,    53,     0,
      54,    55,     0,     0,    49,     0,    50,    51,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,    54,    55
};

static const yytype_int16 yycheck[] =
{
      32,    91,    12,    59,     3,    11,    18,    19,     3,    39,
      10,    41,    39,    27,    41,    12,    16,   124,   125,    49,
      50,    26,    49,    50,    18,    19,    36,    59,    33,    35,
      40,     3,     4,    18,    19,    18,    19,    69,    70,    31,
      39,    53,    21,    40,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    51,    85,    86,
      52,    53,    57,    34,    49,   172,    49,    39,    52,    39,
      49,   178,    56,   180,    30,    59,    68,   184,     0,   109,
      52,   188,     3,     4,     5,    52,     7,   177,   144,   145,
      57,    51,   124,   125,    50,    55,    56,    44,    45,    46,
      47,    48,    94,    49,   211,     3,     4,     5,     6,     7,
      51,   143,   144,   145,    55,   147,   146,    51,    39,   146,
      51,    55,    20,    52,    55,    40,    55,   183,    46,    47,
      48,   187,    39,   189,    29,    30,   168,    18,    19,    39,
     172,    39,    53,    54,   200,   137,   178,   203,   180,    53,
      54,   183,   184,    49,    52,   187,   188,   189,    51,   215,
       3,     4,     5,     3,     4,     5,     6,    40,   200,    51,
      52,   203,    13,    14,    15,    16,    17,    20,    39,   211,
      51,    51,    39,   215,    52,    11,    12,    39,    51,    39,
      52,    39,    39,    49,    28,    21,    39,    23,    24,    25,
      51,    40,    43,    44,    45,    46,    47,    48,    57,    52,
      52,    37,    53,    39,    40,    11,    12,    18,    55,    57,
      11,    12,    51,    26,    50,    21,    51,    23,    24,    25,
      21,    55,    23,    24,    25,    39,    44,    45,    46,    47,
      48,    37,    39,    39,    40,    53,    37,    57,    39,    40,
      11,    12,    51,    22,    50,    11,    12,    49,    58,    50,
      21,    51,    23,    24,    25,    21,    53,    23,    24,    25,
      58,    56,    58,    57,     3,     5,    37,     4,    39,    40,
      51,    37,     6,    39,    40,    11,    12,    49,    51,    50,
      11,    12,    51,   176,    50,    21,   154,    23,    24,    25,
      21,    20,    23,    24,    25,    13,    14,    15,    16,    17,
      -1,    37,    -1,    39,    40,   168,    37,    -1,    39,    40,
      11,    12,    -1,    -1,    50,    -1,    -1,    -1,    -1,    50,
      21,    -1,    23,    24,    25,    43,    44,    45,    46,    47,
      48,    32,    11,    12,    -1,    -1,    37,    -1,    39,    40,
      -1,    -1,    21,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    11,    12,    -1,    -1,    37,    -1,
      39,    40,    -1,    -1,    21,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    39,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    27,    61,    34,     0,    62,    11,    35,    63,    39,
      67,    49,    12,    36,    40,    71,    64,    40,    68,    39,
      65,    71,    39,    29,    30,    66,    51,    55,    50,    66,
      51,    55,    49,    40,     3,     4,     5,     6,     7,    20,
      39,    52,    86,    87,    88,    89,    51,    86,    11,    21,
      23,    24,    25,    37,    39,    40,    71,    72,    73,    79,
      80,    81,    82,    83,    89,    39,    87,    88,    52,    56,
      59,    87,    88,    51,    13,    14,    15,    16,    17,    43,
      44,    45,    46,    47,    48,    18,    19,    51,    39,    88,
      88,    52,    86,    86,    55,    39,    50,    80,    51,    52,
      86,    90,     3,    39,    89,    39,    89,    53,    53,    52,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    39,    49,    49,    39,    81,    49,    51,
      86,    56,    28,    40,    69,    70,    53,    54,    57,    57,
      57,    87,    51,    55,    79,    79,    51,    26,    84,    51,
       3,    57,    39,    53,    54,    86,    39,    89,    50,    50,
      88,     3,     4,     5,     7,    39,    85,    89,    26,    33,
      57,    55,    49,    70,    51,    51,    22,    51,    58,    85,
      58,    51,    56,    79,    49,    83,    81,    79,    58,    79,
       3,     4,     5,     6,    74,    75,    76,    77,    78,    50,
      79,    53,    32,    79,    50,    57,     3,     4,     5,     6,
      50,    49,    51,    32,    51,    79,    51,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    64,    64,    65,    65,
      66,    67,    67,    68,    68,    69,    69,    69,    70,    71,
      71,    71,    71,    72,    72,    72,    73,    73,    74,    74,
      74,    74,    75,    75,    76,    76,    77,    77,    78,    78,
      79,    79,    80,    80,    80,    80,    80,    80,    80,    81,
      82,    82,    82,    82,    83,    83,    84,    84,    85,    85,
      85,    85,    85,    86,    86,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    89,    90,    90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    12,     0,     2,     7,     0,     2,     0,     2,
       9,     0,     2,     0,     2,     0,     1,     3,     2,     3,
       5,     4,     6,     4,     6,     6,     6,     9,     1,     1,
       1,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     2,     1,     1,     1,     1,     1,     2,     3,     4,
       1,     8,     5,    11,     9,     7,     6,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     3,     3,     4,
       4,     4,     3,     3,     2,     3,     1,     3,     3,     3,
       3,     3,     3,     4,     0,     1,     3
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
#line 51 "lang.y"
                                                                                                                        {printf("Program is correct!\n");}
#line 1345 "lang.tab.c"
    break;

  case 5: /* user_defined_type: CLASS ID '{' field_variables field_functions '}' ';'  */
#line 58 "lang.y"
                                                                        {}
#line 1351 "lang.tab.c"
    break;

  case 6: /* field_variables: %empty  */
#line 61 "lang.y"
                           {}
#line 1357 "lang.tab.c"
    break;

  case 7: /* field_variables: field_variables variable_declaration  */
#line 62 "lang.y"
                                                      { }
#line 1363 "lang.tab.c"
    break;

  case 8: /* field_functions: %empty  */
#line 65 "lang.y"
                           { }
#line 1369 "lang.tab.c"
    break;

  case 9: /* field_functions: field_functions function_declaration  */
#line 66 "lang.y"
                                                      { }
#line 1375 "lang.tab.c"
    break;

  case 10: /* function_declaration: FNENTRY TYPE ID '(' parameter_list ')' '{' block '}'  */
#line 69 "lang.y"
                                                                           { 
                        Function func((yyvsp[-6].string), (yyvsp[-7].string), globalParams);
                        ids.addFunc(func);
                        globalParams.clear();
                    }
#line 1385 "lang.tab.c"
    break;

  case 15: /* parameter_list: %empty  */
#line 84 "lang.y"
                 {}
#line 1391 "lang.tab.c"
    break;

  case 16: /* parameter_list: parameter  */
#line 85 "lang.y"
                           { }
#line 1397 "lang.tab.c"
    break;

  case 17: /* parameter_list: parameter_list ',' parameter  */
#line 86 "lang.y"
                                               { }
#line 1403 "lang.tab.c"
    break;

  case 18: /* parameter: TYPE ID  */
#line 90 "lang.y"
                    { globalParams.push_back(Parameter((yyvsp[0].string), (yyvsp[-1].string)));}
#line 1409 "lang.tab.c"
    break;

  case 19: /* variable_declaration: TYPE ID ';'  */
#line 92 "lang.y"
                                  {
                         Value val((yyvsp[-2].string));
                         Variable var((yyvsp[-1].string), val);
                         ids.addVar(var);
                    }
#line 1419 "lang.tab.c"
    break;

  case 20: /* variable_declaration: TYPE ID '=' expression ';'  */
#line 97 "lang.y"
                                                 {
                         Value val((yyvsp[-4].string));
                         Variable var((yyvsp[-3].string), val);
                         ids.addVar(var);
                    }
#line 1429 "lang.tab.c"
    break;

  case 21: /* variable_declaration: CONST TYPE ID ';'  */
#line 102 "lang.y"
                                         { 
                        Value val((yyvsp[-2].string));
                        val.isConst = true;
                        Variable var((yyvsp[-1].string), val);
                        ids.addVar(var);}
#line 1439 "lang.tab.c"
    break;

  case 22: /* variable_declaration: CONST TYPE ID '=' expression ';'  */
#line 107 "lang.y"
                                                        { 
                        Value val((yyvsp[-4].string));
                        val.isConst = true;
                        Variable var((yyvsp[-3].string), val);
                        ids.addVar(var);
                    }
#line 1450 "lang.tab.c"
    break;

  case 23: /* class_var_declaration: CLASS ID ID ';'  */
#line 116 "lang.y"
                                       {
                            Value val((yyvsp[-2].string));
                            Variable var((yyvsp[-1].string), val);
                            ids.addVar(var);
                    }
#line 1460 "lang.tab.c"
    break;

  case 45: /* statement: assignment_statement  */
#line 158 "lang.y"
                                { /* handle assignment statement */ }
#line 1466 "lang.tab.c"
    break;

  case 46: /* statement: control_statement  */
#line 159 "lang.y"
                             { /* handle control statement */ }
#line 1472 "lang.tab.c"
    break;

  case 47: /* statement: fn_call ';'  */
#line 160 "lang.y"
                       { /* handle function call */ }
#line 1478 "lang.tab.c"
    break;

  case 49: /* assignment_statement: ID '=' expression ';'  */
#line 164 "lang.y"
                                            {}
#line 1484 "lang.tab.c"
    break;

  case 67: /* arithm_expr: arithm_expr '+' arithm_expr  */
#line 198 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "+", (yyvsp[0].ASTNode)); 
               else 
                   printf("Different types.\n");
           }
#line 1495 "lang.tab.c"
    break;

  case 68: /* arithm_expr: arithm_expr '-' arithm_expr  */
#line 204 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "-", (yyvsp[0].ASTNode)); 
               else 
                   printf("Different types.\n");
           }
#line 1506 "lang.tab.c"
    break;

  case 69: /* arithm_expr: arithm_expr '/' arithm_expr  */
#line 210 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "/", (yyvsp[0].ASTNode)); 
               else 
                   printf("Different types.\n");
           }
#line 1517 "lang.tab.c"
    break;

  case 70: /* arithm_expr: arithm_expr '*' arithm_expr  */
#line 216 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "*", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.\n");
           }
#line 1528 "lang.tab.c"
    break;

  case 71: /* arithm_expr: arithm_expr '%' arithm_expr  */
#line 222 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "%", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.\n");
           }
#line 1539 "lang.tab.c"
    break;

  case 72: /* arithm_expr: '(' arithm_expr ')'  */
#line 228 "lang.y"
                                 {}
#line 1545 "lang.tab.c"
    break;

  case 73: /* arithm_expr: INT  */
#line 229 "lang.y"
                 {
               char* identifierText = strdup(yytext);
               (yyval.ASTNode) = new AST(new Value(identifierText, "int")); 
           }
#line 1554 "lang.tab.c"
    break;

  case 74: /* arithm_expr: FLOAT  */
#line 233 "lang.y"
                   {
               char* identifierText = strdup(yytext);
               (yyval.ASTNode) = new AST(new Value(identifierText, "float")); 
           }
#line 1563 "lang.tab.c"
    break;

  case 75: /* arithm_expr: fn_call  */
#line 237 "lang.y"
                     { }
#line 1569 "lang.tab.c"
    break;

  case 76: /* arithm_expr: ID  */
#line 238 "lang.y"
                {

           }
#line 1577 "lang.tab.c"
    break;

  case 77: /* arithm_expr: ID '.' ID  */
#line 241 "lang.y"
                       { }
#line 1583 "lang.tab.c"
    break;

  case 78: /* arithm_expr: ID '.' fn_call  */
#line 242 "lang.y"
                            {}
#line 1589 "lang.tab.c"
    break;

  case 79: /* arithm_expr: ID '[' ID ']'  */
#line 243 "lang.y"
                           {}
#line 1595 "lang.tab.c"
    break;

  case 80: /* arithm_expr: ID '[' INT ']'  */
#line 244 "lang.y"
                            {}
#line 1601 "lang.tab.c"
    break;

  case 81: /* arithm_expr: ID '[' fn_call ']'  */
#line 245 "lang.y"
                                {}
#line 1607 "lang.tab.c"
    break;

  case 82: /* bool_expr: bool_expr AND bool_expr  */
#line 249 "lang.y"
                                   {
               (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "and", (yyvsp[0].ASTNode)); 
         }
#line 1615 "lang.tab.c"
    break;

  case 83: /* bool_expr: bool_expr OR bool_expr  */
#line 252 "lang.y"
                                  {
               (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "or", (yyvsp[0].ASTNode)); 
           }
#line 1623 "lang.tab.c"
    break;

  case 84: /* bool_expr: NOT bool_expr  */
#line 255 "lang.y"
                         {
               (yyval.ASTNode) = new AST((yyvsp[0].ASTNode), "not", NULL); 
         }
#line 1631 "lang.tab.c"
    break;

  case 85: /* bool_expr: '(' bool_expr ')'  */
#line 258 "lang.y"
                             {}
#line 1637 "lang.tab.c"
    break;

  case 86: /* bool_expr: BOOL  */
#line 259 "lang.y"
                {}
#line 1643 "lang.tab.c"
    break;

  case 87: /* bool_expr: arithm_expr GT arithm_expr  */
#line 260 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "gt", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.\n");
           }
#line 1654 "lang.tab.c"
    break;

  case 88: /* bool_expr: arithm_expr LT arithm_expr  */
#line 266 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "lt", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types\n");
           }
#line 1665 "lang.tab.c"
    break;

  case 89: /* bool_expr: arithm_expr GEQ arithm_expr  */
#line 272 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "geq", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.\n");
           }
#line 1676 "lang.tab.c"
    break;

  case 90: /* bool_expr: arithm_expr LEQ arithm_expr  */
#line 278 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "leq", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.\n");
           }
#line 1687 "lang.tab.c"
    break;

  case 91: /* bool_expr: arithm_expr EQ arithm_expr  */
#line 284 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "eq", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.\n");
           }
#line 1698 "lang.tab.c"
    break;

  case 92: /* bool_expr: arithm_expr NEQ arithm_expr  */
#line 290 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "neq", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.\n");
           }
#line 1709 "lang.tab.c"
    break;

  case 93: /* fn_call: ID '(' argument_list ')'  */
#line 299 "lang.y"
                                  { /* handle function call */ }
#line 1715 "lang.tab.c"
    break;


#line 1719 "lang.tab.c"

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

#line 308 "lang.y"

void yyerror(const char * s) {
    std::cerr << "error: " << s << " at line:" << yylineno << std::endl;
}

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");
    yyparse();

    ids.printVars();
    ids.printFuncs();
    return 0;
}
