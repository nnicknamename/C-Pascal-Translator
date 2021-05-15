/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "syntaxique.y" /* yacc.c:339  */

    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdarg.h>
    #include "compilateurE/generator.h"   
    #include "type_comparator.h"
    #define YYERROR_VERBOSE
    char * convert_assignment(char * lvalue, int  ASSIGNMENTOP);
    char* concat(const char * args,...);
    void yyerror(const char *s);
    extern int yylex();
    extern int yyparse();
    extern int line;
    extern FILE *yyin;
    char *r="qsdsdf";
    char lang;
    FILE *out;


#line 87 "syntaxique.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "syntaxique.tab.h".  */
#ifndef YY_YY_SYNTAXIQUE_TAB_H_INCLUDED
# define YY_YY_SYNTAXIQUE_TAB_H_INCLUDED
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
    DEFINE = 258,
    INCLUDE = 259,
    AUTO = 260,
    STRUCT = 261,
    DOUBLE = 262,
    INT = 263,
    LONG = 264,
    SHORT = 265,
    CHAR = 266,
    FLOAT = 267,
    CONST = 268,
    SIGNED = 269,
    SIZEOF = 270,
    TYPEDEF = 271,
    RETURN = 272,
    VOID = 273,
    STATIC = 274,
    UNSIGNED = 275,
    ENUM = 276,
    EXTERN = 277,
    REGISTER = 278,
    UNION = 279,
    VOLATILE = 280,
    WHILE = 281,
    DO = 282,
    FOR = 283,
    IF = 284,
    ELSE = 285,
    SWITCH = 286,
    CASE = 287,
    BREAK = 288,
    DEFAULT = 289,
    GOTO = 290,
    CONTINUE = 291,
    VALINT = 292,
    VALREAL = 293,
    VALCHAR = 294,
    VALSTR = 295,
    ID = 296,
    ADD = 297,
    MINUS = 298,
    MULT = 299,
    DIVIDE = 300,
    MOD = 301,
    INCR = 302,
    DECR = 303,
    EQUAL = 304,
    DIF = 305,
    SUP = 306,
    INF = 307,
    SUPEQ = 308,
    INFEQ = 309,
    AND = 310,
    OR = 311,
    NOT = 312,
    BAND = 313,
    BOR = 314,
    BXOR = 315,
    BOC = 316,
    LSHIFT = 317,
    RSHIFT = 318,
    ASSADD = 319,
    ASSMINUS = 320,
    ASSMULT = 321,
    ASSDIVIDE = 322,
    ASSMOD = 323,
    ASSBAND = 324,
    ASSBOR = 325,
    ASSBXOR = 326,
    ASSLSHIFT = 327,
    ASSRSHIFT = 328,
    EL = 329,
    HEAD = 330,
    END = 331
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 66 "syntaxique.y" /* yacc.c:355  */

  struct {
    int nb_short;
    int nb_long;
    int sign;
  }mod_type;
  struct {
    char* preop;
    char* op;
    char* postop;
  }op_type;
  char *code;
  int t_val;

#line 219 "syntaxique.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAXIQUE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 236 "syntaxique.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   725

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  183
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  316

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    87,     2,     2,     2,     2,
      78,    79,     2,     2,    85,     2,    82,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,     2,
       2,    77,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,     2,    84,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    83,    84,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    96,    97,    99,   101,   103,   105,
     106,   109,   110,   111,   113,   115,   116,   119,   122,   125,
     126,   127,   130,   131,   132,   134,   135,   138,   140,   141,
     143,   144,   146,   147,   148,   149,   150,   151,   152,   153,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     168,   171,   172,   173,   174,   177,   178,   181,   182,   185,
     187,   188,   190,   192,   195,   196,   199,   202,   203,   206,
     207,   210,   213,   216,   219,   222,   223,   224,   227,   231,
     232,   233,   234,   237,   240,   241,   242,   243,   244,   247,
     248,   249,   252,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   278,   279,   282,   283,   284,   289,
     290,   293,   294,   297,   298,   299,   300,   303,   304,   305,
     306,   307,   310,   311,   312,   313,   314,   315,   318,   319,
     322,   323,   324,   325,   326,   327,   330,   331,   332,   333,
     336,   337,   338,   339,   341,   342,   344,   345,   346,   347,
     350,   351,   352,   353,   356,   357,   358,   359,   362,   363,
     364,   365,   366,   367
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DEFINE", "INCLUDE", "AUTO", "STRUCT",
  "DOUBLE", "INT", "LONG", "SHORT", "CHAR", "FLOAT", "CONST", "SIGNED",
  "SIZEOF", "TYPEDEF", "RETURN", "VOID", "STATIC", "UNSIGNED", "ENUM",
  "EXTERN", "REGISTER", "UNION", "VOLATILE", "WHILE", "DO", "FOR", "IF",
  "ELSE", "SWITCH", "CASE", "BREAK", "DEFAULT", "GOTO", "CONTINUE",
  "VALINT", "VALREAL", "VALCHAR", "VALSTR", "ID", "ADD", "MINUS", "MULT",
  "DIVIDE", "MOD", "INCR", "DECR", "EQUAL", "DIF", "SUP", "INF", "SUPEQ",
  "INFEQ", "AND", "OR", "NOT", "BAND", "BOR", "BXOR", "BOC", "LSHIFT",
  "RSHIFT", "ASSADD", "ASSMINUS", "ASSMULT", "ASSDIVIDE", "ASSMOD",
  "ASSBAND", "ASSBOR", "ASSBXOR", "ASSLSHIFT", "ASSRSHIFT", "EL", "HEAD",
  "END", "'='", "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'", "','",
  "':'", "'#'", "$accept", "CODE", "GLOBAL", "SIZEOFDEF", "GOTODEF",
  "ENUMDEF", "UNIONDEF", "UNIONARGS", "ENUMARGS", "LABEL", "INCLUDES",
  "DEFINES", "FUNCTION", "LVALUE", "ARGS", "TYPEDEFINITION", "STRUCTURE",
  "DECLARATIONSTRUCTURE", "X", "LOCAL", "LINE", "SWITCHCOND",
  "SWITCHINSIDE", "CASEAFTER", "CASE1", "CASE2", "DEFAULT1", "DEFAULT2",
  "FORLOOP", "EXPRESSION", "CODEBLOCK", "CONDITIONALS", "CONDCODE",
  "WHILELOOP", "DOWHILE", "GLOBALDECLARATION", "DECLARATION",
  "SDEFINITION", "SASSIGNMENT", "GLOBALDEFINITION", "GLOBALASSIGNMENT",
  "GLOBALOPERATION", "DEFINITION", "ASSIGNMENT", "ASSIGNMENTOP",
  "OPERATION", "NAME", "RVALUE", "IDS", "STAR", "OPERATOR", "ARITHMETIC",
  "RELATIONAL", "LOGICAL", "BITWISE", "VALUE", "TYPE", "C", "B",
  "MODIFIER", "VISIBILITY", "BASICTYPE", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    61,    40,    41,
      91,    93,    46,   123,   125,    44,    58,    35
};
# endif

#define YYPACT_NINF -284

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-284)))

#define YYTABLE_NINF -184

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     116,  -284,    31,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,   -40,   662,  -284,  -284,  -284,    54,  -284,  -284,    73,
    -284,  -284,    15,   108,   116,    38,    59,    70,  -284,  -284,
    -284,    74,    87,    98,    33,   681,   681,   681,   700,    93,
     451,    33,    33,    99,   101,   146,   -27,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,    62,  -284,    78,   104,  -284,
      33,  -284,  -284,  -284,   700,  -284,   700,   700,   155,  -284,
    -284,  -284,  -284,   103,    33,    33,   478,   147,   478,  -284,
     123,   532,  -284,  -284,   113,  -284,   114,  -284,  -284,   163,
     638,   251,  -284,  -284,   478,  -284,   195,   206,   168,    33,
    -284,  -284,  -284,  -284,   125,    33,   147,  -284,  -284,   328,
     139,  -284,   554,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,   478,  -284,  -284,  -284,  -284,
     463,  -284,   130,    34,   138,   182,  -284,   508,  -284,   195,
    -284,   328,  -284,   148,    33,   149,   -44,   104,  -284,  -284,
     -53,  -284,  -284,   328,  -284,   234,     2,  -284,   328,   251,
    -284,   163,  -284,   166,  -284,   576,   195,   158,   184,  -284,
     155,    33,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,   478,  -284,   478,  -284,   186,   638,  -284,
     328,   239,   206,  -284,   199,   328,   208,  -284,   451,   230,
     318,   231,   232,   235,   238,   273,   241,    71,   239,   242,
     244,   245,  -284,   246,   247,   260,   239,   239,   239,   271,
     239,   239,   239,   239,  -284,   208,   478,  -284,   272,   478,
    -284,  -284,   321,   451,   478,   451,  -284,  -284,  -284,  -284,
     264,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,   -24,   265,  -284,   328,  -284,
      19,   274,   275,    24,   281,  -284,   478,   478,   318,   478,
     451,   318,   278,   328,   265,  -284,    26,   289,   334,    56,
     293,   451,   318,   251,   282,   285,    56,  -284,   353,  -284,
    -284,   313,  -284,   307,   397,  -284,  -284,  -284,   353,  -284,
     311,   397,   314,  -284,  -284,   315
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     183,   174,     0,   179,   178,   171,   170,   181,   180,   165,
     172,     0,   183,   182,   176,   173,     0,   177,   175,     0,
     164,     3,     0,     0,   183,     0,     0,     0,     5,     6,
       7,     0,     0,     0,     0,   183,   183,   183,   169,     0,
     183,     0,     0,     0,     0,     0,     0,     1,     4,    11,
      12,    13,     9,    10,     8,    30,   132,    91,    83,    90,
       0,   162,   161,   160,   169,   163,   169,   169,   183,   156,
     157,   158,   159,    30,     0,     0,     0,     0,     0,   123,
     125,     0,   118,   124,     0,   117,     0,    36,    35,     0,
      20,     0,    26,    25,     0,   131,     0,   183,     0,     0,
      29,   168,   167,   166,     0,     0,     0,   119,   120,   116,
     130,   126,     0,   121,   122,   138,   137,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,    14,     0,   133,   134,   135,   136,
       0,    15,    22,     0,     0,     0,    27,     0,    96,     0,
      98,    93,    97,     0,     0,     0,    91,    89,    37,    41,
       0,   129,   115,   114,   128,   125,     0,   101,   100,     0,
      17,     0,    18,     0,    31,     0,     0,     0,    34,    92,
     183,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   103,     0,   127,     0,    23,    21,    20,    95,
      94,    42,   183,    39,    40,   102,    99,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    42,     0,
       0,     0,    56,     0,     0,     0,    42,    42,    42,     0,
      42,    42,    42,    42,    75,    74,     0,    33,     0,     0,
      80,    79,     0,     0,     0,     0,    52,    16,    59,    24,
       0,    55,    57,    58,    54,    53,    28,    43,    49,    48,
      50,    44,    45,    46,    47,   125,    84,    87,    86,    51,
       0,     0,     0,     0,     0,    76,     0,     0,     0,     0,
       0,     0,     0,    88,    85,    81,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,    64,
      82,     0,    78,     0,    71,    60,    61,    62,     0,    66,
       0,    68,    70,    65,    73,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -284,   371,  -284,     3,  -284,    52,    68,   202,   226,  -284,
    -284,  -284,  -284,   -34,   221,    69,    67,   248,   243,   -32,
    -198,  -284,   129,   118,  -283,  -223,  -284,  -284,  -284,  -194,
    -208,  -284,  -261,  -284,  -284,  -284,  -284,   150,  -284,   330,
    -284,  -133,  -129,  -284,  -284,   -39,  -284,  -284,   -49,   375,
    -146,  -284,  -284,  -284,  -284,   -87,    10,    -8,   228,    -3,
      79,  -284
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,    24,    79,   219,   220,   221,   144,   143,   222,
      28,    29,    30,   165,   153,   223,   224,   104,   160,   225,
     226,   227,   295,   307,   296,   297,   298,   299,   228,   229,
     230,   231,   242,   232,   233,    33,   234,   266,   267,    58,
      59,   151,   235,   167,   193,   168,    82,    83,    84,    60,
     135,   136,   137,   138,   139,    85,   236,    35,    65,    36,
      37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    81,   241,    25,   146,   176,    80,    87,    88,   152,
      34,   166,   240,    92,   238,   308,   175,   285,    45,    46,
     288,   180,    42,   113,   114,   308,   100,    25,   111,   176,
      64,   302,   181,    96,    34,    66,    98,   109,    40,   112,
     107,   108,    80,   200,    80,    61,    62,    63,    93,   272,
      86,   274,    26,   276,   176,   147,    64,   161,    64,    64,
      80,    66,   152,    66,    66,   156,   206,    32,    27,    31,
     241,   159,    39,   241,    55,   309,    26,    56,   105,    41,
     240,   194,   196,   240,   241,   309,   287,   195,   293,   152,
     294,    32,    27,    31,   240,    43,   163,   301,   278,   150,
     145,    80,   314,   281,   195,   290,   312,   154,    47,   195,
     270,   195,    49,   315,    44,   273,    -2,    67,   170,   171,
     178,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    50,    13,    14,    15,    16,    17,    18,
      19,    20,    94,    67,    51,    67,    67,   159,    52,  -130,
     286,    94,   150,   106,   205,    96,    97,   249,    98,    80,
       1,    53,     3,     4,     5,     6,     7,     8,     9,    10,
     113,   114,    54,    13,    14,    15,    68,    17,    18,   150,
      20,  -130,    89,    94,    90,   106,   250,    91,   110,    99,
     105,   140,    21,   141,   257,   258,   259,   268,   261,   262,
     263,   264,   265,    22,   142,   155,   303,   169,   145,   158,
      11,     1,   154,     3,     4,     5,     6,     7,     8,     9,
      10,   106,   172,   173,    13,    14,    15,   177,    17,    18,
     179,    20,    69,    70,    71,    72,   148,   283,   268,   -38,
     198,   201,    80,   265,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   208,    13,    14,    15,
      16,    17,    18,    19,    20,   209,   210,   211,   212,   202,
     213,   171,   214,   149,   215,   216,    69,    70,    71,    72,
     217,   113,   114,    56,   181,   -32,    74,    75,    69,    70,
      71,    72,   101,   195,   102,   103,    76,    77,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   239,   243,
     244,   192,   246,   245,   247,   248,   251,    78,   252,   253,
     254,   255,   218,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,   208,    13,    14,    15,    16,
      17,    18,    19,    20,   256,   260,   269,   271,   275,   280,
     277,   214,   279,   215,   216,    69,    70,    71,    72,   217,
     282,   289,    56,   291,   292,    74,    75,   300,   304,   305,
     115,   116,   117,   118,   119,    76,    77,   120,   121,   122,
     123,   124,   125,   126,   127,   293,   128,   129,   130,   131,
     132,   133,   310,   311,   218,    48,    78,   197,   -72,   -69,
     207,   218,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,   208,    13,    14,    15,    16,    17,
      18,    19,    20,   237,   204,   306,   313,   284,   203,   157,
     214,    95,   215,   216,    69,    70,    71,    72,   217,     0,
       0,    56,     0,     0,    74,    75,     0,     0,     0,     0,
       0,     0,     0,     0,    76,    77,     1,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     0,     0,    13,
      14,    15,     0,    17,    18,    78,    20,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,    70,
      71,    72,    73,    11,     0,    56,     0,     0,    74,    75,
      69,    70,    71,    72,    73,     0,     0,    56,    76,    77,
      74,    75,     0,     0,     0,    69,    70,    71,    72,    73,
      76,    77,    56,     0,     0,    74,    75,     0,     0,    78,
       0,     0,     0,     0,     0,    76,    77,     0,     0,     0,
       0,    78,   164,     0,     0,     0,     0,     0,     0,     0,
     115,   116,   117,   118,   119,     0,    78,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,   129,   130,   131,
     132,   133,     0,     0,   115,   116,   117,   118,   119,     0,
       0,   120,   121,   122,   123,   124,   125,   126,   127,   174,
     128,   129,   130,   131,   132,   133,   115,   116,   117,   118,
     119,     0,     0,   120,   121,   122,   123,   124,   125,   126,
     127,   134,   128,   129,   130,   131,   132,   133,   115,   116,
     117,   118,   119,     0,     0,   120,   121,   122,   123,   124,
     125,   126,   127,   162,   128,   129,   130,   131,   132,   133,
       0,     0,     0,     1,     0,     3,     4,     5,     6,     7,
       8,     9,    10,     0,     0,   199,    13,    14,    15,     0,
      17,    18,     0,    20,     0,     0,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,  -183,
      13,    14,    15,     0,    17,    18,     1,    20,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,    13,
      14,    15,     0,    17,    18,     1,    20,     0,     0,     5,
       6,     0,     0,     9,    10,     0,     0,     0,     0,    14,
      15,     0,    17,    18,     0,    20
};

static const yytype_int16 yycheck[] =
{
      34,    40,   210,     0,    91,   151,    40,    41,    42,    96,
       0,   140,   210,    40,   208,   298,   149,   278,     3,     4,
     281,    74,    12,    47,    48,   308,    60,    24,    77,   175,
      38,   292,    85,    77,    24,    38,    80,    76,    78,    78,
      74,    75,    76,   176,    78,    35,    36,    37,    75,   243,
      40,   245,     0,    77,   200,    94,    64,   106,    66,    67,
      94,    64,   149,    66,    67,    99,   195,     0,     0,     0,
     278,   105,    41,   281,    41,   298,    24,    44,    68,    12,
     278,    79,   169,   281,   292,   308,   280,    85,    32,   176,
      34,    24,    24,    24,   292,    41,   135,   291,    79,    96,
      90,   135,   310,    79,    85,    79,   304,    97,     0,    85,
     239,    85,    74,   311,    41,   244,     0,    38,    84,    85,
     154,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    74,    18,    19,    20,    21,    22,    23,
      24,    25,    80,    64,    74,    66,    67,   181,    74,    78,
     279,    80,   149,    82,   193,    77,    78,    86,    80,   193,
       5,    74,     7,     8,     9,    10,    11,    12,    13,    14,
      47,    48,    74,    18,    19,    20,    83,    22,    23,   176,
      25,    78,    83,    80,    83,    82,   218,    41,    41,    85,
     180,    78,    76,    79,   226,   227,   228,   236,   230,   231,
     232,   233,   236,    87,    41,    37,   293,    77,   198,    84,
      15,     5,   202,     7,     8,     9,    10,    11,    12,    13,
      14,    82,    84,    41,    18,    19,    20,    79,    22,    23,
      81,    25,    37,    38,    39,    40,    41,   276,   277,    84,
      74,    83,   276,   277,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    85,
      31,    85,    33,    78,    35,    36,    37,    38,    39,    40,
      41,    47,    48,    44,    85,    79,    47,    48,    37,    38,
      39,    40,    64,    85,    66,    67,    57,    58,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    78,    78,
      78,    77,    74,    78,    41,    74,    74,    78,    74,    74,
      74,    74,    83,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    84,    74,    74,    26,    84,    74,
      85,    33,    78,    35,    36,    37,    38,    39,    40,    41,
      79,    83,    44,    74,    30,    47,    48,    74,    86,    84,
      42,    43,    44,    45,    46,    57,    58,    49,    50,    51,
      52,    53,    54,    55,    56,    32,    58,    59,    60,    61,
      62,    63,    79,    86,    83,    24,    78,   171,    84,    84,
     198,    83,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   202,   181,   296,   308,   277,   180,    99,
      33,    56,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    44,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    20,    -1,    22,    23,    78,    25,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    15,    -1,    44,    -1,    -1,    47,    48,
      37,    38,    39,    40,    41,    -1,    -1,    44,    57,    58,
      47,    48,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      57,    58,    44,    -1,    -1,    47,    48,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    -1,    78,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    -1,    42,    43,    44,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    81,
      58,    59,    60,    61,    62,    63,    42,    43,    44,    45,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    79,    58,    59,    60,    61,    62,    63,    42,    43,
      44,    45,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    79,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    79,    18,    19,    20,    -1,
      22,    23,    -1,    25,    -1,    -1,    -1,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    41,
      18,    19,    20,    -1,    22,    23,     5,    25,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    18,
      19,    20,    -1,    22,    23,     5,    25,    -1,    -1,     9,
      10,    -1,    -1,    13,    14,    -1,    -1,    -1,    -1,    19,
      20,    -1,    22,    23,    -1,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    18,    19,    20,    21,    22,    23,    24,
      25,    76,    87,    89,    90,    91,    93,    94,    98,    99,
     100,   103,   104,   123,   144,   145,   147,   148,   149,    41,
      78,   104,   144,    41,    41,     3,     4,     0,    89,    74,
      74,    74,    74,    74,    74,    41,    44,   101,   127,   128,
     137,   144,   144,   144,   145,   146,   147,   148,    83,    37,
      38,    39,    40,    41,    47,    48,    57,    58,    78,    91,
     101,   133,   134,   135,   136,   143,   144,   101,   101,    83,
      83,    41,    40,    75,    80,   137,    77,    78,    80,    85,
     101,   146,   146,   146,   105,   144,    82,   101,   101,   133,
      41,   136,   133,    47,    48,    42,    43,    44,    45,    46,
      49,    50,    51,    52,    53,    54,    55,    56,    58,    59,
      60,    61,    62,    63,    79,   138,   139,   140,   141,   142,
      78,    79,    41,    96,    95,   144,   143,   133,    41,    78,
      91,   129,   143,   102,   144,    37,   101,   127,    84,   101,
     106,   136,    79,   133,    79,   101,   130,   131,   133,    77,
      84,    85,    84,    41,    81,   129,   138,    79,   101,    81,
      74,    85,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    77,   132,    79,    85,   143,    96,    74,    79,
     129,    83,    85,   105,   106,   133,   130,    95,    17,    26,
      27,    28,    29,    31,    33,    35,    36,    41,    83,    92,
      93,    94,    97,   103,   104,   107,   108,   109,   116,   117,
     118,   119,   121,   122,   124,   130,   144,   102,   117,    78,
     108,   118,   120,    78,    78,    78,    74,    41,    74,    86,
     107,    74,    74,    74,    74,    74,    84,   107,   107,   107,
      74,   107,   107,   107,   107,   101,   125,   126,   133,    74,
     130,    26,   117,   130,   117,    84,    77,    85,    79,    78,
      74,    79,    79,   133,   125,   120,   130,   117,   120,    83,
      79,    74,    30,    32,    34,   110,   112,   113,   114,   115,
      74,   117,   120,   143,    86,    84,   110,   111,   112,   113,
      79,    86,   108,   111,   118,   108
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    91,    91,    92,    93,    94,    95,
      95,    96,    96,    96,    97,    98,    98,    99,   100,   101,
     101,   101,   102,   102,   102,   103,   103,   104,   105,   105,
     106,   106,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     109,   110,   110,   110,   110,   111,   111,   112,   112,   113,
     114,   114,   115,   116,   117,   117,   118,   119,   119,   120,
     120,   121,   122,   123,   124,   125,   125,   125,   126,   127,
     127,   127,   127,   128,   129,   129,   129,   129,   129,   130,
     130,   130,   131,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   134,   134,   135,   135,   135,   136,
     136,   137,   137,   138,   138,   138,   138,   139,   139,   139,
     139,   139,   140,   140,   140,   140,   140,   140,   141,   141,
     142,   142,   142,   142,   142,   142,   143,   143,   143,   143,
     144,   144,   144,   144,   145,   145,   146,   146,   146,   146,
     147,   147,   147,   147,   148,   148,   148,   148,   149,   149,
     149,   149,   149,   149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     4,     4,     2,     5,     5,     4,
       0,     3,     1,     3,     2,     3,     3,     4,     8,     2,
       1,     4,     0,     4,     2,     3,     3,     5,     0,     4,
       3,     1,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     2,     2,     2,     2,     1,     2,     2,     2,
       7,     2,     2,     1,     1,     2,     1,     4,     3,     4,
       3,     2,     3,     9,     1,     1,     3,     5,     7,     1,
       1,     5,     7,     2,     2,     3,     1,     1,     3,     3,
       1,     1,     4,     3,     3,     3,     1,     1,     1,     3,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     1,     1,     2,
       2,     2,     2,     1,     1,     1,     2,     4,     3,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     1,     1,     2,     2,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 3:
#line 83 "syntaxique.y" /* yacc.c:1646  */
    {YYACCEPT;}
#line 1641 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 99 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-1].code),(yyvsp[0].code),NULL);}
#line 1647 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 113 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-1].code),":",NULL);}
#line 1653 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 125 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-1].code),(yyvsp[0].code),NULL);}
#line 1659 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 126 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 1665 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 127 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat("[",(yyvsp[-1].op_type).op,"]",NULL);}
#line 1671 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 248 "syntaxique.y" /* yacc.c:1646  */
    {fprintf(out,"%s \n %s \n %s \n",(yyvsp[0].op_type).preop,(yyvsp[0].op_type).op,(yyvsp[0].op_type).postop);}
#line 1677 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 252 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-2].code),convert_assignment((yyvsp[-2].code),(yyvsp[-1].t_val)),(yyvsp[0].op_type).op,NULL);}
#line 1683 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 255 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=-1;}
#line 1689 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 256 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSADD;}
#line 1695 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 257 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMINUS;}
#line 1701 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 258 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMULT;}
#line 1707 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 259 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSDIVIDE;}
#line 1713 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 260 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMOD;}
#line 1719 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 261 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBAND;}
#line 1725 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 262 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBOR;}
#line 1731 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 263 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBXOR;}
#line 1737 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 264 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSLSHIFT;}
#line 1743 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 265 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSRSHIFT;}
#line 1749 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 267 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op_type).op=concat((yyvsp[-2].op_type).op,(yyvsp[-1].code),(yyvsp[0].op_type).op,NULL);}
#line 1755 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 269 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op_type).op=concat("not ",(yyvsp[0].op_type).op,NULL);(yyval.op_type).preop=strdup((yyvsp[0].op_type).preop);(yyval.op_type).postop=strdup((yyvsp[0].op_type).postop);}
#line 1761 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 270 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op_type).op=strdup((yyvsp[0].code));(yyval.op_type).postop="";(yyval.op_type).preop="";}
#line 1767 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 271 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op_type).op=strdup((yyvsp[0].code));(yyval.op_type).postop="";(yyval.op_type).preop="";}
#line 1773 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 272 "syntaxique.y" /* yacc.c:1646  */
    {sprintf((yyval.op_type).preop,"%s := %s + 1",(yyvsp[0].code),(yyvsp[0].code));(yyval.op_type).op=strdup((yyvsp[0].code));(yyval.op_type).postop="";}
#line 1779 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 273 "syntaxique.y" /* yacc.c:1646  */
    {sprintf((yyval.op_type).preop,"%s := %s - 1",(yyvsp[0].code),(yyvsp[0].code));(yyval.op_type).op=strdup((yyvsp[0].code));(yyval.op_type).postop="";}
#line 1785 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 274 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op_type).postop=concat((yyvsp[-1].code)," := 1 +",(yyvsp[-1].code),NULL);(yyval.op_type).op=strdup((yyvsp[-1].code));(yyval.op_type).preop="";}
#line 1791 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 275 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op_type).postop=concat((yyvsp[-1].code)," := 1 -",(yyvsp[-1].code),NULL);(yyval.op_type).op=strdup((yyvsp[-1].code));(yyval.op_type).preop="";}
#line 1797 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 279 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 1803 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 293 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat("^",(yyvsp[0].code),NULL);}
#line 1809 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 294 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="^";}
#line 1815 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 297 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 1821 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 298 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 1827 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 299 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 1833 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 300 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 1839 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 303 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" - ";}
#line 1845 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 304 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" + ";}
#line 1851 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 305 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" * ";}
#line 1857 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 306 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" / ";}
#line 1863 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 307 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" mod ";}
#line 1869 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 310 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" = ";}
#line 1875 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 311 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" <> ";}
#line 1881 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 312 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" > ";}
#line 1887 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 313 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" < ";}
#line 1893 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 314 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" >= ";}
#line 1899 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 315 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" <= ";}
#line 1905 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 318 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="and";}
#line 1911 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 319 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="or";}
#line 1917 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 330 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 1923 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 331 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 1929 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 332 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 1935 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 333 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 1941 "syntaxique.tab.c" /* yacc.c:1646  */
    break;


#line 1945 "syntaxique.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 370 "syntaxique.y" /* yacc.c:1906  */


char * convert_assignment(char * lvalue, int  ASSIGNMENTOP){
char* res;
  switch(ASSIGNMENTOP){
    case -1 :       
      res=strdup(":=");  
    break;
    case ASSADD :    
      res=concat(":= ",lvalue,"+ ",NULL);
    break;
    case ASSMINUS : 
      res=concat(":= ",lvalue,"- ",NULL);   
    break;   
    case ASSMULT :  
      res=concat(":= ",lvalue,"* ",NULL);   
    break;   
    case ASSDIVIDE : 
      res=concat(":= ",lvalue,"/ ",NULL);  
    break;   
    case ASSMOD :    
      res=concat(":= ",lvalue,"mod ",NULL); 
    break; 
    case ASSBAND :   
      res=concat(":= ",lvalue,"& ",NULL);   
    break; 
    case ASSBOR :    
      res=concat(":= ",lvalue,"| ",NULL);   
    break;   
    case ASSBXOR :   
      res=concat(":= ",lvalue,"^ ",NULL);   
    break;   
    case ASSLSHIFT : 
      res=concat(":= ",lvalue,"<< ",NULL);  
    break;   
    case ASSRSHIFT : 
      res=concat(":= ",lvalue,">> ",NULL);  
    break;   
  }
  return res;
}

char* concat(const char * args,...){
  va_list valist;
  va_list valist2;
  va_start(valist, args);
  va_copy(valist2, valist);
  char *arg=args;
  int length=0;
  while(arg!=NULL){
    length+=sizeof(*arg);
    arg=va_arg(valist, char*);
  };  
  char *res=malloc(length);
  va_end(valist);
  arg=strdup(args);
  while(arg!=NULL){
    strcat(res,arg);
    arg=va_arg(valist2, char*);
  };
  va_end(valist2);
  return res;
}

void yyerror(const char *s) {
  char *c;
  char str[12];
  sprintf(str, "%d", line);
  c=concat(s," at line ",str," .",NULL);
  //printf("%s\n",c);
  generateError(c,lang);
}

int main(int argc, char *argv[]) {
  FILE *myfile = fopen(argv[1], "r");  //fichier a compiler
  out = fopen(argv[2], "w+");//ficher du resultat de la traduction
  if(!strcmp(argv[3],"en")){
      lang='e';
  }else{
    if(!strcmp(argv[3],"fr")){
      lang='f';
    }
  }
  if (!myfile) {
    printf("file not found");
    return -1;
  }
  yyin = myfile;
  yyparse();
  return 0;
}
