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
    extern int line;
    char * convert_assignment(char * lvalue, int  ASSIGNMENTOP);
    #include "semantic.h"
    #include "type_comparator.h"
    #include "compilateurE/generator.h"   
    #define YYERROR_VERBOSE

    //s_list init_list;
    s_list * insert_s_list(s_list **head,char *operation);
    char* concat(const char * args,...);
    void fprint_s_list(s_list *head,char *separator);
    void init_op_type(op_type *opr);
    void chain_s_list(s_list *list1,s_list *list2);

    void yyerror(const char *s);
    int failed=0;
    extern int yylex();
    extern int yyparse();
    extern FILE *yyin;
    extern id_list *id_table;
    char * out_name;
    char lang;

#line 95 "syntaxique.tab.c" /* yacc.c:339  */

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
    NIL = 329,
    EL = 330,
    HEAD = 331,
    END = 332
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 98 "syntaxique.y" /* yacc.c:355  */

  op_list *op_li;
  opr_type opr;
  decl_op_list dop_list;
  def_list defl;
  decl_list decllist;
  lval_list lvallist;
  lval_def lval;
  nb_modif modif;
  nb_vis vis;
  type_rep rep;
  op_type op;
  local_type loc;
  decl_type decl;
  char *code;
  int t_val;
  s_list *exp;
  int ctr;

#line 233 "syntaxique.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAXIQUE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 250 "syntaxique.tab.c" /* yacc.c:358  */

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
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   848

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  191
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  317

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    88,     2,     2,     2,     2,
      79,    80,     2,     2,    86,     2,    83,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,     2,
       2,    78,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,     2,    85,     2,     2,     2,     2,
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
      75,    76,    77
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   120,   121,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   133,   134,   136,   138,   140,   142,
     143,   146,   147,   148,   150,   152,   153,   156,   159,   159,
     162,   163,   164,   167,   168,   171,   172,   173,   176,   177,
     180,   183,   184,   187,   188,   191,   192,   193,   194,   195,
     196,   197,   198,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   213,   216,   217,   218,   219,   222,   223,
     226,   229,   232,   235,   238,   239,   242,   245,   246,   249,
     250,   253,   256,   259,   262,   265,   275,   276,   278,   279,
     282,   283,   286,   287,   288,   291,   294,   295,   296,   297,
     298,   301,   302,   303,   306,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   334,   335,   336,   337,
     340,   341,   342,   343,   344,   347,   348,   349,   350,   351,
     352,   355,   356,   359,   360,   361,   362,   363,   364,   367,
     368,   371,   372,   373,   375,   376,   377,   379,   380,   383,
     384,   387,   388,   389,   390,   391,   394,   395,   396,   397,
     398,   400,   401,   402,   403,   404,   406,   407,   408,   411,
     412,   413,   414,   417,   418,   419,   420,   423,   424,   425,
     426,   427
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
  "ASSBAND", "ASSBOR", "ASSBXOR", "ASSLSHIFT", "ASSRSHIFT", "NIL", "EL",
  "HEAD", "END", "'='", "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'",
  "','", "':'", "'#'", "$accept", "CODE", "GLOBAL", "SIZEOFDEF", "GOTODEF",
  "ENUMDEF", "UNIONDEF", "UNIONARGS", "ENUMARGS", "LABEL", "INCLUDES",
  "DEFINES", "FUNCTION", "$@1", "LVALUE", "ARRAYDIM", "ARGS",
  "TYPEDEFINITION", "STRUCTURE", "DECLARATIONSTRUCTURE", "X", "LOCAL",
  "LINE", "SWITCHCOND", "SWITCHINSIDE", "CASEAFTER", "CASE1", "DEFAULT1",
  "DEFAULT2", "FORLOOP", "EXPRESSION", "CODEBLOCK", "CONDITIONALS",
  "CONDCODE", "WHILELOOP", "DOWHILE", "GLOBALDECLARATION", "DECLARATION",
  "SDEFINITION", "SASSIGNMENT", "VALIST", "GLOBALDEFINITION",
  "GLOBALASSIGNMENT", "GLOBALOPERATION", "DEFINITION", "ASSIGNMENT",
  "ASSIGNMENTOP", "OPERATION", "OPERATOR", "ARITHMETIC", "RELATIONAL",
  "LOGICAL", "BITWISE", "NAME", "RVALUE", "ARGDEFINITION", "IDS", "STAR",
  "VALUE", "TYPE", "TWO", "THREE", "MODIFIER", "VISIBILITY", "BASICTYPE", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330,   331,   332,    61,    40,
      41,    91,    93,    46,   123,   125,    44,    58,    35
};
# endif

#define YYPACT_NINF -283

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-283)))

#define YYTABLE_NINF -159

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     109,  -283,   -21,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
     -19,   380,  -283,  -283,  -283,    29,  -283,  -283,    39,  -283,
     106,    93,   109,    47,    51,    65,  -283,  -283,  -283,    75,
      83,    87,   139,   461,   461,   524,    88,   622,   139,   139,
     103,   117,   112,   -26,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,   127,  -283,   -49,   104,  -283,   139,  -283,   461,
     461,   524,  -283,  -283,   524,   524,   461,  -283,  -283,  -283,
    -283,    19,   139,   139,   678,   152,  -283,   678,  -283,   163,
     722,  -283,  -283,   119,  -283,   137,  -283,  -283,   190,   461,
      -2,  -283,  -283,   678,   127,  -283,    16,   153,   139,  -283,
    -283,  -283,  -283,  -283,  -283,   149,   139,   152,  -283,  -283,
     251,   154,  -283,   745,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,   678,  -283,  -283,  -283,
    -283,   634,  -283,   157,   128,   151,   197,  -283,   688,   127,
    -283,    16,  -283,   251,  -283,   461,   161,   104,  -283,  -283,
     -53,  -283,  -283,   251,  -283,   155,  -283,   251,   -13,    -2,
    -283,   190,  -283,   165,  -283,   768,    16,   164,   139,   461,
     139,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,   678,  -283,   678,  -283,   168,   461,  -283,   251,
     159,   180,  -283,   185,   251,   187,  -283,  -283,   461,   241,
    -283,   622,   196,   564,   204,   205,   207,   212,   249,   216,
      80,  -283,  -283,   217,   233,   242,  -283,   243,   244,  -283,
    -283,  -283,   246,  -283,  -283,  -283,  -283,  -283,   230,  -283,
     251,   139,   247,   678,  -283,  -283,   297,   622,   678,   678,
    -283,  -283,  -283,  -283,   322,  -283,  -283,  -283,  -283,  -283,
    -283,   678,   257,   238,  -283,  -283,    -3,   268,   277,    21,
     102,  -283,   230,    97,   139,   564,   678,   622,   564,   270,
      -2,   251,   238,  -283,   105,   281,   334,   172,   130,  -283,
     290,   622,   564,    -2,   280,   283,   172,   339,  -283,  -283,
      -2,  -283,   292,  -283,   286,  -283,  -283,  -283,  -283,   339,
     288,   291,  -283,   403,  -283,  -283,   484
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   183,     0,   188,   187,   180,   179,   190,   189,   181,
       0,     0,   191,   185,   182,     0,   186,   184,     0,     3,
       0,     0,     2,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,   169,     0,   168,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     4,    11,    12,    13,     9,
      10,     8,    31,   160,    94,    83,    93,     0,   166,   174,
       0,   173,   170,   167,   178,     0,    41,   161,   162,   163,
     164,    31,     0,     0,     0,     0,   165,     0,   125,   150,
       0,   120,   149,     0,   119,     0,    39,    38,     0,    20,
       0,    26,    25,     0,    32,   159,     0,     0,     0,    30,
     171,   175,   172,   176,   177,     0,     0,     0,   121,   122,
     118,   158,   151,     0,   123,   124,   131,   130,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,    14,     0,   126,   127,   128,
     129,     0,    15,    22,     0,     0,     0,    27,     0,    33,
      98,     0,   100,    95,    99,    35,    94,    92,    40,    44,
       0,   157,   117,   116,   153,   150,   156,   155,     0,     0,
      17,     0,    18,     0,    34,     0,     0,     0,     0,    41,
       0,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   105,     0,   152,     0,    23,    21,    20,    97,    96,
       0,    37,    42,    43,   104,   154,    19,    45,    35,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    45,    29,     0,     0,     0,    59,     0,     0,    46,
      52,    51,     0,    47,    48,    49,    50,    75,    74,   103,
     102,     0,     0,     0,    80,    79,     0,     0,     0,     0,
      55,    16,    62,    24,     0,    58,    60,    61,    57,    56,
      53,     0,    87,    84,    86,    54,     0,     0,     0,     0,
       0,    76,   101,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    85,    81,     0,     0,    77,     0,     0,    91,
       0,     0,     0,     0,     0,     0,    66,     0,    67,    89,
       0,    82,     0,    78,     0,    45,    63,    64,    65,    69,
      90,     0,    45,    71,    68,    73,    70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -283,   354,  -283,     1,  -283,    26,    62,   181,   206,  -283,
    -283,  -283,  -283,  -283,   -32,   -90,   173,    69,    17,   203,
     213,  -218,  -189,  -283,    99,    74,  -282,  -283,  -283,  -283,
    -195,  -200,  -283,  -207,  -283,  -283,  -283,  -283,   110,  -283,
     116,   299,  -283,  -133,   -92,  -130,  -283,   -28,  -141,  -283,
    -283,  -283,  -283,  -283,  -283,   210,   -56,   352,   -88,    10,
     170,    78,   114,   135,    46
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,    78,   223,   224,   225,   145,   144,   226,
      26,    27,    28,    97,   165,    94,   177,   227,   228,   105,
     160,   209,   229,   230,   295,   308,   296,   297,   298,   231,
     232,   233,   234,   246,   235,   236,    31,   237,   263,   264,
     288,    55,    56,   153,   238,   239,   192,   240,   136,   137,
     138,   139,   140,    81,    82,   168,    83,    57,    84,   241,
      58,    63,    33,    34,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    23,   147,   254,   149,    79,    86,    87,   154,    80,
      32,   166,   176,   245,    91,   309,   242,    30,   175,   112,
      36,    39,   179,    23,   244,    99,    24,   309,    38,    96,
     -28,    10,    32,   180,   176,    67,    68,    69,    70,    30,
     108,   109,    79,   199,    62,    79,   110,    85,    24,   113,
      92,   161,   268,    67,    68,    69,    70,   150,   176,   149,
      37,    79,    25,   154,   166,   148,   156,   193,   283,    29,
      40,   286,    76,   194,   159,   245,   106,   275,   245,    61,
      41,   195,   285,   261,    25,   303,   244,   313,   154,   244,
      76,    29,   245,    44,   316,   151,   302,   152,  -158,   146,
      93,   278,   107,   244,    79,    61,    61,   261,   163,    42,
      43,   315,    10,   167,     1,     2,     3,     4,     5,     6,
       7,     8,    46,     9,    10,    11,    47,    12,    13,    14,
      15,    16,    17,    18,    67,    68,    69,    70,    71,   102,
      48,    53,   103,   104,    72,    73,   201,    59,   159,    64,
      49,   266,   152,    90,    74,    75,   269,   270,    50,  -158,
      79,    93,    51,   107,   204,   178,   167,   253,    60,   272,
      65,    76,    66,    59,    59,    64,    77,   152,    64,    64,
      52,   280,   279,    53,   284,   290,    19,    88,   261,   106,
      98,   261,   289,   111,    60,    60,    65,    20,   141,    65,
      65,    89,   114,   115,   293,   304,   294,   146,    93,   262,
     114,   115,   289,   170,   171,   299,   300,   142,   178,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   100,
     101,   143,   155,   191,   158,   169,   172,   107,   173,    96,
     197,    79,   262,   207,   200,   281,     1,     2,     3,     4,
       5,     6,     7,     8,   171,     9,    10,    11,   211,    12,
      13,    14,    15,    16,    17,    18,   208,   212,   213,   214,
     215,   180,   216,   194,   217,   243,   218,   219,    67,    68,
      69,    70,   220,   247,   248,    53,   249,   250,    72,    73,
     251,   252,   255,   116,   117,   118,   119,   120,    74,    75,
     121,   122,   123,   124,   125,   126,   127,   128,   256,   129,
     130,   131,   132,   133,   134,    76,   261,   257,   258,   259,
      77,   260,   265,   267,   274,   221,   222,     1,     2,     3,
       4,     5,     6,     7,     8,   273,     9,    10,    11,   211,
      12,    13,    14,    15,    16,    17,    18,   276,   212,   213,
     214,   215,   277,   216,   287,   217,   291,   218,   219,    67,
      68,    69,    70,   220,   292,   301,    53,   305,   306,    72,
      73,   293,   311,   312,   300,   221,    45,   196,   206,    74,
      75,   210,   202,   314,   282,     1,     2,     3,     4,     5,
       6,     7,     8,   203,     9,   307,    76,   157,    12,    13,
      14,    77,    16,    17,   205,    95,   221,   271,     1,     2,
       3,     4,     5,     6,     7,     8,   310,     9,    10,    11,
     211,    12,    13,    14,    15,    16,    17,    18,     0,   212,
     213,   214,   215,     0,   216,     0,   217,     0,   218,   219,
      67,    68,    69,    70,   220,     0,     0,    53,     0,     0,
      72,    73,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,     0,     0,     0,     0,     1,     0,     3,     4,
       5,     6,     7,     8,     0,     9,     0,    76,     0,    12,
      13,    14,    77,    16,    17,     0,     0,   221,   -72,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     9,    10,
      11,   211,    12,    13,    14,    15,    16,    17,    18,     0,
     212,   213,   214,   215,     0,   216,     0,   217,     0,   218,
     219,    67,    68,    69,    70,   220,     0,     0,    53,     1,
       0,    72,    73,     5,     6,     0,     0,     0,     9,     0,
       0,    74,    75,    13,    14,     0,    16,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,     0,     0,    77,     0,     0,     0,     0,   221,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     9,    10,
      11,   211,    12,    13,    14,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,   217,     0,   218,
     219,    67,    68,    69,    70,   220,     0,     0,    53,     0,
       0,    72,    73,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,     0,     0,     0,     0,     1,     0,     3,
       4,     5,     6,     7,     8,     0,     9,    10,    76,     0,
      12,    13,    14,    77,    16,    17,     0,     0,   221,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,     0,     0,    53,     0,     0,    72,
      73,    67,    68,    69,    70,    71,     0,     0,    53,    74,
      75,    72,    73,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    10,     0,     0,    76,     0,     0,     0,
       0,    77,     0,     0,     0,     0,     0,     0,    76,     0,
       0,     0,     0,    77,   164,    67,    68,    69,    70,    71,
       0,     0,    53,     0,     0,    72,    73,     0,     0,     0,
     116,   117,   118,   119,   120,    74,    75,   121,   122,   123,
     124,   125,   126,   127,   128,     0,   129,   130,   131,   132,
     133,   134,    76,     0,     0,     0,     0,    77,     0,     0,
       0,     0,     0,     0,   116,   117,   118,   119,   120,     0,
     174,   121,   122,   123,   124,   125,   126,   127,   128,     0,
     129,   130,   131,   132,   133,   134,     0,   116,   117,   118,
     119,   120,     0,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   135,   129,   130,   131,   132,   133,   134,     0,
     116,   117,   118,   119,   120,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   162,   129,   130,   131,   132,
     133,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   198
};

static const yytype_int16 yycheck[] =
{
      32,     0,    90,   221,    94,    37,    38,    39,    96,    37,
       0,   141,   153,   213,    40,   297,   211,     0,   151,    75,
      41,    11,    75,    22,   213,    57,     0,   309,    11,    78,
      79,    15,    22,    86,   175,    37,    38,    39,    40,    22,
      72,    73,    74,   176,    34,    77,    74,    37,    22,    77,
      76,   107,   247,    37,    38,    39,    40,    41,   199,   149,
      79,    93,     0,   151,   194,    93,    98,    80,   275,     0,
      41,   278,    74,    86,   106,   275,    66,    80,   278,    33,
      41,   169,   277,    86,    22,   292,   275,   305,   176,   278,
      74,    22,   292,     0,   312,    79,   291,    96,    79,    89,
      81,    80,    83,   292,   136,    59,    60,    86,   136,     3,
       4,   311,    15,   141,     5,     6,     7,     8,     9,    10,
      11,    12,    75,    14,    15,    16,    75,    18,    19,    20,
      21,    22,    23,    24,    37,    38,    39,    40,    41,    61,
      75,    44,    64,    65,    47,    48,   178,    33,   180,    35,
      75,   243,   151,    41,    57,    58,   248,   249,    75,    79,
     192,    81,    75,    83,   192,   155,   194,    87,    33,   261,
      35,    74,    84,    59,    60,    61,    79,   176,    64,    65,
      41,    84,    80,    44,   276,    80,    77,    84,    86,   179,
      86,    86,   280,    41,    59,    60,    61,    88,    79,    64,
      65,    84,    47,    48,    32,   293,    34,   197,    81,   241,
      47,    48,   300,    85,    86,    85,    86,    80,   208,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    59,
      60,    41,    79,    78,    85,    78,    85,    83,    41,    78,
      75,   273,   274,    84,    80,   273,     5,     6,     7,     8,
       9,    10,    11,    12,    86,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    86,    26,    27,    28,
      29,    86,    31,    86,    33,    79,    35,    36,    37,    38,
      39,    40,    41,    79,    79,    44,    79,    75,    47,    48,
      41,    75,    75,    42,    43,    44,    45,    46,    57,    58,
      49,    50,    51,    52,    53,    54,    55,    56,    75,    58,
      59,    60,    61,    62,    63,    74,    86,    75,    75,    75,
      79,    75,    75,    26,    86,    84,    85,     5,     6,     7,
       8,     9,    10,    11,    12,    78,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    79,    26,    27,
      28,    29,    75,    31,    84,    33,    75,    35,    36,    37,
      38,    39,    40,    41,    30,    75,    44,    87,    85,    47,
      48,    32,    80,    87,    86,    84,    22,   171,   197,    57,
      58,   208,   179,   309,   274,     5,     6,     7,     8,     9,
      10,    11,    12,   180,    14,   296,    74,    98,    18,    19,
      20,    79,    22,    23,   194,    53,    84,    85,     5,     6,
       7,     8,     9,    10,    11,    12,   300,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    26,
      27,    28,    29,    -1,    31,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    44,    -1,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,
       9,    10,    11,    12,    -1,    14,    -1,    74,    -1,    18,
      19,    20,    79,    22,    23,    -1,    -1,    84,    85,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      26,    27,    28,    29,    -1,    31,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    44,     5,
      -1,    47,    48,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    57,    58,    19,    20,    -1,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    44,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    74,    -1,
      18,    19,    20,    79,    22,    23,    -1,    -1,    84,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    -1,    -1,    44,    -1,    -1,    47,
      48,    37,    38,    39,    40,    41,    -1,    -1,    44,    57,
      58,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    15,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    79,    80,    37,    38,    39,    40,    41,
      -1,    -1,    44,    -1,    -1,    47,    48,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    57,    58,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    74,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    -1,
      82,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    -1,    42,    43,    44,
      45,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    80,    58,    59,    60,    61,    62,    63,    -1,
      42,    43,    44,    45,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    80,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    10,    11,    12,    14,
      15,    16,    18,    19,    20,    21,    22,    23,    24,    77,
      88,    90,    91,    92,    94,    95,    99,   100,   101,   106,
     107,   125,   148,   151,   152,   153,    41,    79,   107,   148,
      41,    41,     3,     4,     0,    90,    75,    75,    75,    75,
      75,    75,    41,    44,   103,   130,   131,   146,   149,   151,
     152,   153,   148,   150,   151,   152,    84,    37,    38,    39,
      40,    41,    47,    48,    57,    58,    74,    79,    92,   103,
     136,   142,   143,   145,   147,   148,   103,   103,    84,    84,
      41,    40,    76,    81,   104,   146,    78,   102,    86,   103,
     149,   149,   150,   150,   150,   108,   148,    83,   103,   103,
     136,    41,   145,   136,    47,    48,    42,    43,    44,    45,
      46,    49,    50,    51,    52,    53,    54,    55,    56,    58,
      59,    60,    61,    62,    63,    80,   137,   138,   139,   140,
     141,    79,    80,    41,    97,    96,   148,   147,   136,   104,
      41,    79,    92,   132,   147,    79,   103,   130,    85,   103,
     109,   145,    80,   136,    80,   103,   134,   136,   144,    78,
      85,    86,    85,    41,    82,   132,   137,   105,   148,    75,
      86,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    78,   135,    80,    86,   147,    97,    75,    80,   132,
      80,   103,   108,   109,   136,   144,    96,    84,    86,   110,
     105,    17,    26,    27,    28,    29,    31,    33,    35,    36,
      41,    84,    85,    93,    94,    95,    98,   106,   107,   111,
     112,   118,   119,   120,   121,   123,   124,   126,   133,   134,
     136,   148,   119,    79,   111,   120,   122,    79,    79,    79,
      75,    41,    75,    87,   110,    75,    75,    75,    75,    75,
      75,    86,   103,   127,   128,    75,   133,    26,   119,   133,
     133,    85,   133,    78,    86,    80,    79,    75,    80,    80,
      84,   136,   127,   122,   133,   119,   122,    84,   129,   147,
      80,    75,    30,    32,    34,   113,   115,   116,   117,    85,
      86,    75,   119,   122,   147,    87,    85,   113,   114,   115,
     129,    80,    87,   110,   114,   120,   110
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    92,    93,    94,    95,    96,
      96,    97,    97,    97,    98,    99,    99,   100,   102,   101,
     103,   103,   103,   104,   104,   105,   105,   105,   106,   106,
     107,   108,   108,   109,   109,   110,   110,   110,   110,   110,
     110,   110,   110,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   112,   113,   113,   113,   113,   114,   114,
     115,   116,   117,   118,   119,   119,   120,   121,   121,   122,
     122,   123,   124,   125,   126,   127,   127,   127,   128,   128,
     129,   129,   130,   130,   130,   131,   132,   132,   132,   132,
     132,   133,   133,   133,   134,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   137,   137,   137,   137,
     138,   138,   138,   138,   138,   139,   139,   139,   139,   139,
     139,   140,   140,   141,   141,   141,   141,   141,   141,   142,
     142,   143,   143,   143,   144,   144,   144,   145,   145,   146,
     146,   147,   147,   147,   147,   147,   148,   148,   148,   148,
     148,   149,   149,   149,   149,   149,   150,   150,   150,   151,
     151,   151,   151,   152,   152,   152,   152,   153,   153,   153,
     153,   153
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     4,     4,     2,     5,     5,     4,
       0,     3,     1,     3,     2,     3,     3,     4,     0,     9,
       2,     1,     2,     2,     3,     0,     4,     2,     3,     3,
       5,     0,     4,     3,     1,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     2,     2,     2,     2,     1,
       2,     2,     2,     7,     2,     2,     1,     1,     2,     1,
       4,     3,     3,     9,     1,     1,     3,     5,     7,     1,
       1,     5,     7,     2,     2,     3,     1,     1,     3,     5,
       3,     1,     3,     1,     1,     3,     3,     3,     1,     1,
       1,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     3,     3,     1,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       2,     2,     2,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
#line 120 "syntaxique.y" /* yacc.c:1646  */
    {generate_main();YYACCEPT;}
#line 1682 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 125 "syntaxique.y" /* yacc.c:1646  */
    {fprintf(out,"\n");}
#line 1688 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 126 "syntaxique.y" /* yacc.c:1646  */
    {fprint_decl_list(&(yyvsp[-1].decllist));}
#line 1694 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 127 "syntaxique.y" /* yacc.c:1646  */
    {yyerror("Typedefs are not supported");YYERROR;}
#line 1700 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 128 "syntaxique.y" /* yacc.c:1646  */
    {yyerror("Structs are not supported");YYERROR;}
#line 1706 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 129 "syntaxique.y" /* yacc.c:1646  */
    {YYERROR;}
#line 1712 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 130 "syntaxique.y" /* yacc.c:1646  */
    {yyerror("Enums are not supported");YYERROR;}
#line 1718 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 131 "syntaxique.y" /* yacc.c:1646  */
    {yyerror("Unions are not supported");YYERROR;}
#line 1724 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 133 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat("sizeof(",(yyvsp[-1].op).op,")",NULL);(yyval.op).preop=(yyvsp[-1].op).preop;(yyval.op).postop=(yyvsp[-1].op).postop;}
#line 1730 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 134 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat("sizeof(",convert_type((yyvsp[-1].rep)),")",NULL);(yyval.op).preop=NULL;(yyval.op).postop=NULL;}
#line 1736 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 136 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat("goto",(yyvsp[0].code),NULL);}
#line 1742 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 150 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-1].code),":",NULL);}
#line 1748 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 159 "syntaxique.y" /* yacc.c:1646  */
    {f_context=(yyvsp[0].lval).id;}
#line 1754 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 159 "syntaxique.y" /* yacc.c:1646  */
    {fprint_functions((yyvsp[-8].rep),(yyvsp[-7].lval).id,(yyvsp[-4].code),(yyvsp[-1].loc));f_context=NULL;}
#line 1760 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 162 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.lval)=(yyvsp[0].lval);(yyval.lval).nbpointers=(yyvsp[-1].ctr)+(yyvsp[0].lval).nbpointers;}
#line 1766 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 163 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.lval).id=(yyvsp[0].code);(yyval.lval).type=simple;(yyval.lval).dimentions=NULL;(yyval.lval).nbpointers=0;}
#line 1772 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 164 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.lval).id=(yyvsp[-1].code);(yyval.lval).type=array;(yyval.lval).dimentions=(yyvsp[0].exp);(yyval.lval).nbpointers=0;}
#line 1778 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 167 "syntaxique.y" /* yacc.c:1646  */
    {chain_s_list((yyvsp[-1].exp),(yyvsp[0].exp));(yyval.exp)=(yyvsp[-1].exp);}
#line 1784 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 168 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.exp)=malloc(sizeof(s_list));insert_s_list(&(yyval.exp),(yyvsp[-1].op).op);}
#line 1790 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 171 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="";}
#line 1796 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 172 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-2].lval).id,":",convert_type((yyvsp[-3].rep)),";",(yyvsp[0].code),NULL);}
#line 1802 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 173 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[0].lval).id,":",convert_type((yyvsp[-1].rep)),NULL);}
#line 1808 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 191 "syntaxique.y" /* yacc.c:1646  */
    {init_local_type(&(yyval.loc));}
#line 1814 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 192 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[-1].loc);chain_decl_list((yyval.loc).declarations,(yyvsp[0].dop_list).declarations);chain_s_list((yyval.loc).ops,(yyvsp[0].dop_list).ops.preop);insert_s_list(&(yyval.loc).ops,(yyvsp[0].dop_list).ops.op);chain_s_list((yyval.loc).ops,(yyvsp[0].dop_list).ops.postop);}
#line 1820 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 193 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1826 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 194 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1832 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 195 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1838 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 196 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1844 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 197 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1850 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 198 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1856 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 201 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.dop_list)=(yyvsp[-1].dop_list);postfix_s_list((yyval.dop_list).ops.preop,";");postfix_s_list((yyval.dop_list).ops.postop,";");(yyval.dop_list).ops.op=strcmp((yyval.dop_list).ops.op,"")?concat((yyval.dop_list).ops.op,";",NULL):"";}
#line 1862 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 202 "syntaxique.y" /* yacc.c:1646  */
    {if(strncmp(f_context,"main",4)!=0){(yyval.dop_list)=(yyvsp[-1].dop_list);postfix_s_list((yyval.dop_list).ops.preop,";");postfix_s_list((yyval.dop_list).ops.postop,";");(yyval.dop_list).ops.op=concat("Exit(",(yyval.dop_list).ops.op,");",NULL);}else{init_op_type(&(yyval.dop_list).ops);(yyval.dop_list).ops.op="";(yyval.dop_list).declarations=NULL;}}
#line 1868 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 203 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.dop_list).ops);(yyval.dop_list).ops.op="break;";(yyval.dop_list).declarations=NULL;}
#line 1874 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 207 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.dop_list).ops.op=(yyvsp[0].code);}
#line 1880 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 213 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[-1].loc);insert_first_s_list(&(yyval.loc).ops,concat("case ( ",(yyvsp[-4].op).op," ) of ",NULL));insert_s_list(&(yyval.loc).ops,"end ;");/*chain_s_list($3.preop,$$.ops);$$.ops=$3.preop;*/}
#line 1886 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 216 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1892 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 217 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1898 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 218 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1904 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 219 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1910 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 222 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[0].loc),&(yyvsp[-1].loc));(yyval.loc)=(yyvsp[0].loc);}
#line 1916 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 223 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1922 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 226 "syntaxique.y" /* yacc.c:1646  */
    {printf("test\n");(yyval.loc)=(yyvsp[0].loc);(yyval.loc).ops->op=concat((yyvsp[-2].code)," :",(yyval.loc).ops->op,NULL);}
#line 1928 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 229 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1934 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 232 "syntaxique.y" /* yacc.c:1646  */
    {printf("default\n");(yyval.loc)=(yyvsp[0].loc);(yyval.loc).ops->op=concat("test",(yyval.loc).ops->op,NULL);}
#line 1940 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 235 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=for_loop_handler((yyvsp[-6].dop_list),(yyvsp[-4].dop_list),(yyvsp[-2].dop_list),(yyvsp[0].loc));}
#line 1946 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 238 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.dop_list).ops=(yyvsp[0].op);(yyval.dop_list).declarations=NULL;}
#line 1952 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 239 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.dop_list)=(yyvsp[0].dop_list);}
#line 1958 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 242 "syntaxique.y" /* yacc.c:1646  */
    {insert_first_s_list(&(yyvsp[-1].loc).ops,"begin");insert_s_list(&(yyvsp[-1].loc).ops,"end");(yyval.loc)=(yyvsp[-1].loc);}
#line 1964 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 245 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);insert_first_s_list(&(yyval.loc).ops,concat("if ( ",cond_handle((yyvsp[-2].op))," ) then ",NULL));postfix_last_s_list((yyval.loc).ops," ;");/*chain_s_list($3.preop,$$.ops);$$.ops=$3.preop;*/}
#line 1970 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 246 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[-2].loc);insert_first_s_list(&(yyval.loc).ops,concat("if ( ",cond_handle((yyvsp[-4].op))," ) then ",NULL));insert_s_list(&(yyval.loc).ops,"else");chain_s_list((yyval.loc).ops,(yyvsp[0].loc).ops);chain_decl_list((yyval.loc).declarations,(yyvsp[0].loc).declarations);postfix_last_s_list((yyval.loc).ops," ;");}
#line 1976 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 249 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1982 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 250 "syntaxique.y" /* yacc.c:1646  */
    {init_local_type(&(yyval.loc));chain_decl_list((yyval.loc).declarations,(yyvsp[0].dop_list).declarations);insert_first_s_list(&(yyval.loc).ops,"begin");chain_s_list((yyval.loc).ops,(yyvsp[0].dop_list).ops.preop);insert_s_list(&(yyval.loc).ops,(yyvsp[0].dop_list).ops.op);chain_s_list((yyval.loc).ops,(yyvsp[0].dop_list).ops.postop);insert_s_list(&(yyval.loc).ops,"end");}
#line 1988 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 253 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);insert_first_s_list(&(yyval.loc).ops,concat("while ( ",cond_handle((yyvsp[-2].op))," ) do ",NULL));postfix_last_s_list((yyval.loc).ops," ;");}
#line 1994 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 256 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[-5].loc);insert_first_s_list(&(yyval.loc).ops,"repeat");insert_s_list(&(yyval.loc).ops,concat("until ( ",cond_handle((yyvsp[-2].op))," );",NULL));}
#line 2000 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 259 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.decllist)=declaration_handler((yyvsp[-1].rep),(yyvsp[0].lvallist));}
#line 2006 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 262 "syntaxique.y" /* yacc.c:1646  */
    {*(yyval.dop_list).declarations=declaration_handler((yyvsp[-1].rep),(yyvsp[0].defl).lvals);(yyval.dop_list).ops=(yyvsp[0].defl).ops;}
#line 2012 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 265 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.defl).ops);
    (yyval.defl).ops.op=(yyvsp[0].defl).ops.op;
    insert_s_list(&(yyvsp[-2].defl).ops.preop,(yyvsp[-2].defl).ops.op);
    chain_s_list((yyval.defl).ops.preop,(yyvsp[-2].defl).ops.preop);
    chain_s_list((yyval.defl).ops.preop,(yyvsp[-2].defl).ops.postop);
    chain_s_list((yyval.defl).ops.preop,(yyvsp[0].defl).ops.preop);
    chain_s_list((yyval.defl).ops.postop,(yyvsp[0].defl).ops.postop);
    chain_lval_list(&(yyvsp[-2].defl).lvals,&(yyvsp[0].defl).lvals);
    (yyval.defl).lvals=(yyvsp[-2].defl).lvals;
  }
#line 2027 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 275 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.defl)=(yyvsp[0].defl);}
#line 2033 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 276 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.defl).ops);(yyval.defl).ops.op="";(yyval.defl).ops.postop=NULL;(yyval.defl).lvals.lval=(yyvsp[0].lval);(yyval.defl).lvals.next=NULL;}
#line 2039 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 278 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.defl).ops=assign_handler((yyvsp[-2].lval),-1,(yyvsp[0].op));  (yyval.defl).lvals.lval=(yyvsp[-2].lval);(yyval.defl).lvals.next=NULL;(yyval.defl).lvals.lval.inits=NULL;}
#line 2045 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 279 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.defl).ops);(yyval.defl).ops.op="";(yyval.defl).lvals.lval=(yyvsp[-4].lval);(yyval.defl).lvals.lval.inits=(yyvsp[-1].code);(yyval.defl).lvals.next=NULL;}
#line 2051 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 282 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-2].code)," , ",(yyvsp[0].code),NULL);}
#line 2057 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 283 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 2063 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 286 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.lvallist)=(yyvsp[-2].lvallist);chain_lval_list(&(yyval.lvallist),&(yyvsp[0].lvallist));}
#line 2069 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 287 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.lvallist).lval.id=(yyvsp[0].op).op;(yyval.lvallist).next=NULL;}
#line 2075 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 288 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.lvallist).lval=(yyvsp[0].lval);(yyval.lvallist).next=NULL;}
#line 2081 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 291 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op).op=(yyvsp[-2].lval).id;insert_s_list(&main_inits,concat((yyvsp[-2].lval).id," := ",(yyvsp[0].op).op,";",NULL));(yyval.op).preop=(yyvsp[0].op).preop;(yyval.op).postop=(yyvsp[0].op).postop;}
#line 2087 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 294 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat((yyvsp[-2].op).op,(yyvsp[-1].opr),(yyvsp[0].op).op,NULL);chain_s_list((yyval.op).preop,(yyvsp[-2].op).preop);chain_s_list((yyval.op).preop,(yyvsp[0].op).preop);chain_s_list((yyval.op).postop,(yyvsp[-2].op).postop);chain_s_list((yyval.op).postop,(yyvsp[0].op).postop);}
#line 2093 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 295 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[-1].op);(yyval.op).op=concat("( ",(yyvsp[-1].op).op," )",NULL);}
#line 2099 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 296 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=strdup((yyvsp[0].code));(yyval.op).postop=NULL;}
#line 2105 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 297 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=strdup((yyvsp[0].code));(yyval.op).postop=NULL;}
#line 2111 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 298 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);}
#line 2117 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 301 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=(yyvsp[0].op).op;insert_s_list(&(yyvsp[-2].op).preop,(yyvsp[-2].op).op);chain_s_list((yyval.op).preop,(yyvsp[-2].op).preop);chain_s_list((yyval.op).preop,(yyvsp[-2].op).postop);chain_s_list((yyval.op).preop,(yyvsp[0].op).preop);chain_s_list((yyval.op).postop,(yyvsp[0].op).postop);(yyval.op).conditional=(yyvsp[0].op).conditional;}
#line 2123 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 302 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);if((yyvsp[0].op).simple!=0){(yyval.op).op="";}}
#line 2129 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 303 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);}
#line 2135 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 306 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=assign_handler((yyvsp[-2].lval),(yyvsp[-1].t_val),(yyvsp[0].op));}
#line 2141 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 309 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=-1;}
#line 2147 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 310 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSADD;}
#line 2153 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 311 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMINUS;}
#line 2159 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 312 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMULT;}
#line 2165 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 313 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSDIVIDE;}
#line 2171 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 314 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMOD;}
#line 2177 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 315 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBAND;}
#line 2183 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 316 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBOR;}
#line 2189 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 317 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBXOR;}
#line 2195 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 318 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSLSHIFT;}
#line 2201 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 319 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSRSHIFT;}
#line 2207 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 322 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat((yyvsp[-2].op).op,(yyvsp[-1].opr).opr,(yyvsp[0].op).op,NULL);chain_s_list((yyval.op).preop,(yyvsp[-2].op).preop);chain_s_list((yyval.op).preop,(yyvsp[0].op).preop);chain_s_list((yyval.op).postop,(yyvsp[-2].op).postop);chain_s_list((yyval.op).postop,(yyvsp[0].op).postop);(yyval.op).simple=0;(yyval.op).conditional=(yyvsp[-1].opr).conditional||(yyvsp[-2].op).conditional||(yyvsp[0].op).conditional;}
#line 2213 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 323 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[-1].op);(yyval.op).op=concat("( ",(yyvsp[-1].op).op," )",NULL);}
#line 2219 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 324 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat("not ",(yyvsp[0].op).op,NULL);insert_s_list(&(yyval.op).preop,(yyvsp[0].op).preop->op);insert_s_list(&(yyval.op).postop,(yyvsp[0].op).postop->op);}
#line 2225 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 325 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=(yyvsp[0].code);(yyval.op).postop=NULL;(yyval.op).preop=NULL;(yyval.op).simple=0;}
#line 2231 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 326 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=func_handler((yyvsp[0].op));(yyval.op).simple=0;}
#line 2237 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 327 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).preop,concat((yyvsp[0].lval).id," := 1 + ",(yyvsp[0].lval).id,NULL));(yyval.op).op=strdup((yyvsp[0].lval).id);}
#line 2243 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 328 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).preop,concat((yyvsp[0].lval).id," := 1 - ",(yyvsp[0].lval).id,NULL));(yyval.op).op=strdup((yyvsp[0].lval).id);}
#line 2249 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 329 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).postop,concat((yyvsp[-1].lval).id," := 1 + ",(yyvsp[-1].lval).id,NULL));(yyval.op).op=strdup((yyvsp[-1].lval).id);}
#line 2255 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 330 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).postop,concat((yyvsp[-1].lval).id," := 1 - ",(yyvsp[-1].lval).id,NULL));(yyval.op).op=strdup((yyvsp[-1].lval).id);}
#line 2261 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 331 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);}
#line 2267 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 334 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.opr).opr=(yyvsp[0].code);(yyval.opr).conditional=0;}
#line 2273 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 335 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.opr).opr=(yyvsp[0].code);(yyval.opr).conditional=1;}
#line 2279 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 336 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.opr).opr=(yyvsp[0].code);(yyval.opr).conditional=0;}
#line 2285 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 337 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.opr).opr=(yyvsp[0].code);(yyval.opr).conditional=0;}
#line 2291 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 340 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" - ";}
#line 2297 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 341 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" + ";}
#line 2303 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 342 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" * ";}
#line 2309 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 343 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" / ";}
#line 2315 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 344 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" mod ";}
#line 2321 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 347 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" = ";}
#line 2327 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 348 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" <> ";}
#line 2333 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 349 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" > ";}
#line 2339 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 350 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" < ";}
#line 2345 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 351 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" >= ";}
#line 2351 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 352 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" <= ";}
#line 2357 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 355 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" and ";}
#line 2363 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 356 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" or ";}
#line 2369 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 359 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" & ";}
#line 2375 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 360 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" | ";}
#line 2381 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 361 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" xor ";}
#line 2387 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 362 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" ~ ";}
#line 2393 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 363 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" shl ";}
#line 2399 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 364 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" shr ";}
#line 2405 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 367 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);}
#line 2411 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 368 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=generate_name_lval((yyvsp[0].lval));(yyval.op).postop=NULL;}
#line 2417 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 371 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat("@",(yyvsp[0].code),NULL);(yyval.op).postop=NULL;}
#line 2423 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 372 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=function_call_handler((yyvsp[-3].code),(yyvsp[-1].op_li));}
#line 2429 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 373 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat((yyvsp[-2].code),"(",")",NULL);(yyval.op).postop=NULL;}
#line 2435 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 375 "syntaxique.y" /* yacc.c:1646  */
    {chain_op_list((yyvsp[-2].op_li),(yyvsp[0].op_li));}
#line 2441 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 376 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op_li)=malloc(sizeof(op_list));(yyval.op_li)->ops=(yyvsp[0].op);(yyval.op_li)->next=NULL;}
#line 2447 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 377 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op_li)=malloc(sizeof(op_list));(yyval.op_li)->ops=(yyvsp[0].op);(yyval.op_li)->next=NULL;}
#line 2453 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 379 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-2].code),".",(yyvsp[0].code),NULL);}
#line 2459 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 380 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 2465 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 383 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.ctr)=(yyvsp[0].ctr)+1;}
#line 2471 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 384 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.ctr)=1;}
#line 2477 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 387 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 2483 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 388 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 2489 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 389 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 2495 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 390 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 2501 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 391 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="nil";}
#line 2507 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 394 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[-1].modif);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2513 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 395 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep)=(yyvsp[0].rep);(yyval.rep).b_type=strdup((yyvsp[-1].code));}
#line 2519 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 396 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).b_type=strdup((yyvsp[0].code));}
#line 2525 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 397 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[0].modif);}
#line 2531 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 398 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).vis=(yyvsp[-1].vis);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2537 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 400 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[-1].modif);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2543 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 401 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep)=(yyvsp[0].rep);(yyval.rep).b_type=strdup((yyvsp[-1].code));}
#line 2549 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 402 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).b_type=strdup((yyvsp[0].code));}
#line 2555 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 403 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[0].modif);}
#line 2561 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 404 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).vis=(yyvsp[-1].vis);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2567 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 406 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[-1].modif);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2573 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 407 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).vis=(yyvsp[-1].vis);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2579 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 408 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[0].modif);}
#line 2585 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 411 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).nb_short=1; (yyval.modif).nb_long=0;(yyval.modif).sign=1;}
#line 2591 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 412 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).nb_long=1; (yyval.modif).nb_short=0;(yyval.modif).sign=1;}
#line 2597 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 413 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).sign=1;(yyval.modif).nb_long=0;(yyval.modif).nb_short=0;}
#line 2603 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 414 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).sign=0;(yyval.modif).nb_long=0;(yyval.modif).nb_short=0;}
#line 2609 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 417 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_auto=1;}
#line 2615 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 418 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_register=1;}
#line 2621 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 419 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_static=1;}
#line 2627 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 420 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_extern=1;}
#line 2633 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 423 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="int";}
#line 2639 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 424 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="double";}
#line 2645 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 425 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="float";}
#line 2651 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 426 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="char";}
#line 2657 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 427 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="void";}
#line 2663 "syntaxique.tab.c" /* yacc.c:1646  */
    break;


#line 2667 "syntaxique.tab.c" /* yacc.c:1646  */
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
#line 430 "syntaxique.y" /* yacc.c:1906  */


char * convert_assignment(char * lvalue, int  ASSIGNMENTOP){
char* res;
  switch(ASSIGNMENTOP){
    case -1 :       
      res=strdup(" := ");  
    break;
    case ASSADD :    
      res=concat(" := ",lvalue," + ",NULL);
    break;
    case ASSMINUS : 
      res=concat(" := ",lvalue," - ",NULL);   
    break;   
    case ASSMULT :  
      res=concat(" := ",lvalue," * ",NULL);   
    break;   
    case ASSDIVIDE : 
      res=concat(" := ",lvalue," / ",NULL);  
    break;   
    case ASSMOD :    
      res=concat(" := ",lvalue," mod ",NULL); 
    break; 
    case ASSBAND :   
      res=concat(" := ",lvalue," & ",NULL);   
    break; 
    case ASSBOR :    
      res=concat(" := ",lvalue," | ",NULL);
    break;   
    case ASSBXOR :   
      res=concat(" := ",lvalue," ^ ",NULL);   
    break;   
    case ASSLSHIFT : 
      res=concat(" := ",lvalue," << ",NULL);  
    break;   
    case ASSRSHIFT : 
      res=concat(" := ",lvalue," >> ",NULL);  
    break;   
  }
  return res;
}
void yyerror(const char *s){
  char *c;
  char str[12];
  sprintf(str, "%d", line);
  c=concat(s," at line ",str," .",NULL);
  //printf("%s\n",c);
  generateError(c,lang);
  free(c);
  c=NULL;
  failed=1;
  fclose(out);
  remove(out_name);
}
char* concat(const char * args,...){
  va_list valist;
  va_list valist2;
  va_start(valist, args);
  va_copy(valist2, valist);
  char *arg=args;
  int length=0;
  while(arg!=NULL){
    length+=strlen(arg);
    arg=va_arg(valist, char*);
  };  
  char *res=malloc(length+1);
  va_end(valist);
  free(arg);
  //arg=malloc(strlen(args));
  arg=strdup(args);
  while(arg!=NULL){
    strcat(res,arg);
    arg=va_arg(valist2, char*);
  };
  va_end(valist2);
  free(arg);
  arg=NULL;
  return res;
}

int init_lang (int argc,char *argv[]){
  if(argc==4){
    if(!strcmp(argv[3],"en")){
        lang='e';
    }else{
      if(!strcmp(argv[3],"fr")){
        lang='f';
      }else{
        printf("This language is not supported.\n");
        return 0;
      }
    }
  }else{
     lang='e';
  }
  return 1;
}

char * get_file_name(char *path){
  char * res=strrchr(path,'/');
  if(res!=NULL){
    res+=1;
    char * post=strrchr(path,'.');
    if(post==NULL){
      return NULL;
    }
    post[0]='\0';
    return res;
  }
  return path;
}

int main(int argc, char *argv[]) {
  FILE *myfile = fopen(argv[1], "r");  //fichier a compiler
  out = fopen(argv[2], "w+");//ficher du resultat de la traduction
  out_name=argv[2];
  if(!init_lang(argc,argv)){
    return 0;
  }

  if (!myfile) {
    printf("file not found\n");
    return -1;
  }
  yyin = myfile;
  char * head=get_file_name(out_name);
  if(head==NULL){
    printf("Error, Wrong output file format.\n");
    return -1;
  }
  fprintf(out,"program %s ;\n",head);
  yyparse();
  //print_id_list(id_table);
  fclose(myfile);
  if(!failed){
    fclose(out);
  }
  return 0;
}
