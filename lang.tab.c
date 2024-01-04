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

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();

class IdList ids;

void yyerror(const char * s);

#line 87 "lang.tab.c"

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
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  217

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
       0,    46,    46,    49,    50,    53,    60,    61,    64,    65,
      68,    75,    76,    79,    80,    83,    84,    85,    89,    91,
      96,   101,   105,   106,   107,   110,   111,   114,   115,   116,
     117,   120,   121,   124,   125,   128,   129,   132,   133,   136,
     137,   140,   141,   142,   143,   144,   145,   146,   149,   152,
     153,   154,   155,   158,   159,   163,   164,   167,   168,   169,
     170,   171,   175,   176,   177,   178,   183,   189,   195,   201,
     207,   213,   214,   218,   222,   223,   226,   227,   228,   229,
     230,   234,   237,   240,   243,   244,   245,   251,   257,   263,
     269,   275,   284,   288,   289,   290
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

#define YYPACT_NINF (-107)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -14,    29,    69,  -107,  -107,    -6,    39,  -107,  -107,    54,
     -10,  -107,    80,  -107,    89,  -107,     3,   119,   105,    59,
      44,  -107,    75,   104,   127,  -107,  -107,   102,   118,  -107,
     102,   353,   131,  -107,  -107,  -107,  -107,  -107,   157,    16,
     157,   129,   292,   124,  -107,  -107,   130,   139,   157,   157,
     132,   102,   102,    77,   143,  -107,  -107,  -107,   174,  -107,
    -107,  -107,  -107,   136,   137,   292,  -107,   102,     1,   149,
     159,   -12,  -107,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,   157,   157,  -107,   151,    15,    17,
     152,   144,   141,   102,    40,   166,  -107,  -107,   160,  -107,
      96,   153,    33,   161,   156,  -107,  -107,  -107,    28,    53,
      53,    53,    53,    53,    53,    91,    91,  -107,  -107,  -107,
    -107,   183,    66,   353,   353,   162,   168,   196,  -107,   172,
       5,  -107,   187,   110,  -107,  -107,   102,  -107,  -107,  -107,
     192,  -107,   203,   204,   209,   157,    79,    -5,  -107,   178,
     176,  -107,   198,   160,  -107,   114,   201,   231,  -107,     6,
    -107,  -107,  -107,  -107,   156,   199,  -107,    79,   200,   210,
     214,   353,  -107,  -107,  -107,    21,   152,   353,   208,   353,
    -107,   120,   239,   353,  -107,   218,   309,   353,   244,  -107,
    -107,  -107,  -107,   215,   270,   271,   269,   276,  -107,   274,
     228,   229,   331,  -107,   236,  -107,  -107,  -107,  -107,  -107,
     353,  -107,   237,  -107,   279,  -107,  -107
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,     0,    11,     4,     0,
       0,     6,     0,    13,     0,    12,     8,     0,     0,     0,
       0,     7,     0,     0,     0,    14,    19,     0,     0,     9,
       0,     0,     0,    72,    73,    85,    65,    64,     0,    75,
       0,     0,    62,    63,    74,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    41,    43,    42,     0,    39,
      44,    45,    49,     0,     0,     0,    83,    93,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    40,    46,    15,    94,
       0,     0,     0,     0,    76,    77,    71,    84,     0,    91,
      86,    88,    87,    89,    90,    66,    67,    69,    68,    70,
      81,    82,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     2,     0,     0,    16,    92,     0,    79,    78,    80,
       0,    22,     0,     0,     0,     0,     0,     0,    48,     0,
       0,    18,     0,     0,    95,     0,     0,     0,    51,     0,
      57,    58,    59,    61,     0,     0,    60,     0,     0,     0,
       0,     0,    17,    23,    24,     0,     0,     0,     0,     0,
      25,     0,     0,     0,    54,     0,     0,     0,     0,    32,
      34,    36,    38,     0,    27,    28,    29,    30,    10,     0,
       0,     0,     0,    50,     0,    31,    33,    35,    37,    53,
       0,    55,     0,    26,     0,    56,    52
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -107,  -107,  -107,  -107,  -107,  -107,   272,  -107,  -107,  -107,
     140,     0,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -106,
     -55,   -89,  -107,   121,  -107,   134,     9,   -29,   -26,   -31,
    -107
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     5,     8,    16,    20,    25,    10,    18,   133,
     134,    55,    56,    57,   193,   194,   195,   196,   197,    58,
      59,    60,    61,    62,   147,   165,    41,    42,    43,    44,
     100
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      63,   126,    12,    96,   101,     6,    84,    85,   149,    65,
      15,    70,    66,     1,    71,    12,    21,   143,   144,    65,
      65,   167,    88,    89,    84,    85,    13,    63,   168,     7,
      14,    33,    34,    84,    85,    84,    85,   103,   105,    46,
     102,   107,    48,    14,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,    65,    65,   176,   120,   121,
      91,    92,   150,     3,   123,   182,   124,    39,    67,     4,
     183,   186,    68,   188,    24,    69,    99,   199,     9,   140,
     108,   202,   160,   161,   162,    67,   163,   185,    96,    96,
     138,    26,    63,    63,    28,    27,   130,    79,    80,    81,
      82,    83,   129,    11,   214,    33,    34,    35,    36,    37,
      26,   156,    63,    63,    27,   166,    65,   141,   164,   159,
      17,   142,    38,   189,   190,   191,   192,    96,    19,    67,
      30,    96,    93,    96,    23,    24,   166,    81,    82,    83,
      63,    39,    84,    85,    96,   154,    63,    96,    63,   135,
     136,    63,    63,    31,    40,    63,    63,    63,    22,    96,
      33,    34,    35,   152,   153,   173,    67,    32,    63,    45,
      64,    63,    73,    74,    75,    76,    77,    38,    87,    63,
      72,    86,    94,    63,    90,    47,    12,    97,   104,    98,
     122,   125,   128,   127,   131,    48,    39,    49,    50,    51,
     132,    84,    78,    79,    80,    81,    82,    83,    67,    40,
     137,    52,   106,    53,    54,    47,    12,    93,   139,   145,
      47,    12,   146,   148,    95,    48,   151,    49,    50,    51,
      48,   170,    49,    50,    51,   169,    79,    80,    81,    82,
      83,    52,   155,    53,    54,   106,    52,   171,    53,    54,
      47,    12,   174,   175,   157,    47,    12,   177,   179,   158,
      48,   180,    49,    50,    51,    48,   187,    49,    50,    51,
     181,   200,   204,   205,   207,   206,    52,   210,    53,    54,
     211,    52,   208,    53,    54,    47,    12,   213,   215,   198,
      47,    12,    29,   172,   203,    48,   184,    49,    50,    51,
      48,   178,    49,    50,    51,    73,    74,    75,    76,    77,
       0,    52,     0,    53,    54,     0,    52,     0,    53,    54,
      47,    12,     0,     0,   209,     0,     0,     0,     0,   216,
      48,     0,    49,    50,    51,    78,    79,    80,    81,    82,
      83,   201,    47,    12,     0,     0,    52,     0,    53,    54,
       0,     0,    48,     0,    49,    50,    51,     0,     0,     0,
       0,     0,     0,   212,    47,    12,     0,     0,    52,     0,
      53,    54,     0,     0,    48,     0,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,    53,    54
};

static const yytype_int16 yycheck[] =
{
      31,    90,    12,    58,     3,    11,    18,    19,     3,    38,
      10,    40,    38,    27,    40,    12,    16,   123,   124,    48,
      49,    26,    48,    49,    18,    19,    36,    58,    33,    35,
      40,     3,     4,    18,    19,    18,    19,    68,    69,    30,
      39,    53,    21,    40,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    51,    84,    85,
      51,    52,    57,    34,    49,   171,    49,    39,    52,     0,
      49,   177,    56,   179,    30,    59,    67,   183,    39,   108,
      52,   187,     3,     4,     5,    52,     7,   176,   143,   144,
      57,    51,   123,   124,    50,    55,    56,    44,    45,    46,
      47,    48,    93,    49,   210,     3,     4,     5,     6,     7,
      51,   142,   143,   144,    55,   146,   145,    51,    39,   145,
      40,    55,    20,     3,     4,     5,     6,   182,    39,    52,
      55,   186,    55,   188,    29,    30,   167,    46,    47,    48,
     171,    39,    18,    19,   199,   136,   177,   202,   179,    53,
      54,   182,   183,    49,    52,   186,   187,   188,    39,   214,
       3,     4,     5,    53,    54,    51,    52,    40,   199,    51,
      39,   202,    13,    14,    15,    16,    17,    20,    39,   210,
      51,    51,    39,   214,    52,    11,    12,    51,    39,    52,
      39,    39,    51,    49,    28,    21,    39,    23,    24,    25,
      40,    18,    43,    44,    45,    46,    47,    48,    52,    52,
      57,    37,    53,    39,    40,    11,    12,    55,    57,    51,
      11,    12,    26,    51,    50,    21,    39,    23,    24,    25,
      21,    55,    23,    24,    25,    57,    44,    45,    46,    47,
      48,    37,    39,    39,    40,    53,    37,    49,    39,    40,
      11,    12,    51,    22,    50,    11,    12,    58,    58,    50,
      21,    51,    23,    24,    25,    21,    58,    23,    24,    25,
      56,    53,    57,     3,     5,     4,    37,    49,    39,    40,
      51,    37,     6,    39,    40,    11,    12,    51,    51,    50,
      11,    12,    20,   153,    50,    21,   175,    23,    24,    25,
      21,   167,    23,    24,    25,    13,    14,    15,    16,    17,
      -1,    37,    -1,    39,    40,    -1,    37,    -1,    39,    40,
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
      55,    49,    40,     3,     4,     5,     6,     7,    20,    39,
      52,    86,    87,    88,    89,    51,    86,    11,    21,    23,
      24,    25,    37,    39,    40,    71,    72,    73,    79,    80,
      81,    82,    83,    89,    39,    87,    88,    52,    56,    59,
      87,    88,    51,    13,    14,    15,    16,    17,    43,    44,
      45,    46,    47,    48,    18,    19,    51,    39,    88,    88,
      52,    86,    86,    55,    39,    50,    80,    51,    52,    86,
      90,     3,    39,    89,    39,    89,    53,    53,    52,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      88,    88,    39,    49,    49,    39,    81,    49,    51,    86,
      56,    28,    40,    69,    70,    53,    54,    57,    57,    57,
      87,    51,    55,    79,    79,    51,    26,    84,    51,     3,
      57,    39,    53,    54,    86,    39,    89,    50,    50,    88,
       3,     4,     5,     7,    39,    85,    89,    26,    33,    57,
      55,    49,    70,    51,    51,    22,    51,    58,    85,    58,
      51,    56,    79,    49,    83,    81,    79,    58,    79,     3,
       4,     5,     6,    74,    75,    76,    77,    78,    50,    79,
      53,    32,    79,    50,    57,     3,     4,     5,     6,    50,
      49,    51,    32,    51,    79,    51,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    64,    64,    65,    65,
      66,    67,    67,    68,    68,    69,    69,    69,    70,    71,
      71,    71,    72,    72,    72,    73,    73,    74,    74,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    81,    82,
      82,    82,    82,    83,    83,    84,    84,    85,    85,    85,
      85,    85,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    89,    90,    90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    12,     0,     2,     7,     0,     2,     0,     2,
       9,     0,     2,     0,     2,     0,     1,     3,     2,     3,
       5,     6,     4,     6,     6,     6,     9,     1,     1,     1,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     1,
       2,     1,     1,     1,     1,     1,     2,     3,     4,     1,
       8,     5,    11,     9,     7,     6,     7,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     3,     3,     4,     4,
       4,     3,     3,     2,     3,     1,     3,     3,     3,     3,
       3,     3,     4,     0,     1,     3
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
#line 46 "lang.y"
                                                                                                                        {printf("Program is correct!\n");}
#line 1342 "lang.tab.c"
    break;

  case 5: /* user_defined_type: CLASS ID '{' field_variables field_functions '}' ';'  */
#line 53 "lang.y"
                                                                        {
     Value val("class");
     Variable var((yyvsp[-5].string), val, false, true);
     ids.addVar(var);
}
#line 1352 "lang.tab.c"
    break;

  case 6: /* field_variables: %empty  */
#line 60 "lang.y"
                           {}
#line 1358 "lang.tab.c"
    break;

  case 7: /* field_variables: field_variables variable_declaration  */
#line 61 "lang.y"
                                                      { }
#line 1364 "lang.tab.c"
    break;

  case 8: /* field_functions: %empty  */
#line 64 "lang.y"
                           { }
#line 1370 "lang.tab.c"
    break;

  case 9: /* field_functions: field_functions function_declaration  */
#line 65 "lang.y"
                                                      { }
#line 1376 "lang.tab.c"
    break;

  case 10: /* function_declaration: FNENTRY TYPE ID '(' parameter_list ')' '{' block '}'  */
#line 68 "lang.y"
                                                                           {
     Value val("function");
     Variable var((yyvsp[-6].string), val, true, false);
     ids.addVar(var);
}
#line 1386 "lang.tab.c"
    break;

  case 15: /* parameter_list: %empty  */
#line 83 "lang.y"
                 {}
#line 1392 "lang.tab.c"
    break;

  case 16: /* parameter_list: parameter  */
#line 84 "lang.y"
                           { }
#line 1398 "lang.tab.c"
    break;

  case 17: /* parameter_list: parameter_list ',' parameter  */
#line 85 "lang.y"
                                               { }
#line 1404 "lang.tab.c"
    break;

  case 18: /* parameter: TYPE ID  */
#line 89 "lang.y"
                    { }
#line 1410 "lang.tab.c"
    break;

  case 19: /* variable_declaration: TYPE ID ';'  */
#line 91 "lang.y"
                                  {
                         Value val((yyvsp[-2].string));
                         Variable var((yyvsp[-1].string), val);
                         ids.addVar(var);
                    }
#line 1420 "lang.tab.c"
    break;

  case 20: /* variable_declaration: TYPE ID '=' expression ';'  */
#line 96 "lang.y"
                                                 {
                         Value val((yyvsp[-4].string));
                         Variable var((yyvsp[-3].string), val);
                         ids.addVar(var);
                    }
#line 1430 "lang.tab.c"
    break;

  case 21: /* variable_declaration: CONST TYPE ID '=' expression ';'  */
#line 101 "lang.y"
                                                        { }
#line 1436 "lang.tab.c"
    break;

  case 44: /* statement: assignment_statement  */
#line 143 "lang.y"
                                { /* handle assignment statement */ }
#line 1442 "lang.tab.c"
    break;

  case 45: /* statement: control_statement  */
#line 144 "lang.y"
                             { /* handle control statement */ }
#line 1448 "lang.tab.c"
    break;

  case 46: /* statement: fn_call ';'  */
#line 145 "lang.y"
                       { /* handle function call */ }
#line 1454 "lang.tab.c"
    break;

  case 48: /* assignment_statement: ID '=' expression ';'  */
#line 149 "lang.y"
                                            {}
#line 1460 "lang.tab.c"
    break;

  case 66: /* arithm_expr: arithm_expr '+' arithm_expr  */
#line 183 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "+", (yyvsp[0].ASTNode)); 
               else 
                   printf("Different types.");
           }
#line 1471 "lang.tab.c"
    break;

  case 67: /* arithm_expr: arithm_expr '-' arithm_expr  */
#line 189 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "-", (yyvsp[0].ASTNode)); 
               else 
                   printf("Different types.");
           }
#line 1482 "lang.tab.c"
    break;

  case 68: /* arithm_expr: arithm_expr '/' arithm_expr  */
#line 195 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "/", (yyvsp[0].ASTNode)); 
               else 
                   printf("Different types.");
           }
#line 1493 "lang.tab.c"
    break;

  case 69: /* arithm_expr: arithm_expr '*' arithm_expr  */
#line 201 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "*", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.");
           }
#line 1504 "lang.tab.c"
    break;

  case 70: /* arithm_expr: arithm_expr '%' arithm_expr  */
#line 207 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "%", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.");
           }
#line 1515 "lang.tab.c"
    break;

  case 71: /* arithm_expr: '(' arithm_expr ')'  */
#line 213 "lang.y"
                                 {}
#line 1521 "lang.tab.c"
    break;

  case 72: /* arithm_expr: INT  */
#line 214 "lang.y"
                 {
               char* identifierText = strdup(yytext);
               (yyval.ASTNode) = new AST(new Value(identifierText, "int")); 
           }
#line 1530 "lang.tab.c"
    break;

  case 73: /* arithm_expr: FLOAT  */
#line 218 "lang.y"
                   {
               char* identifierText = strdup(yytext);
               (yyval.ASTNode) = new AST(new Value(identifierText, "float")); 
           }
#line 1539 "lang.tab.c"
    break;

  case 74: /* arithm_expr: fn_call  */
#line 222 "lang.y"
                     { }
#line 1545 "lang.tab.c"
    break;

  case 75: /* arithm_expr: ID  */
#line 223 "lang.y"
                {

           }
#line 1553 "lang.tab.c"
    break;

  case 76: /* arithm_expr: ID '.' ID  */
#line 226 "lang.y"
                       { }
#line 1559 "lang.tab.c"
    break;

  case 77: /* arithm_expr: ID '.' fn_call  */
#line 227 "lang.y"
                            {}
#line 1565 "lang.tab.c"
    break;

  case 78: /* arithm_expr: ID '[' ID ']'  */
#line 228 "lang.y"
                           {}
#line 1571 "lang.tab.c"
    break;

  case 79: /* arithm_expr: ID '[' INT ']'  */
#line 229 "lang.y"
                            {}
#line 1577 "lang.tab.c"
    break;

  case 80: /* arithm_expr: ID '[' fn_call ']'  */
#line 230 "lang.y"
                                {}
#line 1583 "lang.tab.c"
    break;

  case 81: /* bool_expr: bool_expr AND bool_expr  */
#line 234 "lang.y"
                                   {
               (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "and", (yyvsp[0].ASTNode)); 
         }
#line 1591 "lang.tab.c"
    break;

  case 82: /* bool_expr: bool_expr OR bool_expr  */
#line 237 "lang.y"
                                  {
               (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "or", (yyvsp[0].ASTNode)); 
           }
#line 1599 "lang.tab.c"
    break;

  case 83: /* bool_expr: NOT bool_expr  */
#line 240 "lang.y"
                         {
               (yyval.ASTNode) = new AST((yyvsp[0].ASTNode), "not", NULL); 
         }
#line 1607 "lang.tab.c"
    break;

  case 84: /* bool_expr: '(' bool_expr ')'  */
#line 243 "lang.y"
                             {}
#line 1613 "lang.tab.c"
    break;

  case 85: /* bool_expr: BOOL  */
#line 244 "lang.y"
                {}
#line 1619 "lang.tab.c"
    break;

  case 86: /* bool_expr: arithm_expr GT arithm_expr  */
#line 245 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "gt", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.");
           }
#line 1630 "lang.tab.c"
    break;

  case 87: /* bool_expr: arithm_expr LT arithm_expr  */
#line 251 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "lt", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.");
           }
#line 1641 "lang.tab.c"
    break;

  case 88: /* bool_expr: arithm_expr GEQ arithm_expr  */
#line 257 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "geq", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.");
           }
#line 1652 "lang.tab.c"
    break;

  case 89: /* bool_expr: arithm_expr LEQ arithm_expr  */
#line 263 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "leq", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.");
           }
#line 1663 "lang.tab.c"
    break;

  case 90: /* bool_expr: arithm_expr EQ arithm_expr  */
#line 269 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "eq", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.");
           }
#line 1674 "lang.tab.c"
    break;

  case 91: /* bool_expr: arithm_expr NEQ arithm_expr  */
#line 275 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->type == (yyvsp[0].ASTNode)->type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "neq", (yyvsp[0].ASTNode)); 
               else 
                    printf("Different types.");
           }
#line 1685 "lang.tab.c"
    break;

  case 92: /* fn_call: ID '(' argument_list ')'  */
#line 284 "lang.y"
                                  { /* handle function call */ }
#line 1691 "lang.tab.c"
    break;


#line 1695 "lang.tab.c"

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

#line 293 "lang.y"

void yyerror(const char * s) {
    std::cerr << "error: " << s << " at line:" << yylineno << std::endl;
}

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");
    yyparse();

     ids.printVars();

    return 0;
}
