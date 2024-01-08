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
  YYSYMBOL_57_ = 57,                       /* '.'  */
  YYSYMBOL_58_ = 58,                       /* ':'  */
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
  YYSYMBOL_field_constructors = 69,        /* field_constructors  */
  YYSYMBOL_constructor_declaration = 70,   /* constructor_declaration  */
  YYSYMBOL_71_4 = 71,                      /* $@4  */
  YYSYMBOL_constructor_block = 72,         /* constructor_block  */
  YYSYMBOL_global_variables = 73,          /* global_variables  */
  YYSYMBOL_global_functions = 74,          /* global_functions  */
  YYSYMBOL_parameter_list = 75,            /* parameter_list  */
  YYSYMBOL_parameter = 76,                 /* parameter  */
  YYSYMBOL_variable_declaration = 77,      /* variable_declaration  */
  YYSYMBOL_class_var_declaration = 78,     /* class_var_declaration  */
  YYSYMBOL_array_declaration = 79,         /* array_declaration  */
  YYSYMBOL_int_values = 80,                /* int_values  */
  YYSYMBOL_float_values = 81,              /* float_values  */
  YYSYMBOL_bool_values = 82,               /* bool_values  */
  YYSYMBOL_char_values = 83,               /* char_values  */
  YYSYMBOL_block = 84,                     /* block  */
  YYSYMBOL_statement = 85,                 /* statement  */
  YYSYMBOL_assignment_statement = 86,      /* assignment_statement  */
  YYSYMBOL_control_statement = 87,         /* control_statement  */
  YYSYMBOL_if_statement = 88,              /* if_statement  */
  YYSYMBOL_case_block = 89,                /* case_block  */
  YYSYMBOL_value = 90,                     /* value  */
  YYSYMBOL_expression = 91,                /* expression  */
  YYSYMBOL_arithm_expr = 92,               /* arithm_expr  */
  YYSYMBOL_bool_expr = 93,                 /* bool_expr  */
  YYSYMBOL_fn_call = 94,                   /* fn_call  */
  YYSYMBOL_argument_list = 95              /* argument_list  */
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
#define YYLAST   552

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  310

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
      51,    52,    45,    43,    53,    44,    57,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    50,
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
      83,    86,    87,    90,    90,   116,   117,   120,   120,   137,
     138,   141,   142,   143,   144,   147,   148,   151,   152,   153,
     157,   167,   182,   205,   234,   262,   298,   322,   360,   391,
     426,   454,   494,   515,   545,   574,   603,   637,   638,   641,
     642,   645,   646,   649,   650,   653,   654,   657,   658,   659,
     660,   661,   662,   663,   678,   691,   704,   707,   726,   755,
     777,   797,   817,   841,   863,   889,   920,   942,   966,   967,
     968,   969,   970,   971,   975,   976,   980,   981,   984,   985,
     986,   987,   988,   992,   993,   998,  1008,  1016,  1024,  1032,
    1041,  1044,  1047,  1051,  1055,  1060,  1076,  1103,  1129,  1148,
    1163,  1181,  1184,  1187,  1190,  1193,  1197,  1205,  1213,  1221,
    1230,  1238,  1249,  1299,  1300,  1301
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
  "']'", "'.'", "':'", "$accept", "program", "$@1", "user_defined_types",
  "user_defined_type", "$@2", "field_variables", "field_functions",
  "function_declaration", "$@3", "field_constructors",
  "constructor_declaration", "$@4", "constructor_block",
  "global_variables", "global_functions", "parameter_list", "parameter",
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

#define YYPACT_NINF (-143)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,    55,    76,  -143,  -143,     6,    85,  -143,  -143,  -143,
       9,    92,   142,   143,  -143,   166,  -143,  -143,  -143,   206,
     182,   217,    -1,    88,  -143,   113,   158,  -143,   212,  -143,
    -143,    48,   -18,    91,  -143,   219,  -143,   350,   211,   228,
     437,    77,   220,  -143,   232,  -143,  -143,   496,   437,   234,
     149,   262,  -143,   216,   239,  -143,  -143,  -143,   249,   254,
     259,   263,   508,  -143,   149,  -143,   437,   106,   281,  -143,
    -143,   496,   109,    63,    -6,  -143,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   437,   437,   270,
     271,    59,  -143,  -143,  -143,  -143,   437,   437,   276,   365,
     380,   156,   277,   278,  -143,  -143,  -143,   117,  -143,  -143,
    -143,  -143,   272,   280,  -143,    49,   133,   286,   289,   295,
    -143,   465,  -143,  -143,   505,   505,   505,   505,   505,   505,
     109,   109,  -143,  -143,  -143,  -143,   324,  -143,   186,  -143,
    -143,    -4,    65,   314,   303,   304,   310,   316,   317,   319,
     395,   165,   327,   437,   437,   341,  -143,  -143,     7,  -143,
     437,  -143,  -143,  -143,  -143,  -143,  -143,  -143,   -22,    37,
     198,   213,    47,   508,   508,   177,   325,   360,   360,   360,
    -143,  -143,  -143,   332,   334,   335,   340,   344,   339,   345,
     347,  -143,   373,   375,   236,  -143,  -143,   374,   361,   382,
     364,   385,   377,   376,   379,  -143,   387,  -143,   222,   229,
     437,   132,    70,   147,   161,  -143,  -143,  -143,   369,   384,
     410,   391,   392,   397,  -143,   396,     7,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,   394,  -143,   436,  -143,    12,
     295,  -143,  -143,  -143,  -143,   398,  -143,   132,   399,   401,
     402,   -11,   425,   405,   412,   417,  -143,  -143,  -143,   508,
    -143,     7,    66,   314,   508,   413,   508,   508,   508,   418,
     424,   429,   430,  -143,  -143,  -143,   261,   238,   508,  -143,
     431,   466,   508,   267,   299,   305,  -143,  -143,  -143,  -143,
    -143,   439,   337,   441,   440,   487,  -143,  -143,  -143,   508,
    -143,   508,  -143,   445,   442,   508,   343,  -143,  -143,  -143
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     4,     1,     0,     0,    21,     5,     6,
       0,     0,     0,     0,    25,     0,    22,    24,    23,     0,
       0,     0,     0,     0,     8,     0,     0,     2,     0,    26,
      32,     0,     0,     0,    40,     0,    36,     0,     0,     0,
       0,   105,     0,   102,     0,   103,   115,     0,     0,     0,
      93,    94,   104,     0,     0,    11,     9,    10,     0,     0,
       0,     0,     0,    13,     0,   113,   123,     0,     0,    34,
      33,     0,   100,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,    39,    38,    37,     0,     0,     0,     0,
       0,     0,     0,     0,    57,    59,    58,     0,    55,    60,
      61,    78,     0,     0,   124,     0,     0,     0,     0,   106,
     107,     0,   101,   114,   121,   116,   118,   117,   119,   120,
      95,    96,    98,    97,    99,   111,   112,    42,     0,    15,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    62,    27,   122,
       0,   108,   109,   110,    48,    54,    50,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     0,     0,    28,   125,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,    16,     0,     0,
       0,     0,     0,     0,     0,    70,    69,    68,     0,     0,
       0,     0,     0,     0,    30,     0,     0,    47,    43,    49,
      44,    51,    46,    53,    45,     0,     7,     0,    82,     0,
       0,    92,    88,    89,    90,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,    66,    31,     0,
      29,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,    76,    75,     0,     0,     0,    85,
       0,     0,     0,     0,     0,     0,    74,    73,    72,    71,
      14,     0,     0,     0,     0,     0,    80,    81,    79,    20,
      84,     0,    86,     0,     0,    19,     0,    87,    18,    83
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,   407,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,   235,   290,    67,   494,
      84,  -143,  -143,  -143,  -143,  -137,  -105,  -142,  -143,   257,
     129,   283,   -34,   -29,   -27,   -62,  -143
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    38,     5,     8,    11,    33,    91,    29,   113,
     172,   207,   235,   304,    10,    22,   194,   195,   104,   105,
     106,   168,   169,   170,   171,   107,   108,   109,   110,   111,
     212,   245,    49,    50,    51,    52,   115
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     112,   176,   156,    61,    40,   118,   120,    87,    88,    87,
      88,    64,     6,    65,   192,    12,    13,     1,    72,    73,
      53,    74,    41,    27,    28,    87,    88,    43,   269,    45,
      46,   197,   114,    47,   198,     7,   208,   209,    54,    14,
      48,   193,   121,    15,   173,   112,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    64,    64,
     135,   136,   263,    40,   139,   146,   149,    64,    64,   141,
     142,    76,    77,    78,    79,    80,     4,    16,    87,    88,
     205,    41,    96,     3,    28,    42,    43,    44,    45,    46,
     199,   247,    47,   200,    18,    55,   206,   248,    13,    48,
      56,   159,   160,   156,   156,    81,    82,    83,    84,    85,
      86,   112,   112,   174,   278,   122,   185,    57,     9,   189,
     190,   280,   276,    12,    13,    15,   196,   281,    66,   283,
     284,   285,    67,    96,    68,    97,    98,    99,    30,   116,
      19,   292,    31,    32,   117,   295,   112,   112,   100,   246,
     101,    15,   102,   103,    84,    85,    86,    76,    77,    78,
      79,    80,   305,    34,   306,   240,   155,    35,   247,   241,
     242,   156,   243,   244,   249,    20,   156,    21,   156,   156,
     156,    64,   247,   239,    66,   246,   255,   156,   250,   161,
     156,    81,    82,    83,    84,    85,    86,   112,   186,    23,
     156,   156,   112,   187,   112,   112,   112,    66,    36,    24,
     150,   151,    37,   152,   112,    25,   112,   270,   272,   112,
     112,   112,   112,   112,   164,   165,   166,   167,    12,    13,
     112,   150,   151,   112,   152,    12,    13,   112,    96,   112,
      97,    98,    99,   112,   112,    96,    39,    97,    98,    99,
      26,   201,    58,   100,   202,   101,    15,   102,   103,    62,
     100,    63,   101,    15,   102,   103,   203,    12,    13,   204,
      69,   237,    89,    12,    13,    87,    88,    96,   238,    97,
      98,    99,    70,    96,    75,    97,    98,    99,   225,   226,
     291,   226,   100,    90,   101,    15,   102,   103,   100,    92,
     101,    15,   102,   103,    93,    12,    13,   213,   214,    94,
     290,    12,    13,    95,   119,    96,   296,    97,    98,    99,
     137,    96,   157,    97,    98,    99,   138,   143,   153,   154,
     100,   158,   101,    15,   102,   103,   100,    87,   101,    15,
     102,   103,   162,    12,    13,   163,    66,   175,   297,    12,
      13,   177,   178,    96,   298,    97,    98,    99,   179,    96,
     188,    97,    98,    99,   191,    40,   180,   181,   100,   182,
     101,    15,   102,   103,   100,   210,   101,    15,   102,   103,
      40,   211,   215,    41,   216,   217,   300,    59,    43,    60,
      45,    46,   309,   220,    47,    40,   218,   221,    41,   222,
     219,    48,   144,    43,   145,    45,    46,   223,   224,    47,
      40,   228,   227,    41,   230,   233,    48,   147,    43,   148,
      45,    46,   229,   251,    47,    40,   231,   232,    41,   234,
     258,    48,   183,    43,   184,    45,    46,   236,   252,    47,
      40,   256,   257,    41,   259,   261,    48,   253,    43,   254,
      45,    46,    40,   262,    47,   273,   264,   266,    41,   267,
     268,    48,   274,    43,   271,    45,    46,   275,   286,    47,
      41,   282,    12,    13,   287,    43,    48,    45,    46,   288,
     289,    47,    96,   293,    97,    98,    99,   299,    48,   301,
     302,   308,   294,    12,    13,   307,   277,   100,   140,   101,
      15,   102,   103,    96,    17,    97,    98,    99,    82,    83,
      84,    85,    86,   303,    12,    13,   260,   122,   100,   279,
     101,    15,   102,   103,    96,     0,    97,    98,    99,    41,
     265,     0,     0,     0,    43,     0,    45,     0,     0,   100,
      47,   101,    15,   102,   103,     0,     0,    71,    82,    83,
      84,    85,    86
};

static const yytype_int16 yycheck[] =
{
      62,   143,   107,    37,    15,    67,    68,    13,    14,    13,
      14,    40,     6,    40,     7,     6,     7,    22,    47,    48,
      38,    48,    33,    24,    25,    13,    14,    38,    39,    40,
      41,    53,    66,    44,    56,    29,   173,   174,    56,    30,
      51,    34,    71,    34,    48,   107,    52,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      87,    88,    50,    15,     5,    99,   100,    96,    97,    96,
      97,     8,     9,    10,    11,    12,     0,    10,    13,    14,
      33,    33,    16,    28,    25,    37,    38,    39,    40,    41,
      53,    21,    44,    56,    10,     4,    49,    27,     7,    51,
      33,    52,    53,   208,   209,    42,    43,    44,    45,    46,
      47,   173,   174,    48,    48,    52,   150,    33,    33,   153,
     154,   263,   259,     6,     7,    34,   160,   264,    51,   266,
     267,   268,    55,    16,    57,    18,    19,    20,    50,    33,
      48,   278,    54,    55,    38,   282,   208,   209,    31,   211,
      33,    34,    35,    36,    45,    46,    47,     8,     9,    10,
      11,    12,   299,    50,   301,    33,    49,    54,    21,    37,
      38,   276,    40,    41,    27,    33,   281,    34,   283,   284,
     285,   210,    21,   210,    51,   247,   220,   292,    27,    56,
     295,    42,    43,    44,    45,    46,    47,   259,    33,    33,
     305,   306,   264,    38,   266,   267,   268,    51,    50,     3,
      54,    55,    54,    57,   276,    33,   278,   251,   252,   281,
     282,   283,   284,   285,    38,    39,    40,    41,     6,     7,
     292,    54,    55,   295,    57,     6,     7,   299,    16,   301,
      18,    19,    20,   305,   306,    16,    34,    18,    19,    20,
      33,    53,    33,    31,    56,    33,    34,    35,    36,    48,
      31,    33,    33,    34,    35,    36,    53,     6,     7,    56,
      50,    49,    56,     6,     7,    13,    14,    16,    49,    18,
      19,    20,    50,    16,    50,    18,    19,    20,    52,    53,
      52,    53,    31,    54,    33,    34,    35,    36,    31,    50,
      33,    34,    35,    36,    50,     6,     7,   178,   179,    50,
      49,     6,     7,    50,    33,    16,    49,    18,    19,    20,
      50,    16,    50,    18,    19,    20,    55,    51,    51,    51,
      31,    51,    33,    34,    35,    36,    31,    13,    33,    34,
      35,    36,    56,     6,     7,    56,    51,    33,    49,     6,
       7,    48,    48,    16,    49,    18,    19,    20,    48,    16,
      33,    18,    19,    20,    23,    15,    50,    50,    31,    50,
      33,    34,    35,    36,    31,    50,    33,    34,    35,    36,
      15,    21,    50,    33,    50,    50,    49,    37,    38,    39,
      40,    41,    49,    54,    44,    15,    56,    52,    33,    52,
      56,    51,    37,    38,    39,    40,    41,    34,    33,    44,
      15,    50,    38,    33,    50,    39,    51,    37,    38,    39,
      40,    41,    40,    54,    44,    15,    41,    50,    33,    50,
      33,    51,    37,    38,    39,    40,    41,    50,    54,    44,
      15,    50,    50,    33,    48,    51,    51,    37,    38,    39,
      40,    41,    15,    17,    44,    50,    58,    58,    33,    58,
      58,    51,    50,    38,    39,    40,    41,    50,    50,    44,
      33,    58,     6,     7,    50,    38,    51,    40,    41,    50,
      50,    44,    16,    52,    18,    19,    20,    48,    51,    48,
      50,    49,    26,     6,     7,    50,   261,    31,    91,    33,
      34,    35,    36,    16,    10,    18,    19,    20,    43,    44,
      45,    46,    47,    26,     6,     7,   226,    52,    31,   262,
      33,    34,    35,    36,    16,    -1,    18,    19,    20,    33,
     247,    -1,    -1,    -1,    38,    -1,    40,    -1,    -1,    31,
      44,    33,    34,    35,    36,    -1,    -1,    51,    43,    44,
      45,    46,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    22,    60,    28,     0,    62,     6,    29,    63,    33,
      73,    64,     6,     7,    30,    34,    77,    78,    79,    48,
      33,    34,    74,    33,     3,    33,    33,    24,    25,    67,
      50,    54,    55,    65,    50,    54,    50,    54,    61,    34,
      15,    33,    37,    38,    39,    40,    41,    44,    51,    91,
      92,    93,    94,    38,    56,     4,    77,    79,    33,    37,
      39,    91,    48,    33,    92,    93,    51,    55,    57,    50,
      50,    51,    92,    92,    93,    50,     8,     9,    10,    11,
      12,    42,    43,    44,    45,    46,    47,    13,    14,    56,
      54,    66,    50,    50,    50,    50,    16,    18,    19,    20,
      31,    33,    35,    36,    77,    78,    79,    84,    85,    86,
      87,    88,    94,    68,    91,    95,    33,    38,    94,    33,
      94,    92,    52,    52,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    93,    93,    50,    55,     5,
      67,    93,    93,    51,    37,    39,    91,    37,    39,    91,
      54,    55,    57,    51,    51,    49,    85,    50,    51,    52,
      53,    56,    56,    56,    38,    39,    40,    41,    80,    81,
      82,    83,    69,    48,    48,    33,    86,    48,    48,    48,
      50,    50,    50,    37,    39,    91,    33,    38,    33,    91,
      91,    23,     7,    34,    75,    76,    91,    53,    56,    53,
      56,    53,    56,    53,    56,    33,    49,    70,    84,    84,
      50,    21,    89,    89,    89,    50,    50,    50,    56,    56,
      54,    52,    52,    34,    33,    52,    53,    38,    50,    40,
      50,    41,    50,    39,    50,    71,    50,    49,    49,    93,
      33,    37,    38,    40,    41,    90,    94,    21,    27,    27,
      27,    54,    54,    37,    39,    91,    50,    50,    33,    48,
      76,    51,    17,    50,    58,    90,    58,    58,    58,    39,
      91,    39,    91,    50,    50,    50,    84,    75,    48,    88,
      86,    84,    58,    84,    84,    84,    50,    50,    50,    50,
      49,    52,    84,    52,    26,    84,    49,    49,    49,    48,
      49,    48,    50,    26,    72,    84,    84,    50,    49,    49
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    61,    60,    62,    62,    64,    63,    65,    65,
      65,    66,    66,    68,    67,    69,    69,    71,    70,    72,
      72,    73,    73,    73,    73,    74,    74,    75,    75,    75,
      76,    76,    77,    77,    77,    77,    77,    77,    77,    77,
      78,    78,    79,    79,    79,    79,    79,    80,    80,    81,
      81,    82,    82,    83,    83,    84,    84,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    87,    87,
      87,    87,    87,    87,    88,    88,    89,    89,    90,    90,
      90,    90,    90,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    94,    95,    95,    95
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,    13,     0,     2,     0,    12,     0,     2,
       2,     0,     2,     0,    10,     0,     2,     0,     8,     1,
       0,     0,     2,     2,     2,     0,     2,     0,     1,     3,
       2,     3,     3,     5,     5,     5,     4,     6,     6,     6,
       4,     6,     6,     9,     9,     9,     9,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     2,     3,     3,     3,     5,     5,     4,     4,
       4,     7,     7,     7,     7,     6,     6,     6,     1,     8,
       8,     8,     5,    11,     9,     7,     6,     7,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       2,     3,     1,     1,     1,     1,     3,     3,     4,     4,
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
  case 2: /* $@1: %empty  */
#line 66 "lang.y"
                                                                                                     { scope = "main"; }
#line 1427 "lang.tab.c"
    break;

  case 3: /* program: ENTRY USRDEF user_defined_types GLOBALVAR global_variables GLOBALFUNC global_functions MAIN $@1 '{' block '}' EXIT  */
#line 66 "lang.y"
                                                                                                                                            {printf("Program is correct!\n");}
#line 1433 "lang.tab.c"
    break;

  case 6: /* $@2: %empty  */
#line 73 "lang.y"
                            { if(ids.existsClass((yyvsp[0].string))) {printf("Error at line %d: the class \"%s\" is already defined.\n", yylineno, (yyvsp[0].string)); return 1;} scope = (yyvsp[0].string); 
                        UserDefinedType type((yyvsp[0].string));
                        ids.addUsrDef(type);}
#line 1441 "lang.tab.c"
    break;

  case 7: /* user_defined_type: CLASS ID $@2 '{' VARS field_variables FUNCS field_functions CONSTRUCTS field_constructors '}' ';'  */
#line 76 "lang.y"
                                                                                                            {
                        scope = "global";
}
#line 1449 "lang.tab.c"
    break;

  case 8: /* field_variables: %empty  */
#line 81 "lang.y"
                           {}
#line 1455 "lang.tab.c"
    break;

  case 9: /* field_variables: field_variables variable_declaration  */
#line 82 "lang.y"
                                                      {  }
#line 1461 "lang.tab.c"
    break;

  case 10: /* field_variables: field_variables array_declaration  */
#line 83 "lang.y"
                                                   { }
#line 1467 "lang.tab.c"
    break;

  case 11: /* field_functions: %empty  */
#line 86 "lang.y"
                           { }
#line 1473 "lang.tab.c"
    break;

  case 12: /* field_functions: field_functions function_declaration  */
#line 87 "lang.y"
                                                      { }
#line 1479 "lang.tab.c"
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
                                            Function func((yyvsp[0].string), (yyvsp[-1].string), altscope); 
                                            ids.addFunc(func); 
                                            scope = (yyvsp[0].string); 
                                        }
#line 1502 "lang.tab.c"
    break;

  case 14: /* function_declaration: FNENTRY TYPE ID $@3 '(' parameter_list ')' '{' block '}'  */
#line 108 "lang.y"
                                                             {
                                            Function &func = ids.getFunc(scope.c_str());
                                            func.params = globalParams;
                                            globalParams.clear();  
                                            scope = altscope;
                        }
#line 1513 "lang.tab.c"
    break;

  case 15: /* field_constructors: %empty  */
#line 116 "lang.y"
                    { }
#line 1519 "lang.tab.c"
    break;

  case 16: /* field_constructors: field_constructors constructor_declaration  */
#line 117 "lang.y"
                                                               { }
#line 1525 "lang.tab.c"
    break;

  case 17: /* $@4: %empty  */
#line 120 "lang.y"
                            {               if (strcmp((yyvsp[0].string), scope.c_str())!= 0)
                                            {
                                                printf("Error at line %d: the constructor should have the same name as the class\n", yylineno);
                                                return 1;
                                            }
                                            altscope = scope;
                                            Function func((yyvsp[0].string), "none (CONSTRUCTOR)", altscope); 
                                            ids.addFunc(func); 
                                            scope = (yyvsp[0].string); 
                            }
#line 1540 "lang.tab.c"
    break;

  case 18: /* constructor_declaration: ID $@4 '(' parameter_list ')' '{' constructor_block '}'  */
#line 130 "lang.y"
                                                                             { 
                                Function &func = ids.getFunc(scope.c_str());
                                func.params = globalParams;
                                globalParams.clear();
                                scope = altscope; }
#line 1550 "lang.tab.c"
    break;

  case 20: /* constructor_block: %empty  */
#line 138 "lang.y"
                    {}
#line 1556 "lang.tab.c"
    break;

  case 27: /* parameter_list: %empty  */
#line 151 "lang.y"
                 {}
#line 1562 "lang.tab.c"
    break;

  case 28: /* parameter_list: parameter  */
#line 152 "lang.y"
                           { }
#line 1568 "lang.tab.c"
    break;

  case 29: /* parameter_list: parameter_list ',' parameter  */
#line 153 "lang.y"
                                               { }
#line 1574 "lang.tab.c"
    break;

  case 30: /* parameter: TYPE ID  */
#line 157 "lang.y"
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
#line 1589 "lang.tab.c"
    break;

  case 31: /* parameter: CONST TYPE ID  */
#line 167 "lang.y"
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
#line 1607 "lang.tab.c"
    break;

  case 32: /* variable_declaration: TYPE ID ';'  */
#line 182 "lang.y"
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
#line 1635 "lang.tab.c"
    break;

  case 33: /* variable_declaration: TYPE ID '=' CHAR ';'  */
#line 205 "lang.y"
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
#line 1669 "lang.tab.c"
    break;

  case 34: /* variable_declaration: TYPE ID '=' STRING ';'  */
#line 234 "lang.y"
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
#line 1702 "lang.tab.c"
    break;

  case 35: /* variable_declaration: TYPE ID '=' expression ';'  */
#line 262 "lang.y"
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
#line 1743 "lang.tab.c"
    break;

  case 36: /* variable_declaration: CONST TYPE ID ';'  */
#line 298 "lang.y"
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
#line 1772 "lang.tab.c"
    break;

  case 37: /* variable_declaration: CONST TYPE ID '=' expression ';'  */
#line 322 "lang.y"
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
#line 1815 "lang.tab.c"
    break;

  case 38: /* variable_declaration: CONST TYPE ID '=' CHAR ';'  */
#line 360 "lang.y"
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
#line 1851 "lang.tab.c"
    break;

  case 39: /* variable_declaration: CONST TYPE ID '=' STRING ';'  */
#line 391 "lang.y"
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
#line 1887 "lang.tab.c"
    break;

  case 40: /* class_var_declaration: CLASS ID ID ';'  */
#line 426 "lang.y"
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
#line 1920 "lang.tab.c"
    break;

  case 41: /* class_var_declaration: CLASS ID ID '=' ID ';'  */
#line 454 "lang.y"
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
#line 1963 "lang.tab.c"
    break;

  case 42: /* array_declaration: TYPE ID '[' INT ']' ';'  */
#line 494 "lang.y"
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
#line 1989 "lang.tab.c"
    break;

  case 43: /* array_declaration: TYPE ID '[' ']' '=' '[' int_values ']' ';'  */
#line 515 "lang.y"
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
#line 2024 "lang.tab.c"
    break;

  case 44: /* array_declaration: TYPE ID '[' ']' '=' '[' float_values ']' ';'  */
#line 545 "lang.y"
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
#line 2058 "lang.tab.c"
    break;

  case 45: /* array_declaration: TYPE ID '[' ']' '=' '[' char_values ']' ';'  */
#line 574 "lang.y"
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
#line 2092 "lang.tab.c"
    break;

  case 46: /* array_declaration: TYPE ID '[' ']' '=' '[' bool_values ']' ';'  */
#line 603 "lang.y"
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
#line 2129 "lang.tab.c"
    break;

  case 47: /* int_values: int_values ',' INT  */
#line 637 "lang.y"
                               {intVals.push_back((yyvsp[0].integer));}
#line 2135 "lang.tab.c"
    break;

  case 48: /* int_values: INT  */
#line 638 "lang.y"
                {intVals.push_back((yyvsp[0].integer));}
#line 2141 "lang.tab.c"
    break;

  case 49: /* float_values: float_values ',' FLOAT  */
#line 641 "lang.y"
                                     {floatVals.push_back((yyvsp[0].floatnum));}
#line 2147 "lang.tab.c"
    break;

  case 50: /* float_values: FLOAT  */
#line 642 "lang.y"
                    {floatVals.push_back((yyvsp[0].floatnum));}
#line 2153 "lang.tab.c"
    break;

  case 51: /* bool_values: bool_values ',' BOOL  */
#line 645 "lang.y"
                                  {boolVals.push_back((yyvsp[0].boolean));}
#line 2159 "lang.tab.c"
    break;

  case 52: /* bool_values: BOOL  */
#line 646 "lang.y"
                  {boolVals.push_back((yyvsp[0].boolean));}
#line 2165 "lang.tab.c"
    break;

  case 53: /* char_values: char_values ',' CHAR  */
#line 649 "lang.y"
                                  {charVals.push_back((yyvsp[0].character));}
#line 2171 "lang.tab.c"
    break;

  case 54: /* char_values: CHAR  */
#line 650 "lang.y"
                  {charVals.push_back((yyvsp[0].character));}
#line 2177 "lang.tab.c"
    break;

  case 63: /* statement: RETURN expression ';'  */
#line 663 "lang.y"
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
#line 2197 "lang.tab.c"
    break;

  case 64: /* statement: RETURN STRING ';'  */
#line 678 "lang.y"
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
#line 2215 "lang.tab.c"
    break;

  case 65: /* statement: RETURN CHAR ';'  */
#line 691 "lang.y"
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
#line 2233 "lang.tab.c"
    break;

  case 66: /* statement: TYPEOF '(' expression ')' ';'  */
#line 704 "lang.y"
                                         {
            printf("[Line : %d]Type of expression is %s.\n",yylineno, (yyvsp[-2].ASTNode)->Eval().type.c_str());
         }
#line 2241 "lang.tab.c"
    break;

  case 67: /* statement: EVAL '(' expression ')' ';'  */
#line 707 "lang.y"
                                       {
            Value result = (yyvsp[-2].ASTNode)->Eval();
            if( result.type == "int" ) {
                printf("[Line : %d]Value of expression is %d.\n",yylineno, result.intVal);
            } else if( result.type == "float" ) {
                printf("[Line : %d]Value of expression is %f.\n",yylineno, result.floatVal);
            } else if( result.type == "char" ) {
                printf("[Line : %d]Value of expression is %c.\n",yylineno, result.intVal);
            } else if( result.type == "bool" ) {
                    if( result.boolVal ){
                        printf("[Line : %d]Value of expression is true.\n",yylineno);
                    } else {
                        printf("[Line : %d]Value of expression is false.\n",yylineno);
                    }
                
            }
         }
#line 2263 "lang.tab.c"
    break;

  case 68: /* assignment_statement: ID '=' expression ';'  */
#line 726 "lang.y"
                                            {
                        if( ids.exists((yyvsp[-3].string)) ) {
                            Value result = (yyvsp[-1].ASTNode)->Eval();
                            Variable& var = ids.getVar((yyvsp[-3].string));
                            if (var.scope == scope || var.scope == "global" || (ids.exists(scope.c_str()) && var.scope == ids.getFunc(scope.c_str()).scope) ) {
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
                                printf("Error at line %d: Different types.\n", yylineno);
                                return 1;
                            } 
                            } else {
                                printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                                return 1;
                            }                   
                        } else {
                            printf("Error at line %d: Variable not found.1", yylineno);
                            return 1;
                        }
                    }
#line 2297 "lang.tab.c"
    break;

  case 69: /* assignment_statement: ID '=' CHAR ';'  */
#line 755 "lang.y"
                                      {
                        if( ids.exists((yyvsp[-3].string)) ) {

                            Variable& var = ids.getVar((yyvsp[-3].string));
                            if (var.scope == scope || var.scope == "global" || (ids.exists(scope.c_str()) && var.scope == ids.getFunc(scope.c_str()).scope) ) {
                                if (var.val.type == "char"){
                                    var.val.isCharSet = true;
                                    var.val.charVal = (yyvsp[-1].character);  
                                } else {
                                    printf("Error at line %d: Different types.7", yylineno);
                                    return 1;
                                }  
                            } else {
                                printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                                return 1;
                            } 

                        } else {
                            printf("Error at line %d: Variable not found.2",yylineno);
                            return 1;
                        }
                    }
#line 2324 "lang.tab.c"
    break;

  case 70: /* assignment_statement: ID '=' STRING ';'  */
#line 777 "lang.y"
                                        {
                        if( ids.exists((yyvsp[-3].string)) ) {
                            Variable& var = ids.getVar((yyvsp[-3].string));
                            if (var.scope == scope || var.scope == "global" || (ids.exists(scope.c_str()) && var.scope == ids.getFunc(scope.c_str()).scope) ) {
                                if (var.val.type == "string"){
                                    var.val.isStringSet = true;
                                    var.val.stringVal = (yyvsp[-1].string);  
                                } else {
                                    printf("Error at line %d: Different types.8", yylineno);
                                    return 1;
                                }  
                            } else {
                                printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                                return 1;
                            }
                        } else {
                            printf("Error at line %d: Variable not found.3", yylineno);
                            return 1;
                        }
                    }
#line 2349 "lang.tab.c"
    break;

  case 71: /* assignment_statement: ID '[' INT ']' '=' expression ';'  */
#line 797 "lang.y"
                                                        {
                        Value result = (yyvsp[-1].ASTNode)->Eval();
                        if( ids.exists((yyvsp[-6].string)) ) {   
                            Array& arr = ids.getArray((yyvsp[-6].string));
                            if (arr.scope == scope || arr.scope == "global" || (ids.exists(scope.c_str()) && arr.scope == ids.getFunc(scope.c_str()).scope) ) {
                                if (arr.type == result.type){
                                    arr.add((yyvsp[-4].integer), result);
                                } else {
                                    printf("Error at line %d: Different types.9",yylineno);
                                    return 1;
                                }   
                            } else {
                                printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                                return 1;
                            }
                        } else {
                            printf("Error at line %d: Variable not found.4",yylineno);
                            return 1;
                        }
                    }
#line 2374 "lang.tab.c"
    break;

  case 72: /* assignment_statement: ID '[' INT ']' '=' CHAR ';'  */
#line 817 "lang.y"
                                                  {
                        if( ids.exists((yyvsp[-6].string))) {
                            Array& arr = ids.getArray((yyvsp[-6].string));
                            if (arr.scope == scope || arr.scope == "global" || (ids.exists(scope.c_str()) && arr.scope == ids.getFunc(scope.c_str()).scope) ) {
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
                                printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                                return 1;
                            }  

                        } else {
                            printf("Error at line %d: Variable not found.5", yylineno);
                            return 1;
                        }
                    }
#line 2403 "lang.tab.c"
    break;

  case 73: /* assignment_statement: ID '[' ID ']' '=' expression ';'  */
#line 841 "lang.y"
                                                       {
                        Value result = (yyvsp[-1].ASTNode)->Eval();
                        if( ids.exists((yyvsp[-6].string)) && ids.exists((yyvsp[-4].string))) {
                            Array& arr = ids.getArray((yyvsp[-6].string));
                            if (arr.scope == scope || arr.scope == "global" || (ids.exists(scope.c_str()) && arr.scope == ids.getFunc(scope.c_str()).scope) ) {
                                Value& val = ids.getVar((yyvsp[-4].string)).val;
                                if (arr.type == result.type && val.type == "int"){
                                    arr.add(val.intVal, result);
                                } else {
                                    printf("Error at line %d: Different types.11", yylineno);
                                    return 1;
                                }  
                            } else {
                                printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                                return 1;
                            }  

                        } else {
                            printf("Error at line %d: Variable not found.6", yylineno);
                            return 1;
                        }
                    }
#line 2430 "lang.tab.c"
    break;

  case 74: /* assignment_statement: ID '[' ID ']' '=' CHAR ';'  */
#line 863 "lang.y"
                                                 {

                        if( ids.exists((yyvsp[-6].string)) && ids.exists((yyvsp[-4].string))) {
                            Array& arr = ids.getArray((yyvsp[-6].string));
                            if (arr.scope == scope  || arr.scope == "global" || (ids.exists(scope.c_str()) && arr.scope == ids.getFunc(scope.c_str()).scope) ) {
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
                                printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                                return 1;
                            }  

                        } else {
                            printf("Error at line %d: Variable not found.\n", yylineno);
                            return 1;
                        }
                    }
#line 2461 "lang.tab.c"
    break;

  case 75: /* assignment_statement: ID '.' ID '=' expression ';'  */
#line 889 "lang.y"
                                                  {
                        if ( ids.exists((yyvsp[-5].string)) && ids.exists((yyvsp[-3].string)) && ids.getVar((yyvsp[-3].string)).scope == ids.getVar((yyvsp[-5].string)).val.type ){
                            Value result = (yyvsp[-1].ASTNode)->Eval();
                            Variable& var = ids.getVar((yyvsp[-5].string));
                            if (var.scope == scope  || var.scope == "global" || (ids.exists(scope.c_str()) && var.scope == ids.getFunc(scope.c_str()).scope) ) {
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
                                printf("Error at line %d: Different types.\n", yylineno);
                                return 1;
                            } 
                            } else {
                                printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                                return 1;
                            } 
                        } else {
                            printf("Error at line %d: Variable not found.\n", yylineno);
                            return 1;
                        }

                    }
#line 2497 "lang.tab.c"
    break;

  case 76: /* assignment_statement: ID '.' ID '=' CHAR ';'  */
#line 920 "lang.y"
                                            {
                        if ( ids.exists((yyvsp[-5].string)) && ids.exists((yyvsp[-3].string)) && ids.getVar((yyvsp[-3].string)).scope == ids.getVar((yyvsp[-5].string)).val.type ){
                            Variable& var = ids.getVar((yyvsp[-5].string));
                            if (var.scope == scope || var.scope == "global" || (ids.exists(scope.c_str()) && var.scope == ids.getFunc(scope.c_str()).scope) ) {
                                Variable& var = ids.getVar((yyvsp[-3].string));
                                if (var.val.type == "char"){
                                    var.val.charVal = (yyvsp[-1].character);
                                    var.val.isCharSet = true;
                                } else {
                                    printf("Error at line %d: Different types.\n", yylineno);
                                return 1;
                                }

                            } else {
                                printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                                return 1;
                            } 
                        } else {
                            printf("Error at line %d: Variable not found.\n", yylineno);
                            return 1;
                        }
                    }
#line 2524 "lang.tab.c"
    break;

  case 77: /* assignment_statement: ID '.' ID '=' STRING ';'  */
#line 942 "lang.y"
                                               {
                        if ( ids.exists((yyvsp[-5].string)) && ids.exists((yyvsp[-3].string)) && ids.getVar((yyvsp[-3].string)).scope == ids.getVar((yyvsp[-5].string)).val.type ){
                            Variable& var = ids.getVar((yyvsp[-5].string));
                            if (var.scope == scope || var.scope == "global" || (ids.exists(scope.c_str()) && var.scope == ids.getFunc(scope.c_str()).scope) ) {
                                Variable& var = ids.getVar((yyvsp[-3].string));
                                if (var.val.type == "string"){
                                    var.val.stringVal = (yyvsp[-1].string);
                                    var.val.isStringSet = true;
                                } else {
                                    printf("Error at line %d: Different types.\n", yylineno);
                                return 1;
                                }
                                
                            } else {
                                printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                                return 1;
                            } 
                        } else {
                            printf("Error at line %d: Variable not found.\n", yylineno);
                            return 1;
                        }
                    }
#line 2551 "lang.tab.c"
    break;

  case 93: /* expression: arithm_expr  */
#line 992 "lang.y"
                        { (yyval.ASTNode) = (yyvsp[0].ASTNode); }
#line 2557 "lang.tab.c"
    break;

  case 94: /* expression: bool_expr  */
#line 993 "lang.y"
                      { (yyval.ASTNode) = (yyvsp[0].ASTNode); }
#line 2563 "lang.tab.c"
    break;

  case 95: /* arithm_expr: arithm_expr '+' arithm_expr  */
#line 998 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "+", (yyvsp[0].ASTNode));                
                   
               else{
                    printf("Error at line %d: Different types between: %s and %s.\n", yylineno,(yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }

           }
#line 2578 "lang.tab.c"
    break;

  case 96: /* arithm_expr: arithm_expr '-' arithm_expr  */
#line 1008 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "-", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types between: %s and %s.\n", yylineno,(yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());
                    return 1;
               }
           }
#line 2591 "lang.tab.c"
    break;

  case 97: /* arithm_expr: arithm_expr '/' arithm_expr  */
#line 1016 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "/", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types between: %s and %s.\n", yylineno,(yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2604 "lang.tab.c"
    break;

  case 98: /* arithm_expr: arithm_expr '*' arithm_expr  */
#line 1024 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "*", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types between: %s and %s.\n", yylineno,(yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2617 "lang.tab.c"
    break;

  case 99: /* arithm_expr: arithm_expr '%' arithm_expr  */
#line 1032 "lang.y"
                                         {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "%", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types between: %s and %s.\n", yylineno, (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
                    
           }
#line 2631 "lang.tab.c"
    break;

  case 100: /* arithm_expr: '-' arithm_expr  */
#line 1041 "lang.y"
                             {
                (yyval.ASTNode) = new AST((yyvsp[0].ASTNode), "-", NULL);
           }
#line 2639 "lang.tab.c"
    break;

  case 101: /* arithm_expr: '(' arithm_expr ')'  */
#line 1044 "lang.y"
                                 {
                (yyval.ASTNode) = (yyvsp[-1].ASTNode);
           }
#line 2647 "lang.tab.c"
    break;

  case 102: /* arithm_expr: INT  */
#line 1047 "lang.y"
                 {
               char* identifierText = strdup(yytext);
               (yyval.ASTNode) = new AST(new Value(identifierText, "int")); 
           }
#line 2656 "lang.tab.c"
    break;

  case 103: /* arithm_expr: FLOAT  */
#line 1051 "lang.y"
                   {
               char* identifierText = strdup(yytext);
               (yyval.ASTNode) = new AST(new Value(identifierText, "float")); 
           }
#line 2665 "lang.tab.c"
    break;

  case 104: /* arithm_expr: fn_call  */
#line 1055 "lang.y"
                     {
            
                (yyval.ASTNode) = new AST((yyvsp[0].var)->val);
               
            }
#line 2675 "lang.tab.c"
    break;

  case 105: /* arithm_expr: ID  */
#line 1060 "lang.y"
                {
                if( ids.exists((yyvsp[0].string)) ) {
                    Variable var = ids.getVar((yyvsp[0].string));
                    if (var.scope == scope || var.scope == "global" || (ids.exists(scope.c_str()) && var.scope == ids.getFunc(scope.c_str()).scope)){
                        Value val = var.Eval();
                        (yyval.ASTNode) = new AST(val);
                    }else {
                        printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                        return 1;
                    }
                    
                } else {
                    printf("Error at line %d: Variable not found.\n", yylineno);
                    return 1;
                }
           }
#line 2696 "lang.tab.c"
    break;

  case 106: /* arithm_expr: ID '.' ID  */
#line 1076 "lang.y"
                       { 
                if( ids.exists((yyvsp[-2].string)) ) {
                    Variable obj = ids.getVar((yyvsp[-2].string));
                    if (obj.scope == scope || obj.scope == "global" || (ids.exists(scope.c_str()) && obj.scope == ids.getFunc(scope.c_str()).scope)){
                        if( ids.exists((yyvsp[0].string)) ) {
                            Variable var = ids.getVar((yyvsp[0].string));
                            if( var.scope == obj.val.type ){
                                (yyval.ASTNode) = new AST(var.val);
                            } else {
                                printf("Error at line %d: No %s member in class %s.\n",yylineno, (yyvsp[0].string), (yyvsp[-2].string));
                                return 0;
                            }
                                
                        } else {
                            printf("Error at line %d: No %s member in class %s.\n",yylineno, (yyvsp[0].string), (yyvsp[-2].string));
                            return 0;
                        }

                    } else {
                        printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                        return 1;
                    }
                } else {
                    printf("Error at line %d: Class %s not found.\n",yylineno, (yyvsp[-2].string));
                    return 1;
                }
           }
#line 2728 "lang.tab.c"
    break;

  case 107: /* arithm_expr: ID '.' fn_call  */
#line 1103 "lang.y"
                            {
                if( ids.exists((yyvsp[-2].string)) ) {
                    Variable obj = ids.getVar((yyvsp[-2].string));
                    if (obj.scope == scope || obj.scope == "global" || (ids.exists(scope.c_str()) && obj.scope == ids.getFunc(scope.c_str()).scope)){

                        Function fn = ids.getFunc((yyvsp[0].var)->name.c_str());

                        if( obj.val.type == fn.scope ){
                            (yyval.ASTNode) = new AST((yyvsp[0].var)->val);
                        } else {
                            printf("Error at line %d: No %s method found in class variable %s.", yylineno, (yyvsp[0].var)->name.c_str(), (yyvsp[-2].string));
                            return 0;
                        }
                        
                    } else {
                        printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                        return 1;
                    }
                    
                } else {

                    printf("Error at line %d: Variable %s not found.\n",yylineno, (yyvsp[-2].string));
                    return 1;

                }
           }
#line 2759 "lang.tab.c"
    break;

  case 108: /* arithm_expr: ID '[' ID ']'  */
#line 1129 "lang.y"
                           {
                if( ids.exists((yyvsp[-3].string)) && ids.exists((yyvsp[-1].string))) {
                    Array arr = ids.getArray((yyvsp[-3].string));
                    if (arr.scope == scope || arr.scope == "global" || (ids.exists(scope.c_str()) && arr.scope == ids.getFunc(scope.c_str()).scope)){
                        Value val = ids.getVar((yyvsp[-1].string)).Eval();
                        if( val.type == "int" )
                            (yyval.ASTNode) = new AST(arr.getVal(val.intVal));
                        else {
                            printf("Error at line %d: Invalid index type.\n", yylineno);
                        }
                    } else {
                        printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                        return 1;
                    }
                } else {
                    printf("Error at line %d: Variable not found.\n", yylineno);
                    return 1;
                }
           }
#line 2783 "lang.tab.c"
    break;

  case 109: /* arithm_expr: ID '[' INT ']'  */
#line 1148 "lang.y"
                            {
                if( ids.exists((yyvsp[-3].string)) ) {
                    Array arr = ids.getArray((yyvsp[-3].string));
                    if (arr.scope == scope || arr.scope == "global" || (ids.exists(scope.c_str()) && arr.scope == ids.getFunc(scope.c_str()).scope)){
                        (yyval.ASTNode) = new AST(arr.getVal((yyvsp[-1].integer)));
                    } else {
                        printf("Error at line %d: Variable not found in this scope.\n", yylineno);
                        return 1;
                    }
                    
                }else {
                    printf("Error at line %d: Variable not found.\n", yylineno);
                }

           }
#line 2803 "lang.tab.c"
    break;

  case 110: /* arithm_expr: ID '[' fn_call ']'  */
#line 1163 "lang.y"
                                {
                if( ids.exists((yyvsp[-3].string))) {
                    Array arr = ids.getArray((yyvsp[-3].string));
                    if (arr.scope == scope || arr.scope == "global" || (ids.exists(scope.c_str()) && arr.scope == ids.getFunc(scope.c_str()).scope)){
                        if( (yyvsp[-1].var)->val.type == "int" )
                            (yyval.ASTNode) = new AST(arr.getVal((yyvsp[-1].var)->val.intVal));
                        else {
                            printf("Error at line %d: Invalid index type.\n", yylineno);
                        }
                    }
                } else {
                    printf("Error at line %d: Variable not found.\n", yylineno);
                    return 1;
                }
           }
#line 2823 "lang.tab.c"
    break;

  case 111: /* bool_expr: bool_expr AND bool_expr  */
#line 1181 "lang.y"
                                   {
               (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "and", (yyvsp[0].ASTNode)); 
         }
#line 2831 "lang.tab.c"
    break;

  case 112: /* bool_expr: bool_expr OR bool_expr  */
#line 1184 "lang.y"
                                  {
               (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "or", (yyvsp[0].ASTNode)); 
           }
#line 2839 "lang.tab.c"
    break;

  case 113: /* bool_expr: NOT bool_expr  */
#line 1187 "lang.y"
                         {
               (yyval.ASTNode) = new AST((yyvsp[0].ASTNode), "not", NULL); 
         }
#line 2847 "lang.tab.c"
    break;

  case 114: /* bool_expr: '(' bool_expr ')'  */
#line 1190 "lang.y"
                             {
            (yyval.ASTNode) = (yyvsp[-1].ASTNode);
         }
#line 2855 "lang.tab.c"
    break;

  case 115: /* bool_expr: BOOL  */
#line 1193 "lang.y"
                { 
            char* identifierText = strdup(yytext);
            (yyval.ASTNode) = new AST(new Value(identifierText, "bool"));
          }
#line 2864 "lang.tab.c"
    break;

  case 116: /* bool_expr: arithm_expr GT arithm_expr  */
#line 1197 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "gt", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types between: %s and %s", yylineno, (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2877 "lang.tab.c"
    break;

  case 117: /* bool_expr: arithm_expr LT arithm_expr  */
#line 1205 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "lt", (yyvsp[0].ASTNode)); 
               else{
                    printf("Error at line %d: Different types between: %s and %s", yylineno, (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2890 "lang.tab.c"
    break;

  case 118: /* bool_expr: arithm_expr GEQ arithm_expr  */
#line 1213 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "geq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types between: %s and %s", yylineno, (yyvsp[-2].ASTNode)->Eval().type.c_str(), (yyvsp[0].ASTNode)->Eval().type.c_str());            
                    return 1;
               }
           }
#line 2903 "lang.tab.c"
    break;

  case 119: /* bool_expr: arithm_expr LEQ arithm_expr  */
#line 1221 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "leq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types.\n", yylineno);
                    return 1;
               }
                    
           }
#line 2917 "lang.tab.c"
    break;

  case 120: /* bool_expr: arithm_expr EQ arithm_expr  */
#line 1230 "lang.y"
                                      {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "eq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types.\n", yylineno);
                    return 1;
               }
           }
#line 2930 "lang.tab.c"
    break;

  case 121: /* bool_expr: arithm_expr NEQ arithm_expr  */
#line 1238 "lang.y"
                                       {
               if ((yyvsp[-2].ASTNode)->Eval().type == (yyvsp[0].ASTNode)->Eval().type)
                   (yyval.ASTNode) = new AST((yyvsp[-2].ASTNode), "neq", (yyvsp[0].ASTNode)); 
               else {
                    printf("Error at line %d: Different types.\n", yylineno);
                    return 1;
               }
           }
#line 2943 "lang.tab.c"
    break;

  case 122: /* fn_call: ID '(' argument_list ')'  */
#line 1249 "lang.y"
                                  { 
            
            if( ids.exists((yyvsp[-3].string)) ) {
                Function fn = ids.getFunc((yyvsp[-3].string));
                printf("function: %s from: %s in: %s\n",(yyvsp[-3].string),fn.scope.c_str(), scope.c_str());
                if (fn.scope == scope || fn.scope == "global" || ids.existsVar(fn.scope.c_str(), scope) ){
                        if ( params.size() != fn.params.size() ){
                        printf("Error at line %d: The %s function call has inapropriate number of parameters.\n", yylineno, fn.name.c_str());
                        return 1;
                    } else {
                        for( int i = 0; i < params.size(); i++ ) {
                            if (params.at(i).type != fn.params.at(i).type){
                                printf("Error at line %d: No function with this parameters found.\n", yylineno);
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
                } else {
                    printf("Error at line %d: Function not found in this scope.\n", yylineno);
                    return 1;
                }

                
            }
        }
#line 2995 "lang.tab.c"
    break;

  case 124: /* argument_list: expression  */
#line 1300 "lang.y"
                          { params.push_back((yyvsp[0].ASTNode)->Eval());}
#line 3001 "lang.tab.c"
    break;

  case 125: /* argument_list: argument_list ',' expression  */
#line 1301 "lang.y"
                                            { params.push_back((yyvsp[0].ASTNode)->Eval());}
#line 3007 "lang.tab.c"
    break;


#line 3011 "lang.tab.c"

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

#line 1304 "lang.y"

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
