/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "projet.y"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tab_symboles.h"
#include "gencode.h"
#include "parser.h"
#include "option.h"
#include "tab_fonctions.h"

int yylex (void);
void vprint (int v);


void yyerror(const char*);
int yylex();
void lex_free();



#line 92 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ENTIER = 258,
    BOOLEEN = 259,
    IDENT = 260,
    CHAINE = 261,
    INT = 262,
    BOOL = 263,
    UNIT = 264,
    ARRAY = 265,
    OF = 266,
    VAR = 267,
    PROG = 268,
    REF = 269,
    RET = 270,
    FUNCT = 271,
    IF = 272,
    THEN = 273,
    ELSE = 274,
    WHILE = 275,
    BEG = 276,
    END = 277,
    READ = 278,
    WRITE = 279,
    DO = 280,
    EQ = 281,
    INF = 282,
    SUPP = 283,
    DIFF = 284,
    OR = 285,
    XOR = 286,
    AND = 287,
    UMOINS = 288,
    NOT = 289
  };
#endif
/* Tokens.  */
#define ENTIER 258
#define BOOLEEN 259
#define IDENT 260
#define CHAINE 261
#define INT 262
#define BOOL 263
#define UNIT 264
#define ARRAY 265
#define OF 266
#define VAR 267
#define PROG 268
#define REF 269
#define RET 270
#define FUNCT 271
#define IF 272
#define THEN 273
#define ELSE 274
#define WHILE 275
#define BEG 276
#define END 277
#define READ 278
#define WRITE 279
#define DO 280
#define EQ 281
#define INF 282
#define SUPP 283
#define DIFF 284
#define OR 285
#define XOR 286
#define AND 287
#define UMOINS 288
#define NOT 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "projet.y"

  int value;
  char* id;
  struct{ // si c'est pas un tab, nbdim = 0 et borneinfdim et tailledim = NULL. Pour rangelist, type = ""
    int* borneinfdim;
    int* tailledim;
    int nbdim;
    int type;
  } typevar;

  int index;

  struct{
    char** listeident;
    int nbident;
  } idlist;

  struct{
    int* listeexp;
    int nbexp;
  } explist;


#line 236 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   209

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

#define YYUNDEFTOK  2
#define YYMAXUTOK   289


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      26,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,    48,    38,    34,    28,    35,    46,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    29,    27,
      49,    51,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,    41,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    30,    31,    32,    33,    36,    37,    40,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    75,    75,    75,    75,    75,    78,    79,    80,    83,
      88,    93,   102,   107,   117,   118,   119,   122,   132,   139,
     151,   152,   155,   155,   155,   158,   159,   160,   163,   164,
     167,   168,   169,   170,   173,   174,   175,   176,   177,   178,
     179,   180,   184,   186,   188,   190,   192,   194,   197,   198,
     199,   202,   203,   206,   210,   217,   219,   221,   223,   228,
     233,   238,   243,   248,   253,   258,   263,   270,   277,   289,
     302,   307,   312,   317,   323,   323,   325,   329,   331
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENTIER", "BOOLEEN", "IDENT", "CHAINE",
  "INT", "BOOL", "UNIT", "ARRAY", "OF", "VAR", "PROG", "REF", "RET",
  "FUNCT", "IF", "THEN", "ELSE", "WHILE", "BEG", "END", "READ", "WRITE",
  "DO", "'\\n'", "';'", "','", "':'", "EQ", "INF", "SUPP", "DIFF", "'+'",
  "'-'", "OR", "XOR", "'*'", "'/'", "AND", "'^'", "UMOINS", "NOT", "'['",
  "']'", "'.'", "'('", "')'", "'<'", "'>'", "'='", "$accept", "program",
  "$@1", "$@2", "$@3", "vardecllist", "vardecl", "identlist", "typename",
  "atomictype", "arraytype", "rangelist", "fundecllist", "fundecl", "$@4",
  "$@5", "parlist", "par", "instr", "expA", "B", "C", "D", "expE", "F",
  "sequence", "lvalue", "exprlist", "expr", "$@6", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,    10,    59,    44,    58,
     281,   282,   283,   284,    43,    45,   285,   286,    42,    47,
     287,    94,   288,   289,    91,    93,    46,    40,    41,    60,
      62,    61
};
# endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -99,     1,    -6,   -99,     4,    20,    42,    63,    47,    60,
      71,    96,   -99,    75,    20,    42,    41,    56,   178,    63,
     -99,   -99,   -99,   -99,   -99,    61,   -99,   -99,   -99,    62,
      24,    40,    40,   -99,   167,    99,    40,   -99,    76,   -99,
     107,    95,   106,    77,    98,    40,    34,   -99,   -99,    26,
      40,    40,    40,   -20,   109,   -20,    40,   -99,   102,   127,
     108,   -99,   -20,   -99,    40,   117,   128,    41,   124,   135,
      62,   129,    58,   -99,   137,    40,    37,   119,   116,    82,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    40,   178,   150,   -20,   178,   -99,   -20,
     131,   165,   -99,    41,    18,   -99,   -99,    40,   -99,   133,
     -99,   138,   -99,   -20,   -20,   105,   119,   119,   119,   119,
     130,   130,   130,   116,   -20,   -20,   -20,   173,   178,   -99,
     191,    18,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     168,   -99,   -99,   -99,   178,   -99,   -99,   107,    20,   -99,
     -99,   178,   -99,   -99
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,     0,     6,     0,    20,     7,    10,
       0,     0,     3,     0,     6,     0,     0,     0,     0,    20,
       8,    11,    16,    15,    14,     0,     9,    12,    13,    25,
      51,    35,     0,    45,     0,     0,     0,     4,     0,    21,
       0,     0,     0,     0,    26,     0,     0,    55,    56,    78,
       0,     0,     0,    34,     0,    42,     0,    39,    50,     0,
      51,    40,    41,     5,     0,     0,     0,     0,     0,     0,
      25,     0,    53,    37,     0,     0,     0,    61,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    49,    38,    33,
       0,     0,    28,     0,     0,    27,    52,     0,    36,     0,
      76,     0,    57,    66,    67,    69,    58,    60,    71,    72,
      59,    62,    70,    63,    64,    65,    68,    43,     0,    48,
       0,     0,    29,    22,    54,    77,    74,    43,    44,    47,
      18,    17,    23,    75,     0,    30,    32,     0,     6,    44,
      19,     0,    31,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -99,   -99,   -99,   -14,   -99,   182,   -57,   -98,
     -99,    53,   184,   -99,   -99,   -99,   134,   -99,   -16,   -99,
      68,    57,   -99,   -99,   -99,   110,   174,   -41,   -28,   -99
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    18,    63,     7,     8,    10,    26,    27,
      28,    66,    12,    13,   142,   148,    43,    44,    58,    54,
     138,   145,    56,    95,   146,    59,    38,    71,    72,   143
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,     3,    37,    53,    55,    74,   133,     4,    62,     5,
     102,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    77,    78,    79,    22,    23,    24,    96,    91,
      92,    93,     6,   141,   109,   111,    99,    47,    48,    49,
      47,    48,    49,    47,    48,    49,   132,     9,    22,    23,
      24,    25,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   134,    41,    45,    50,
      75,    46,    50,    76,    14,    50,    42,    51,   127,    11,
      51,    52,    73,    51,    52,   110,   107,    52,    15,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      16,    17,    19,    29,    60,    40,    64,    91,    92,    93,
      65,    68,   139,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    67,    69,    70,    94,   149,    97,
     112,    91,    92,    93,   151,   153,    80,    81,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    80,    81,    98,
      80,    81,    45,   103,    91,    92,    93,    87,    88,    89,
      90,    80,    81,   100,   104,    91,    92,    93,    91,    92,
      93,    90,    30,   101,   106,   128,   131,   130,   135,    91,
      92,    93,    31,    30,    32,   108,   136,    33,    34,    57,
      35,    36,   137,    31,   140,    32,   147,    21,    33,    34,
     150,    35,    36,    39,   105,   144,   152,   129,     0,    61
};

static const yytype_int16 yycheck[] =
{
      14,     0,    18,    31,    32,    46,   104,    13,    36,     5,
      67,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    50,    51,    52,     7,     8,     9,    56,    49,
      50,    51,    12,   131,    75,    76,    64,     3,     4,     5,
       3,     4,     5,     3,     4,     5,   103,     5,     7,     8,
       9,    10,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,   107,     5,    44,    35,
      44,    47,    35,    47,    27,    35,    14,    43,    94,    16,
      43,    47,    48,    43,    47,    48,    28,    47,    28,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      29,     5,    27,    47,     5,    44,    30,    49,    50,    51,
       3,     5,   128,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    29,    48,    28,    18,   144,    27,
      48,    49,    50,    51,   148,   151,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    31,    32,    22,
      31,    32,    44,    29,    49,    50,    51,    38,    39,    40,
      41,    31,    32,    46,    29,    49,    50,    51,    49,    50,
      51,    41,     5,    45,    45,    25,    11,    46,    45,    49,
      50,    51,    15,     5,    17,    48,    48,    20,    21,    22,
      23,    24,    19,    15,     3,    17,    28,    15,    20,    21,
     147,    23,    24,    19,    70,   137,   149,    97,    -1,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    53,    54,     0,    13,     5,    12,    57,    58,     5,
      59,    16,    64,    65,    27,    28,    29,     5,    55,    27,
      57,    59,     7,     8,     9,    10,    60,    61,    62,    47,
       5,    15,    17,    20,    21,    23,    24,    70,    78,    64,
      44,     5,    14,    68,    69,    44,    47,     3,     4,     5,
      35,    43,    47,    80,    71,    80,    74,    22,    70,    77,
       5,    78,    80,    56,    30,     3,    63,    29,     5,    48,
      28,    79,    80,    48,    79,    44,    47,    80,    80,    80,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    49,    50,    51,    18,    75,    80,    27,    22,    80,
      46,    45,    60,    29,    29,    68,    45,    28,    48,    79,
      48,    79,    48,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    70,    25,    77,
      46,    11,    60,    61,    79,    45,    48,    19,    72,    70,
       3,    61,    66,    81,    72,    73,    76,    28,    67,    70,
      63,    57,    73,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    54,    55,    56,    53,    57,    57,    57,    58,
      59,    59,    60,    60,    61,    61,    61,    62,    63,    63,
      64,    64,    66,    67,    65,    68,    68,    68,    69,    69,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    72,    73,    74,    75,    76,    77,    77,
      77,    78,    78,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    80,    80,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     0,     8,     0,     1,     3,     4,
       1,     3,     1,     1,     1,     1,     1,     6,     4,     6,
       0,     3,     0,     0,    11,     0,     1,     3,     3,     4,
       6,     8,     6,     3,     2,     1,     4,     3,     3,     2,
       2,     2,     1,     0,     0,     0,     1,     0,     3,     2,
       1,     1,     4,     1,     3,     1,     1,     3,     3,     3,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     0,     5,     3,     4,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 75 "projet.y"
         {reset();}
#line 1524 "y.tab.c"
    break;

  case 3:
#line 75 "projet.y"
                                                       {genbalise("main",0);}
#line 1530 "y.tab.c"
    break;

  case 4:
#line 75 "projet.y"
                                                                                    {gencode("exit",0,0,0);}
#line 1536 "y.tab.c"
    break;

  case 5:
#line 75 "projet.y"
                                                                                                                        {;}
#line 1542 "y.tab.c"
    break;

  case 6:
#line 78 "projet.y"
                                                                               {;}
#line 1548 "y.tab.c"
    break;

  case 7:
#line 79 "projet.y"
                                                                               {;}
#line 1554 "y.tab.c"
    break;

  case 8:
#line 80 "projet.y"
                                                                               {;}
#line 1560 "y.tab.c"
    break;

  case 9:
#line 83 "projet.y"
                                                                               {for(int i = 0;i<(yyvsp[-2].idlist).nbident;i++){ // Trouver comment mettre le nom de la fonction dans le cas o� vardecllist est dans funcdecllist
                                                                                 ts_ajouter(((yyvsp[-2].idlist).listeident)[i],"GLOBAL",0,(yyvsp[0].typevar).nbdim,(yyvsp[0].typevar).borneinfdim,(yyvsp[0].typevar).tailledim,(yyvsp[0].typevar).type,0);
                                                                                }}
#line 1568 "y.tab.c"
    break;

  case 10:
#line 88 "projet.y"
                                                                                {(yyval.idlist).listeident = malloc(sizeof(char*));                     // PENSER A FREE
                                                                                (yyval.idlist).listeident[0] = calloc(20, sizeof(char));
                                                                                (yyval.idlist).nbident = 1;
                                                                                (yyval.idlist).listeident[0] = strdup((yyvsp[0].id));}
#line 1577 "y.tab.c"
    break;

  case 11:
#line 93 "projet.y"
                                                                                {(yyval.idlist).nbident = (yyvsp[0].idlist).nbident + 1;
                                                                                (yyval.idlist).listeident = malloc((yyval.idlist).nbident*sizeof(char*));
                                                                                    for(int i=0;i<(yyvsp[0].idlist).nbident;i++){
                                                                                    ((yyval.idlist).listeident)[i] = calloc(20, sizeof(char));
                                                                                    ((yyval.idlist).listeident)[i] = strdup(((yyvsp[0].idlist).listeident)[i]);
                                                                                    }
                                                                                ((yyval.idlist).listeident)[(yyvsp[0].idlist).nbident] = strdup((yyvsp[-2].id));}
#line 1589 "y.tab.c"
    break;

  case 12:
#line 102 "projet.y"
                                                                                {(yyval.typevar).type = (yyvsp[0].index);
                                                                                (yyval.typevar).nbdim = 0;
                                                                                (yyval.typevar).borneinfdim = NULL;
                                                                                (yyval.typevar).tailledim = NULL;}
#line 1598 "y.tab.c"
    break;

  case 13:
#line 107 "projet.y"
                                                                                {(yyval.typevar).nbdim = (yyvsp[0].typevar).nbdim;
                                                                                (yyval.typevar).borneinfdim = malloc((yyval.typevar).nbdim*sizeof(int));
                                                                                (yyval.typevar).tailledim = malloc((yyval.typevar).nbdim*sizeof(int));
                                                                                for(int i=0;i<(yyvsp[0].typevar).nbdim;i++){
                                                                                    ((yyval.typevar).borneinfdim)[i] = ((yyvsp[0].typevar).borneinfdim)[i];
                                                                                    ((yyval.typevar).tailledim)[i] = ((yyvsp[0].typevar).tailledim)[i];
                                                                                }
                                                                                (yyval.typevar).type = (yyvsp[0].typevar).type;}
#line 1611 "y.tab.c"
    break;

  case 14:
#line 117 "projet.y"
                 {(yyval.index) = 2;}
#line 1617 "y.tab.c"
    break;

  case 15:
#line 118 "projet.y"
                 {(yyval.index) = 1;}
#line 1623 "y.tab.c"
    break;

  case 16:
#line 119 "projet.y"
                 {(yyval.index) = 0;}
#line 1629 "y.tab.c"
    break;

  case 17:
#line 122 "projet.y"
                                                                                {(yyval.typevar).nbdim = (yyvsp[-3].typevar).nbdim;
                                                                                (yyval.typevar).borneinfdim = malloc((yyval.typevar).nbdim*sizeof(int));
                                                                                (yyval.typevar).tailledim = malloc((yyval.typevar).nbdim*sizeof(int));
                                                                                for(int i=0;i<(yyvsp[-3].typevar).nbdim;i++){
                                                                                    ((yyval.typevar).borneinfdim)[i] = ((yyvsp[-3].typevar).borneinfdim)[i];
                                                                                    ((yyval.typevar).tailledim)[i] = ((yyvsp[-3].typevar).tailledim)[i];
                                                                                }
                                                                                (yyval.typevar).type = (yyvsp[0].index);}
#line 1642 "y.tab.c"
    break;

  case 18:
#line 132 "projet.y"
                                                                                {(yyval.typevar).nbdim = 1;
                                                                                (yyval.typevar).borneinfdim = malloc(sizeof(int));
                                                                                (yyval.typevar).tailledim = malloc((yyval.typevar).nbdim*sizeof(int));
                                                                                ((yyval.typevar).borneinfdim)[0] = (yyvsp[-3].value);
                                                                                if((yyvsp[0].value) > (yyvsp[-3].value)){((yyval.typevar).tailledim)[0] = (yyvsp[0].value) - (yyvsp[-3].value) + 1;} //sinon : erreur
                                                                                (yyval.typevar).type = -1;}
#line 1653 "y.tab.c"
    break;

  case 19:
#line 139 "projet.y"
                                                                                {(yyval.typevar).nbdim = (yyvsp[0].typevar).nbdim + 1;
                                                                                (yyval.typevar).borneinfdim = malloc((yyval.typevar).nbdim*sizeof(int));
                                                                                (yyval.typevar).tailledim = malloc((yyval.typevar).nbdim*sizeof(int));
                                                                                ((yyval.typevar).borneinfdim)[(yyvsp[0].typevar).nbdim] = (yyvsp[-5].value);
                                                                                if((yyvsp[-2].value) > (yyvsp[-5].value)){((yyval.typevar).tailledim)[(yyvsp[0].typevar).nbdim] = (yyvsp[-2].value) - (yyvsp[-5].value) + 1;} //sinon : erreur
                                                                                for(int i=0;i<(yyvsp[0].typevar).nbdim;i++){
                                                                                    ((yyval.typevar).borneinfdim)[i] = ((yyvsp[0].typevar).borneinfdim)[i];
                                                                                    ((yyval.typevar).tailledim)[i] = ((yyvsp[0].typevar).tailledim)[i];
                                                                                }
                                                                                (yyval.typevar).type = -1;}
#line 1668 "y.tab.c"
    break;

  case 20:
#line 151 "projet.y"
                                                                                {;}
#line 1674 "y.tab.c"
    break;

  case 21:
#line 152 "projet.y"
                                                                               {;}
#line 1680 "y.tab.c"
    break;

  case 22:
#line 155 "projet.y"
                                                    {ajout_fct((yyvsp[-5].id), 0, NULL, (yyvsp[0].index));}
#line 1686 "y.tab.c"
    break;

  case 23:
#line 155 "projet.y"
                                                                                  {genbalise((yyvsp[-6].id),0);}
#line 1692 "y.tab.c"
    break;

  case 24:
#line 155 "projet.y"
                                                                                                                           {;}
#line 1698 "y.tab.c"
    break;

  case 25:
#line 158 "projet.y"
                                        {;}
#line 1704 "y.tab.c"
    break;

  case 26:
#line 159 "projet.y"
                                        {;}
#line 1710 "y.tab.c"
    break;

  case 27:
#line 160 "projet.y"
                                        {;}
#line 1716 "y.tab.c"
    break;

  case 28:
#line 163 "projet.y"
                                        {;}
#line 1722 "y.tab.c"
    break;

  case 29:
#line 164 "projet.y"
                                        {;}
#line 1728 "y.tab.c"
    break;

  case 30:
#line 167 "projet.y"
                                                {ts_supprtempo();}
#line 1734 "y.tab.c"
    break;

  case 31:
#line 168 "projet.y"
                                                {ts_supprtempo();}
#line 1740 "y.tab.c"
    break;

  case 32:
#line 169 "projet.y"
                                                {ts_supprtempo();}
#line 1746 "y.tab.c"
    break;

  case 33:
#line 170 "projet.y"
                                                {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index));
                                                if(a==b){gencode("aff1",(yyvsp[-2].index),(yyvsp[0].index),0);}
                                                ts_supprtempo();}
#line 1754 "y.tab.c"
    break;

  case 34:
#line 173 "projet.y"
                                        {;}
#line 1760 "y.tab.c"
    break;

  case 35:
#line 174 "projet.y"
                                        {;}
#line 1766 "y.tab.c"
    break;

  case 36:
#line 175 "projet.y"
                                        {;}
#line 1772 "y.tab.c"
    break;

  case 37:
#line 176 "projet.y"
                                        {;}
#line 1778 "y.tab.c"
    break;

  case 38:
#line 177 "projet.y"
                                        {;}
#line 1784 "y.tab.c"
    break;

  case 39:
#line 178 "projet.y"
                                        {;}
#line 1790 "y.tab.c"
    break;

  case 40:
#line 179 "projet.y"
                                        {gencode("read",(yyvsp[0].index),0,0);}
#line 1796 "y.tab.c"
    break;

  case 41:
#line 180 "projet.y"
                                        {gencode("write",(yyvsp[0].index),0,0);
                                        ts_supprtempo();}
#line 1803 "y.tab.c"
    break;

  case 42:
#line 184 "projet.y"
                                        {gencode("A",(yyvsp[0].index),0,0);}
#line 1809 "y.tab.c"
    break;

  case 43:
#line 186 "projet.y"
                                        {gencode("B",0,0,0);}
#line 1815 "y.tab.c"
    break;

  case 44:
#line 188 "projet.y"
                                        {gencode("C",0,0,0);}
#line 1821 "y.tab.c"
    break;

  case 45:
#line 190 "projet.y"
                                        {gencode("D",0,0,0);}
#line 1827 "y.tab.c"
    break;

  case 46:
#line 192 "projet.y"
                                        {gencode("E",(yyvsp[0].index),0,0);}
#line 1833 "y.tab.c"
    break;

  case 47:
#line 194 "projet.y"
                                        {gencode("F",0,0,0);}
#line 1839 "y.tab.c"
    break;

  case 48:
#line 197 "projet.y"
                                    {;}
#line 1845 "y.tab.c"
    break;

  case 49:
#line 198 "projet.y"
                                    {;}
#line 1851 "y.tab.c"
    break;

  case 50:
#line 199 "projet.y"
                                    {;}
#line 1857 "y.tab.c"
    break;

  case 51:
#line 202 "projet.y"
                                    {(yyval.index) = get_index((yyvsp[0].id),"GLOBAL");}
#line 1863 "y.tab.c"
    break;

  case 52:
#line 203 "projet.y"
                                    {;}
#line 1869 "y.tab.c"
    break;

  case 53:
#line 206 "projet.y"
                                    {(yyval.explist).nbexp = 1;
                                    (yyval.explist).listeexp = malloc(sizeof(int));
                                    ((yyval.explist).listeexp)[0] = (yyvsp[0].index);}
#line 1877 "y.tab.c"
    break;

  case 54:
#line 210 "projet.y"
                                    {(yyval.explist).nbexp = (yyvsp[0].explist).nbexp + 1;
                                    (yyval.explist).listeexp = malloc((yyval.explist).nbexp*sizeof(int));
                                    for(int i=0;i<(yyvsp[0].explist).nbexp;i++){
                                        ((yyval.explist).listeexp)[i] = ((yyvsp[0].explist).listeexp)[i];}
                                    ((yyval.explist).listeexp)[(yyvsp[0].explist).nbexp] = (yyvsp[-2].index);}
#line 1887 "y.tab.c"
    break;

  case 55:
#line 217 "projet.y"
                                    {(yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                    gencode("aff2",(yyval.index),(yyvsp[0].value),0);}
#line 1894 "y.tab.c"
    break;

  case 56:
#line 219 "projet.y"
                                    {(yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                    gencode("aff2",(yyval.index),(yyvsp[0].value),0);}
#line 1901 "y.tab.c"
    break;

  case 57:
#line 221 "projet.y"
                                    {(yyval.index) = (yyvsp[-1].index);}
#line 1907 "y.tab.c"
    break;

  case 58:
#line 223 "projet.y"
                                    {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index)); // Faire erreur sinon
                                    if(a == 0 && b == 0){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("add",(yyval.index),(yyvsp[-2].index),(yyvsp[0].index));}
                                    }
#line 1917 "y.tab.c"
    break;

  case 59:
#line 228 "projet.y"
                                    {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index));
                                    if(a == 0 && b == 0){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("mul",(yyval.index),(yyvsp[-2].index),(yyvsp[0].index));}
                                    }
#line 1927 "y.tab.c"
    break;

  case 60:
#line 233 "projet.y"
                                    {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index));
                                    if(a == 0 && b == 0){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("sub",(yyval.index),(yyvsp[-2].index),(yyvsp[0].index));}
                                    }
#line 1937 "y.tab.c"
    break;

  case 61:
#line 238 "projet.y"
                                    {int a = ts_type((yyvsp[0].index));
                                    if(a == 0){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("sub",(yyval.index),0,(yyvsp[0].index));}
                                    }
#line 1947 "y.tab.c"
    break;

  case 62:
#line 243 "projet.y"
                                    {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index));
                                    if(a == 0 && b == 0){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("div",(yyval.index),(yyvsp[-2].index),(yyvsp[0].index));}
                                    }
#line 1957 "y.tab.c"
    break;

  case 63:
#line 248 "projet.y"
                                    {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index));
                                    if(a == 0 && b == 0){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("pow",(yyval.index),(yyvsp[-2].index),(yyvsp[0].index));}
                                    }
#line 1967 "y.tab.c"
    break;

  case 64:
#line 253 "projet.y"
                                    {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index));
                                    if(a == 0 && b == 0){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        gencode("slt",(yyval.index),(yyvsp[-2].index),(yyvsp[0].index));}
                                    }
#line 1977 "y.tab.c"
    break;

  case 65:
#line 258 "projet.y"
                                    {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index));
                                    if(a == 0 && b == 0){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        gencode("slt",(yyval.index),(yyvsp[0].index),(yyvsp[-2].index));}
                                    }
#line 1987 "y.tab.c"
    break;

  case 66:
#line 263 "projet.y"
                                    {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index));
                                    if(a == 0 && b == 0){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("aff1",(yyval.index)+1,(yyvsp[0].index),0);
                                        gencode("infe",(yyval.index),(yyvsp[-2].index),(yyval.index)+1);}
                                    }
#line 1999 "y.tab.c"
    break;

  case 67:
#line 270 "projet.y"
                                     {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index));
                                    if(a == 0 && b == 0){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("aff1",(yyval.index)+1,(yyvsp[-2].index),0);
                                        gencode("infe",(yyval.index),(yyvsp[0].index),(yyval.index)+1);}
                                    }
#line 2011 "y.tab.c"
    break;

  case 68:
#line 277 "projet.y"
                                    {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index));
                                    if(a == 0 && b == 0){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("aff1",(yyval.index)+2,(yyvsp[-2].index),0);
                                        gencode("aff1",(yyval.index)+3,(yyvsp[0].index),0);
                                        gencode("infe",(yyval.index),(yyval.index)+2,(yyvsp[0].index));
                                        gencode("infe",(yyval.index)+1,(yyval.index)+3,(yyvsp[-2].index));
                                        gencode("and",(yyval.index),(yyval.index),(yyval.index)+1);}
                                    }
#line 2028 "y.tab.c"
    break;

  case 69:
#line 289 "projet.y"
                                     {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index));
                                    if(a == 0 && b == 0){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("aff1",(yyval.index)+2,(yyvsp[-2].index),0);
                                        gencode("aff1",(yyval.index)+3,(yyvsp[0].index),0);
                                        gencode("infe",(yyval.index),(yyval.index)+2,(yyvsp[0].index));
                                        gencode("infe",(yyval.index)+1,(yyval.index)+3,(yyvsp[-2].index));
                                        gencode("and",(yyval.index),(yyval.index),(yyval.index)+1);
                                        gencode("nor",(yyval.index),(yyval.index),0);}
                                    }
#line 2046 "y.tab.c"
    break;

  case 70:
#line 302 "projet.y"
                                    {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index));
                                    if(a == 1 && b == 1){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        gencode("and",(yyval.index),(yyvsp[-2].index),(yyvsp[0].index));}
                                    }
#line 2056 "y.tab.c"
    break;

  case 71:
#line 307 "projet.y"
                                    {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index));
                                    if(a == 1 && b == 1){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        gencode("or",(yyval.index),(yyvsp[-2].index),(yyvsp[0].index));}
                                    }
#line 2066 "y.tab.c"
    break;

  case 72:
#line 312 "projet.y"
                                    {int a = ts_type((yyvsp[-2].index)); int b = ts_type((yyvsp[0].index));
                                    if(a == 1 && b == 1){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        gencode("xor",(yyval.index),(yyvsp[-2].index),(yyvsp[0].index));}
                                    }
#line 2076 "y.tab.c"
    break;

  case 73:
#line 317 "projet.y"
                                    {int a = ts_type((yyvsp[0].index));
                                    if(a == 1){
                                        (yyval.index) = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        gencode("nor",(yyval.index),(yyvsp[0].index),0);}
                                    }
#line 2086 "y.tab.c"
    break;

  case 74:
#line 323 "projet.y"
                                    {;}
#line 2092 "y.tab.c"
    break;

  case 75:
#line 324 "projet.y"
                                    {;}
#line 2098 "y.tab.c"
    break;

  case 76:
#line 325 "projet.y"
                                    {genbalise((yyvsp[-2].id),1);
                                    int a = fct_typeReturn((yyvsp[-2].id));
                                    if(a != 2){
                                        (yyval.index) = ts_index();}}
#line 2107 "y.tab.c"
    break;

  case 77:
#line 329 "projet.y"
                                    {(yyval.index) = get_index((yyvsp[-3].id),"GLOBAL");
                                    ts_supprtempo();}
#line 2114 "y.tab.c"
    break;

  case 78:
#line 331 "projet.y"
                                    {(yyval.index) = get_index((yyvsp[0].id),"GLOBAL");}
#line 2120 "y.tab.c"
    break;


#line 2124 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 334 "projet.y"


void yyerror (const char *s) {
    fprintf(stderr, "[Yacc] error: %s\n", s);
}

int main(int argc, char * argv[])
{
		int valeur_parser = 0;
		if (argc>0)
		{
			valeur_parser = parser(argc, argv);
		}
		if (valeur_parser == -1)
		{
			return 0;
		}
		//#ifdef YYDEBUG // à enlever après debuggage
		//yydebug = 1;	// à enlever après debuggage
		//#endif				// à enlever après debuggage
    ts_init();
    yyparse();
		option(valeur_parser, argv);
		//printf("DONE\n");  // à enlever après debuggage
		return 0;
}
