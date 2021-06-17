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

    char * convert_assignment(char * lvalue, int  ASSIGNMENTOP);
    void yyerror(const char *s);

    extern int yylex();
    extern int yyparse();
    extern FILE *yyin;
    extern id_list *id_table;
    char lang;

#line 94 "syntaxique.tab.c" /* yacc.c:339  */

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
#line 90 "syntaxique.y" /* yacc.c:355  */

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

#line 229 "syntaxique.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAXIQUE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 246 "syntaxique.tab.c" /* yacc.c:358  */

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
#define YYLAST   748

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  186
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  309

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
       0,   109,   109,   110,   111,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   123,   124,   126,   128,   130,   132,
     133,   136,   137,   138,   140,   142,   143,   146,   149,   152,
     153,   154,   157,   158,   161,   162,   163,   166,   167,   170,
     173,   174,   177,   178,   181,   182,   183,   184,   185,   186,
     187,   188,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   203,   206,   207,   208,   209,   212,   213,   216,
     220,   223,   226,   229,   230,   233,   236,   237,   240,   241,
     244,   247,   250,   253,   256,   266,   267,   269,   277,   278,
     279,   282,   285,   286,   287,   288,   289,   292,   293,   294,
     297,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   325,   326,   327,   328,   331,   332,   333,   334,
     335,   338,   339,   340,   341,   342,   343,   346,   347,   350,
     351,   352,   353,   354,   355,   358,   359,   362,   363,   364,
     366,   367,   368,   370,   371,   374,   375,   378,   379,   380,
     381,   384,   385,   386,   387,   388,   390,   391,   392,   393,
     394,   396,   397,   398,   401,   402,   403,   404,   407,   408,
     409,   410,   413,   414,   415,   416,   417
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
  "DEFINES", "FUNCTION", "LVALUE", "ARRAYDIM", "ARGS", "TYPEDEFINITION",
  "STRUCTURE", "DECLARATIONSTRUCTURE", "X", "LOCAL", "LINE", "SWITCHCOND",
  "SWITCHINSIDE", "CASEAFTER", "CASE1", "DEFAULT1", "DEFAULT2", "FORLOOP",
  "EXPRESSION", "CODEBLOCK", "CONDITIONALS", "CONDCODE", "WHILELOOP",
  "DOWHILE", "GLOBALDECLARATION", "DECLARATION", "SDEFINITION",
  "SASSIGNMENT", "GLOBALDEFINITION", "GLOBALASSIGNMENT", "GLOBALOPERATION",
  "DEFINITION", "ASSIGNMENT", "ASSIGNMENTOP", "OPERATION", "OPERATOR",
  "ARITHMETIC", "RELATIONAL", "LOGICAL", "BITWISE", "NAME", "RVALUE",
  "ARGDEFINITION", "IDS", "STAR", "VALUE", "TYPE", "TWO", "THREE",
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

#define YYPACT_NINF -279

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-279)))

#define YYTABLE_NINF -155

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     110,  -279,   -21,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
     -39,   706,  -279,  -279,  -279,    -5,  -279,  -279,    27,  -279,
     106,    88,   110,    20,    33,    38,  -279,  -279,  -279,    53,
      61,    63,   -26,   725,   725,   359,    64,   131,   -26,   -26,
      91,   104,   103,   -19,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,    87,  -279,    79,   105,  -279,   -26,  -279,   725,
     725,   359,  -279,  -279,   359,   359,   725,  -279,  -279,  -279,
    -279,    84,   -26,   -26,   253,   151,   253,  -279,   153,   600,
    -279,  -279,   116,  -279,   117,  -279,  -279,   167,   725,   144,
    -279,  -279,   253,    87,  -279,    14,   725,   -26,  -279,  -279,
    -279,  -279,  -279,  -279,   127,   -26,   151,  -279,  -279,   488,
     135,  -279,   622,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,   253,  -279,  -279,  -279,  -279,
     569,  -279,   141,   119,   143,   193,  -279,   170,    87,  -279,
      14,  -279,   488,  -279,   156,   -26,   159,   105,  -279,  -279,
     -42,  -279,  -279,   488,  -279,   393,  -279,   488,    -9,   144,
    -279,   167,  -279,   163,  -279,   644,    14,   155,   178,   725,
     -26,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,   253,  -279,   253,  -279,   185,   725,  -279,   488,
    -279,   725,  -279,   187,   488,   195,  -279,   238,  -279,   131,
     206,   557,   209,   210,   211,   224,   200,   225,   113,  -279,
    -279,   228,   229,   230,  -279,   231,   232,  -279,  -279,  -279,
     240,  -279,  -279,  -279,  -279,  -279,   233,  -279,   488,   -26,
     241,   253,  -279,  -279,   291,   131,   253,   253,  -279,  -279,
    -279,  -279,   318,  -279,  -279,  -279,  -279,  -279,  -279,   253,
     242,   235,  -279,  -279,    16,   265,   274,    29,    73,  -279,
     233,   253,   -26,   557,   253,   131,   557,   267,   488,   235,
    -279,    76,   278,   330,    43,   293,   131,   557,   144,   284,
     287,    43,   340,  -279,  -279,   295,  -279,   294,  -279,  -279,
    -279,  -279,   340,   300,  -279,   398,  -279,  -279,   478
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   178,     0,   183,   182,   175,   174,   185,   184,   176,
       0,     0,   186,   180,   177,     0,   181,   179,     0,     3,
       0,     0,     2,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,   164,     0,   163,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     4,    11,    12,    13,     9,
      10,     8,    30,   156,    90,    82,    89,     0,   161,   169,
       0,   168,   165,   162,   173,     0,    40,   157,   158,   159,
     160,    30,     0,     0,     0,     0,     0,   121,   146,     0,
     116,   145,     0,   115,     0,    38,    37,     0,    20,     0,
      26,    25,     0,    31,   155,     0,    34,     0,    29,   166,
     170,   167,   171,   172,     0,     0,     0,   117,   118,   114,
     154,   147,     0,   119,   120,   127,   126,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,    14,     0,   122,   123,   124,   125,
       0,    15,    22,     0,     0,     0,    27,     0,    32,    94,
       0,    96,    91,    95,     0,     0,    90,    88,    39,    43,
       0,   153,   113,   112,   149,   146,   152,   151,     0,     0,
      17,     0,    18,     0,    33,     0,     0,     0,    36,    40,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   101,     0,   148,     0,    23,    21,    20,    93,    92,
      44,    34,    41,    42,   100,   150,    19,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    44,
      28,     0,     0,     0,    58,     0,     0,    45,    51,    50,
       0,    46,    47,    48,    49,    74,    73,    99,    98,     0,
       0,     0,    79,    78,     0,     0,     0,     0,    54,    16,
      61,    24,     0,    57,    59,    60,    56,    55,    52,     0,
      86,    83,    85,    53,     0,     0,     0,     0,     0,    75,
      97,     0,     0,     0,     0,     0,     0,     0,    87,    84,
      80,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,    65,     0,    66,    81,     0,    77,     0,    44,    62,
      63,    64,    68,     0,    44,    70,    67,    72,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -279,   355,  -279,     9,  -279,    62,    78,   188,   213,  -279,
    -279,  -279,  -279,   -32,   -90,   189,    83,    71,   207,   214,
    -217,  -174,  -279,   100,    93,  -278,  -279,  -279,  -279,  -196,
    -207,  -279,  -257,  -279,  -279,  -279,  -279,   125,  -279,   301,
    -279,  -128,  -213,  -130,  -279,   -29,  -125,  -279,  -279,  -279,
    -279,  -279,  -279,   205,   -49,   347,   -78,     1,   146,   112,
     248,   328,    26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,    77,   221,   222,   223,   144,   143,   224,
      26,    27,    28,   165,    93,   154,   225,   226,   104,   160,
     207,   227,   228,   290,   301,   291,   292,   293,   229,   230,
     231,   232,   244,   233,   234,    31,   235,   261,   262,    55,
      56,   152,   236,   237,   192,   238,   135,   136,   137,   138,
     139,    80,    81,   168,    82,    57,    83,   239,    58,    63,
      33,    34,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    32,   252,   148,   243,    78,    85,    86,    79,    23,
     166,   146,    39,   240,   302,    52,   280,   153,    53,   283,
      36,    90,   175,    32,   302,    98,   111,   176,   264,    10,
     296,    23,   179,   267,   268,    62,    40,   242,    84,    37,
     107,   108,    78,   180,    78,   109,   270,   112,   199,   266,
     176,    67,    68,    69,    70,   149,    91,   161,   148,    61,
      78,   281,    24,   147,   166,   156,   243,   105,    41,   243,
     193,    30,   153,   159,   176,   288,   194,   289,    25,   282,
     243,   305,    38,    29,    24,    61,    61,   308,    44,   145,
     295,   195,   150,    30,    46,   273,   307,   155,   153,   242,
      25,   259,   242,    78,   151,    29,   163,    47,   276,    42,
      43,   167,    48,   242,   259,     1,     2,     3,     4,     5,
       6,     7,     8,   178,     9,    10,    11,    49,    12,    13,
      14,    15,    16,    17,    18,    50,     1,    51,     3,     4,
       5,     6,     7,     8,    89,     9,    10,    66,   159,    12,
      13,    14,   277,    16,    17,   285,    95,    96,   259,   151,
      78,   259,  -154,   204,    92,   167,   106,    92,    67,    68,
      69,    70,    71,   101,    87,    53,   102,   103,    72,    73,
     105,    67,    68,    69,    70,   151,    19,    88,    74,    75,
      97,  -154,   110,    92,   140,   106,   141,    20,   145,   251,
     113,   114,   155,   170,   171,    99,   100,   260,   142,    76,
     297,   158,   115,   116,   117,   118,   119,   106,   169,   120,
     121,   122,   123,   124,   125,   126,   127,   172,   128,   129,
     130,   131,   132,   133,   173,   177,    95,   197,   200,    78,
     260,   249,   278,     1,     2,     3,     4,     5,     6,     7,
       8,   174,     9,    10,    11,   209,    12,    13,    14,    15,
      16,    17,    18,   201,   210,   211,   212,   213,    10,   214,
     171,   215,   180,   216,   217,    67,    68,    69,    70,   218,
     194,    59,    53,    64,   241,    72,    73,   245,   246,   247,
      67,    68,    69,    70,    71,    74,    75,    53,   248,   250,
      72,    73,   253,   254,   255,   256,   257,    59,    59,    64,
      74,    75,    64,    64,   258,   263,    76,   265,   259,   271,
     272,   219,   220,     1,     2,     3,     4,     5,     6,     7,
       8,    76,     9,    10,    11,   209,    12,    13,    14,    15,
      16,    17,    18,   274,   210,   211,   212,   213,   275,   214,
     284,   215,   286,   216,   217,    67,    68,    69,    70,   218,
     287,    60,    53,    65,     1,    72,    73,   294,     5,     6,
     298,   299,   288,     9,   303,    74,    75,    45,    13,    14,
     304,    16,    17,   219,   196,   206,   202,    60,    60,    65,
     208,   300,    65,    65,   203,   306,    76,   279,   157,   205,
      94,   219,   269,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     9,    10,    11,   209,    12,    13,    14,    15,
      16,    17,    18,     0,   210,   211,   212,   213,     0,   214,
       0,   215,     0,   216,   217,    67,    68,    69,    70,   218,
     113,   114,    53,     0,     0,    72,    73,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,     0,     0,     0,
     191,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,   219,   -71,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     9,    10,    11,   209,    12,    13,    14,    15,
      16,    17,    18,     0,   210,   211,   212,   213,     0,   214,
       0,   215,     0,   216,   217,    67,    68,    69,    70,   218,
       0,     0,    53,     0,     0,    72,    73,     0,     0,     0,
     115,   116,   117,   118,   119,    74,    75,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,   129,   130,   131,
     132,   133,     0,     0,     0,     0,    76,     0,     0,     0,
       0,   219,     1,     2,     3,     4,     5,     6,     7,     8,
       0,     9,    10,    11,   209,    12,    13,    14,    15,    16,
      17,    18,     0,     0,    10,     0,     0,     0,     0,     0,
     215,     0,   216,   217,    67,    68,    69,    70,   218,     0,
       0,    53,     0,     0,    72,    73,    67,    68,    69,    70,
      71,     0,     0,    53,    74,    75,    72,    73,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    75,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,     0,     0,
     219,     0,   115,   116,   117,   118,   119,    76,   164,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,   129,
     130,   131,   132,   133,   115,   116,   117,   118,   119,     0,
       0,   120,   121,   122,   123,   124,   125,   126,   127,   134,
     128,   129,   130,   131,   132,   133,   115,   116,   117,   118,
     119,     0,     0,   120,   121,   122,   123,   124,   125,   126,
     127,   162,   128,   129,   130,   131,   132,   133,     0,     0,
       0,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       9,     0,     0,   198,    12,    13,    14,     0,    16,    17,
       1,     0,     3,     4,     5,     6,     7,     8,     0,     9,
       0,     0,     0,    12,    13,    14,     0,    16,    17
};

static const yytype_int16 yycheck[] =
{
      32,     0,   219,    93,   211,    37,    38,    39,    37,     0,
     140,    89,    11,   209,   292,    41,   273,    95,    44,   276,
      41,    40,   150,    22,   302,    57,    75,   152,   241,    15,
     287,    22,    74,   246,   247,    34,    41,   211,    37,    78,
      72,    73,    74,    85,    76,    74,   259,    76,   176,   245,
     175,    37,    38,    39,    40,    41,    75,   106,   148,    33,
      92,   274,     0,    92,   194,    97,   273,    66,    41,   276,
      79,     0,   150,   105,   199,    32,    85,    34,     0,   275,
     287,   298,    11,     0,    22,    59,    60,   304,     0,    88,
     286,   169,    78,    22,    74,    79,   303,    96,   176,   273,
      22,    85,   276,   135,    95,    22,   135,    74,    79,     3,
       4,   140,    74,   287,    85,     5,     6,     7,     8,     9,
      10,    11,    12,   155,    14,    15,    16,    74,    18,    19,
      20,    21,    22,    23,    24,    74,     5,    74,     7,     8,
       9,    10,    11,    12,    41,    14,    15,    83,   180,    18,
      19,    20,    79,    22,    23,    79,    77,    78,    85,   150,
     192,    85,    78,   192,    80,   194,    82,    80,    37,    38,
      39,    40,    41,    61,    83,    44,    64,    65,    47,    48,
     179,    37,    38,    39,    40,   176,    76,    83,    57,    58,
      85,    78,    41,    80,    78,    82,    79,    87,   197,    86,
      47,    48,   201,    84,    85,    59,    60,   239,    41,    78,
     288,    84,    42,    43,    44,    45,    46,    82,    77,    49,
      50,    51,    52,    53,    54,    55,    56,    84,    58,    59,
      60,    61,    62,    63,    41,    79,    77,    74,    83,   271,
     272,    41,   271,     5,     6,     7,     8,     9,    10,    11,
      12,    81,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    85,    26,    27,    28,    29,    15,    31,
      85,    33,    85,    35,    36,    37,    38,    39,    40,    41,
      85,    33,    44,    35,    78,    47,    48,    78,    78,    78,
      37,    38,    39,    40,    41,    57,    58,    44,    74,    74,
      47,    48,    74,    74,    74,    74,    74,    59,    60,    61,
      57,    58,    64,    65,    74,    74,    78,    26,    85,    77,
      85,    83,    84,     5,     6,     7,     8,     9,    10,    11,
      12,    78,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    78,    26,    27,    28,    29,    74,    31,
      83,    33,    74,    35,    36,    37,    38,    39,    40,    41,
      30,    33,    44,    35,     5,    47,    48,    74,     9,    10,
      86,    84,    32,    14,    79,    57,    58,    22,    19,    20,
      86,    22,    23,    83,   171,   197,   179,    59,    60,    61,
     201,   291,    64,    65,   180,   302,    78,   272,    97,   194,
      53,    83,    84,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,    27,    28,    29,    -1,    31,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      47,    48,    44,    -1,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    83,    84,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,    27,    28,    29,    -1,    31,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    44,    -1,    -1,    47,    48,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    57,    58,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    83,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    44,    -1,    -1,    47,    48,    37,    38,    39,    40,
      41,    -1,    -1,    44,    57,    58,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      83,    -1,    42,    43,    44,    45,    46,    78,    79,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    42,    43,    44,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    79,
      58,    59,    60,    61,    62,    63,    42,    43,    44,    45,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    79,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    79,    18,    19,    20,    -1,    22,    23,
       5,    -1,     7,     8,     9,    10,    11,    12,    -1,    14,
      -1,    -1,    -1,    18,    19,    20,    -1,    22,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    10,    11,    12,    14,
      15,    16,    18,    19,    20,    21,    22,    23,    24,    76,
      87,    89,    90,    91,    93,    94,    98,    99,   100,   104,
     105,   123,   145,   148,   149,   150,    41,    78,   105,   145,
      41,    41,     3,     4,     0,    89,    74,    74,    74,    74,
      74,    74,    41,    44,   101,   127,   128,   143,   146,   148,
     149,   150,   145,   147,   148,   149,    83,    37,    38,    39,
      40,    41,    47,    48,    57,    58,    78,    91,   101,   133,
     139,   140,   142,   144,   145,   101,   101,    83,    83,    41,
      40,    75,    80,   102,   143,    77,    78,    85,   101,   146,
     146,   147,   147,   147,   106,   145,    82,   101,   101,   133,
      41,   142,   133,    47,    48,    42,    43,    44,    45,    46,
      49,    50,    51,    52,    53,    54,    55,    56,    58,    59,
      60,    61,    62,    63,    79,   134,   135,   136,   137,   138,
      78,    79,    41,    96,    95,   145,   144,   133,   102,    41,
      78,    91,   129,   144,   103,   145,   101,   127,    84,   101,
     107,   142,    79,   133,    79,   101,   131,   133,   141,    77,
      84,    85,    84,    41,    81,   129,   134,    79,   101,    74,
      85,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    77,   132,    79,    85,   144,    96,    74,    79,   129,
      83,    85,   106,   107,   133,   141,    95,   108,   103,    17,
      26,    27,    28,    29,    31,    33,    35,    36,    41,    83,
      84,    92,    93,    94,    97,   104,   105,   109,   110,   116,
     117,   118,   119,   121,   122,   124,   130,   131,   133,   145,
     117,    78,   109,   118,   120,    78,    78,    78,    74,    41,
      74,    86,   108,    74,    74,    74,    74,    74,    74,    85,
     101,   125,   126,    74,   130,    26,   117,   130,   130,    84,
     130,    77,    85,    79,    78,    74,    79,    79,   133,   125,
     120,   130,   117,   120,    83,    79,    74,    30,    32,    34,
     111,   113,   114,   115,    74,   117,   120,   144,    86,    84,
     111,   112,   113,    79,    86,   108,   112,   118,   108
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    91,    91,    92,    93,    94,    95,
      95,    96,    96,    96,    97,    98,    98,    99,   100,   101,
     101,   101,   102,   102,   103,   103,   103,   104,   104,   105,
     106,   106,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   110,   111,   111,   111,   111,   112,   112,   113,
     114,   115,   116,   117,   117,   118,   119,   119,   120,   120,
     121,   122,   123,   124,   125,   125,   125,   126,   127,   127,
     127,   128,   129,   129,   129,   129,   129,   130,   130,   130,
     131,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   134,   134,   134,   134,   135,   135,   135,   135,
     135,   136,   136,   136,   136,   136,   136,   137,   137,   138,
     138,   138,   138,   138,   138,   139,   139,   140,   140,   140,
     141,   141,   141,   142,   142,   143,   143,   144,   144,   144,
     144,   145,   145,   145,   145,   145,   146,   146,   146,   146,
     146,   147,   147,   147,   148,   148,   148,   148,   149,   149,
     149,   149,   150,   150,   150,   150,   150
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     4,     4,     2,     5,     5,     4,
       0,     3,     1,     3,     2,     3,     3,     4,     8,     2,
       1,     2,     2,     3,     0,     4,     2,     3,     3,     5,
       0,     4,     3,     1,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     2,     2,     2,     2,     1,     2,
       2,     2,     7,     2,     2,     1,     1,     2,     1,     4,
       3,     3,     9,     1,     1,     3,     5,     7,     1,     1,
       5,     7,     2,     2,     3,     1,     1,     3,     3,     1,
       1,     3,     3,     3,     1,     1,     1,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     3,
       3,     1,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     2,     2,     2,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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
#line 110 "syntaxique.y" /* yacc.c:1646  */
    {generate_main();YYACCEPT;}
#line 1652 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 116 "syntaxique.y" /* yacc.c:1646  */
    {fprint_decl_list(&(yyvsp[-1].decllist));}
#line 1658 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 126 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat("goto",(yyvsp[0].code),NULL);}
#line 1664 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 140 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-1].code),":",NULL);}
#line 1670 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 149 "syntaxique.y" /* yacc.c:1646  */
    {fprint_functions((yyvsp[-7].rep),(yyvsp[-6].lval).id,(yyvsp[-4].code),(yyvsp[-1].loc));}
#line 1676 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 152 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.lval)=(yyvsp[0].lval);(yyval.lval).nbpointers=(yyvsp[-1].ctr)+(yyvsp[0].lval).nbpointers;}
#line 1682 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 153 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.lval).id=(yyvsp[0].code);(yyval.lval).type=simple;(yyval.lval).dimentions=NULL;(yyval.lval).nbpointers=0;}
#line 1688 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 154 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.lval).id=(yyvsp[-1].code);(yyval.lval).type=array;(yyval.lval).dimentions=(yyvsp[0].exp);(yyval.lval).nbpointers=0;}
#line 1694 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 157 "syntaxique.y" /* yacc.c:1646  */
    {chain_s_list((yyvsp[-1].exp),(yyvsp[0].exp));(yyval.exp)=(yyvsp[-1].exp);}
#line 1700 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 158 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.exp)=malloc(sizeof(s_list));insert_s_list(&(yyval.exp),(yyvsp[-1].op).op);}
#line 1706 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 161 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="";}
#line 1712 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 162 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-2].lval).id,":",convert_type((yyvsp[-3].rep)),";",(yyvsp[0].code),NULL);}
#line 1718 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 163 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[0].lval).id,":",convert_type((yyvsp[-1].rep)),NULL);}
#line 1724 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 181 "syntaxique.y" /* yacc.c:1646  */
    {init_local_type(&(yyval.loc));}
#line 1730 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 182 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[-1].loc);chain_decl_list((yyval.loc).declarations,(yyvsp[0].dop_list).declarations);chain_s_list((yyval.loc).ops,(yyvsp[0].dop_list).ops.preop);insert_s_list(&(yyval.loc).ops,(yyvsp[0].dop_list).ops.op);chain_s_list((yyval.loc).ops,(yyvsp[0].dop_list).ops.postop);}
#line 1736 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 183 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1742 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 184 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1748 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 185 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1754 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 186 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1760 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 187 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1766 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 188 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1772 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 191 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.dop_list)=(yyvsp[-1].dop_list);postfix_s_list((yyval.dop_list).ops.preop,";");postfix_s_list((yyval.dop_list).ops.postop,";");(yyval.dop_list).ops.op=strcmp((yyval.dop_list).ops.op,"")?concat((yyval.dop_list).ops.op,";",NULL):"";}
#line 1778 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 192 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.dop_list)=(yyvsp[-1].dop_list);postfix_s_list((yyval.dop_list).ops.preop,";");postfix_s_list((yyval.dop_list).ops.postop,";");(yyval.dop_list).ops.op=concat("Exit(",(yyval.dop_list).ops.op,");",NULL);}
#line 1784 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 193 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.dop_list).ops.op="break";}
#line 1790 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 197 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.dop_list).ops.op=(yyvsp[0].code);}
#line 1796 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 203 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[-1].loc);insert_first_s_list(&(yyval.loc).ops,concat("case ( ",(yyvsp[-4].op).op," ) of ",NULL));insert_s_list(&(yyval.loc).ops,"end ;");/*chain_s_list($3.preop,$$.ops);$$.ops=$3.preop;*/}
#line 1802 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 206 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1808 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 207 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1814 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 208 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1820 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 209 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1826 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 212 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[0].loc),&(yyvsp[-1].loc));(yyval.loc)=(yyvsp[0].loc);}
#line 1832 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 213 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1838 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 216 "syntaxique.y" /* yacc.c:1646  */
    {(yyvsp[0].loc).ops->op=concat((yyvsp[-2].code),":",(yyvsp[0].loc).ops->op,NULL);(yyval.loc)=(yyvsp[0].loc);}
#line 1844 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 220 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1850 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 223 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1856 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 226 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=for_loop_handler((yyvsp[-6].dop_list),(yyvsp[-4].dop_list),(yyvsp[-2].dop_list),(yyvsp[0].loc));}
#line 1862 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 229 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.dop_list).ops=(yyvsp[0].op);(yyval.dop_list).declarations=NULL;}
#line 1868 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 230 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.dop_list)=(yyvsp[0].dop_list);}
#line 1874 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 233 "syntaxique.y" /* yacc.c:1646  */
    {insert_first_s_list(&(yyvsp[-1].loc).ops,"begin");insert_s_list(&(yyvsp[-1].loc).ops,"end");(yyval.loc)=(yyvsp[-1].loc);}
#line 1880 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 236 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);insert_first_s_list(&(yyval.loc).ops,concat("if ( ",(yyvsp[-2].op).op," ) then ",NULL));postfix_last_s_list((yyval.loc).ops," ;");/*chain_s_list($3.preop,$$.ops);$$.ops=$3.preop;*/}
#line 1886 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 237 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[-2].loc);insert_first_s_list(&(yyval.loc).ops,concat("if ( ",(yyvsp[-4].op).op," ) then ",NULL));insert_s_list(&(yyval.loc).ops,"else");chain_s_list((yyval.loc).ops,(yyvsp[0].loc).ops);chain_decl_list((yyval.loc).declarations,(yyvsp[0].loc).declarations);postfix_last_s_list((yyval.loc).ops," ;");}
#line 1892 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 240 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1898 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 241 "syntaxique.y" /* yacc.c:1646  */
    {init_local_type(&(yyval.loc));chain_decl_list((yyval.loc).declarations,(yyvsp[0].dop_list).declarations);insert_first_s_list(&(yyval.loc).ops,"begin");insert_s_list(&(yyval.loc).ops,"end");}
#line 1904 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 244 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);insert_first_s_list(&(yyval.loc).ops,concat("while ( ",(yyvsp[-2].op).op," ) do ",NULL));postfix_last_s_list((yyval.loc).ops," ;");}
#line 1910 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 247 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[-5].loc);insert_first_s_list(&(yyval.loc).ops,"repeat");insert_s_list(&(yyval.loc).ops,concat("until ( ",(yyvsp[-2].op).op," );",NULL));}
#line 1916 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 250 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.decllist)=declaration_handler((yyvsp[-1].rep),(yyvsp[0].lvallist));}
#line 1922 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 253 "syntaxique.y" /* yacc.c:1646  */
    {*(yyval.dop_list).declarations=declaration_handler((yyvsp[-1].rep),(yyvsp[0].defl).lvals);(yyval.dop_list).ops=(yyvsp[0].defl).ops;}
#line 1928 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 256 "syntaxique.y" /* yacc.c:1646  */
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
#line 1943 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 266 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.defl)=(yyvsp[0].defl);}
#line 1949 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 267 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.defl).ops);(yyval.defl).ops.op="";(yyval.defl).ops.postop=NULL;(yyval.defl).lvals.lval=(yyvsp[0].lval);(yyval.defl).lvals.next=NULL;}
#line 1955 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 270 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.defl).ops.op=concat((yyvsp[-2].lval).id,convert_assignment((yyvsp[-2].lval).id,-1),(yyvsp[0].op).op,NULL);
(yyval.defl).ops.preop=(yyvsp[0].op).preop;
(yyval.defl).ops.postop=(yyvsp[0].op).postop;
(yyval.defl).lvals.lval=(yyvsp[-2].lval);
(yyval.defl).lvals.next=NULL;}
#line 1965 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 277 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.lvallist)=(yyvsp[-2].lvallist);chain_lval_list(&(yyval.lvallist),&(yyvsp[0].lvallist));}
#line 1971 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 278 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.lvallist).lval.id=(yyvsp[0].op).op;(yyval.lvallist).next=NULL;}
#line 1977 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 279 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.lvallist).lval=(yyvsp[0].lval);(yyval.lvallist).next=NULL;}
#line 1983 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 282 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op).op=(yyvsp[-2].lval).id;insert_s_list(&main_inits,concat((yyvsp[-2].lval).id," := ",(yyvsp[0].op).op,";",NULL));(yyval.op).preop=(yyvsp[0].op).preop;(yyval.op).postop=(yyvsp[0].op).postop;}
#line 1989 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 285 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat((yyvsp[-2].op).op,(yyvsp[-1].code),(yyvsp[0].op).op,NULL);chain_s_list((yyval.op).preop,(yyvsp[-2].op).preop);chain_s_list((yyval.op).preop,(yyvsp[0].op).preop);chain_s_list((yyval.op).postop,(yyvsp[-2].op).postop);chain_s_list((yyval.op).postop,(yyvsp[0].op).postop);}
#line 1995 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 286 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[-1].op);(yyval.op).op=concat("( ",(yyvsp[-1].op).op," )",NULL);}
#line 2001 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 287 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=strdup((yyvsp[0].code));(yyval.op).postop=NULL;}
#line 2007 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 288 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=strdup((yyvsp[0].code));(yyval.op).postop=NULL;}
#line 2013 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 292 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=(yyvsp[0].op).op;insert_s_list(&(yyvsp[-2].op).preop,(yyvsp[-2].op).op);chain_s_list((yyval.op).preop,(yyvsp[-2].op).preop);chain_s_list((yyval.op).preop,(yyvsp[-2].op).postop);chain_s_list((yyval.op).preop,(yyvsp[0].op).preop);chain_s_list((yyval.op).postop,(yyvsp[0].op).postop);}
#line 2019 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 293 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);if((yyvsp[0].op).simple!=0){(yyval.op).op="";}}
#line 2025 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 294 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);}
#line 2031 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 297 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op).op=concat(generate_name_lval((yyvsp[-2].lval)),convert_assignment((yyvsp[-2].lval).id,(yyvsp[-1].t_val)),(yyvsp[0].op).op,NULL);
(yyval.op).preop=(yyvsp[0].op).preop;(yyval.op).postop=(yyvsp[0].op).postop;}
#line 2038 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 301 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=-1;}
#line 2044 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 302 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSADD;}
#line 2050 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 303 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMINUS;}
#line 2056 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 304 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMULT;}
#line 2062 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 305 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSDIVIDE;}
#line 2068 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 306 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMOD;}
#line 2074 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 307 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBAND;}
#line 2080 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 308 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBOR;}
#line 2086 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 309 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBXOR;}
#line 2092 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 310 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSLSHIFT;}
#line 2098 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 311 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSRSHIFT;}
#line 2104 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 313 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat((yyvsp[-2].op).op,(yyvsp[-1].code),(yyvsp[0].op).op,NULL);chain_s_list((yyval.op).preop,(yyvsp[-2].op).preop);chain_s_list((yyval.op).preop,(yyvsp[0].op).preop);chain_s_list((yyval.op).postop,(yyvsp[-2].op).postop);chain_s_list((yyval.op).postop,(yyvsp[0].op).postop);(yyval.op).simple=0;}
#line 2110 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 314 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[-1].op);(yyval.op).op=concat("( ",(yyvsp[-1].op).op," )",NULL);}
#line 2116 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 315 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat("not ",(yyvsp[0].op).op,NULL);insert_s_list(&(yyval.op).preop,(yyvsp[0].op).preop->op);insert_s_list(&(yyval.op).postop,(yyvsp[0].op).postop->op);}
#line 2122 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 316 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=(yyvsp[0].code);(yyval.op).postop=NULL;(yyval.op).preop=NULL;(yyval.op).simple=0;}
#line 2128 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 317 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);(yyval.op).simple=0;}
#line 2134 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 318 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).preop,concat((yyvsp[0].lval).id," := 1 + ",(yyvsp[0].lval).id,NULL));(yyval.op).op=strdup((yyvsp[0].lval).id);}
#line 2140 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 319 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).preop,concat((yyvsp[0].lval).id," := 1 - ",(yyvsp[0].lval).id,NULL));(yyval.op).op=strdup((yyvsp[0].lval).id);}
#line 2146 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 320 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).postop,concat((yyvsp[-1].lval).id," := 1 + ",(yyvsp[-1].lval).id,NULL));(yyval.op).op=strdup((yyvsp[-1].lval).id);}
#line 2152 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 321 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).postop,concat((yyvsp[-1].lval).id," := 1 - ",(yyvsp[-1].lval).id,NULL));(yyval.op).op=strdup((yyvsp[-1].lval).id);}
#line 2158 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 325 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 2164 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 326 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 2170 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 327 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 2176 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 328 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 2182 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 331 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" - ";}
#line 2188 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 332 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" + ";}
#line 2194 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 333 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" * ";}
#line 2200 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 334 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" / ";}
#line 2206 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 335 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" mod ";}
#line 2212 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 338 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" = ";}
#line 2218 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 339 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" <> ";}
#line 2224 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 340 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" > ";}
#line 2230 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 341 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" < ";}
#line 2236 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 342 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" >= ";}
#line 2242 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 343 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" <= ";}
#line 2248 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 346 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" and ";}
#line 2254 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 347 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" or ";}
#line 2260 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 350 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" & ";}
#line 2266 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 351 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" | ";}
#line 2272 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 352 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" xor ";}
#line 2278 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 353 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" ~ ";}
#line 2284 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 354 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" shl ";}
#line 2290 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 355 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" shr ";}
#line 2296 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 358 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);}
#line 2302 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 359 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=generate_name_lval((yyvsp[0].lval));(yyval.op).postop=NULL;}
#line 2308 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 362 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat("@",(yyvsp[0].code),NULL);(yyval.op).postop=NULL;}
#line 2314 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 363 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=function_call_handler((yyvsp[-3].code),(yyvsp[-1].op));}
#line 2320 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 364 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat((yyvsp[-2].code),"(",")",NULL);(yyval.op).postop=NULL;}
#line 2326 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 366 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat((yyvsp[-2].op).op," , ",(yyvsp[0].op).op,NULL);}
#line 2332 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 367 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);}
#line 2338 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 368 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);}
#line 2344 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 370 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-2].code),".",(yyvsp[0].code),NULL);}
#line 2350 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 371 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 2356 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 374 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.ctr)=(yyvsp[0].ctr)+1;}
#line 2362 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 375 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.ctr)=1;}
#line 2368 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 378 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 2374 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 379 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 2380 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 380 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 2386 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 381 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 2392 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 384 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[-1].modif);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2398 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 385 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep)=(yyvsp[0].rep);(yyval.rep).b_type=strdup((yyvsp[-1].code));}
#line 2404 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 386 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).b_type=strdup((yyvsp[0].code));}
#line 2410 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 387 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[0].modif);}
#line 2416 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 388 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).vis=(yyvsp[-1].vis);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2422 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 390 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[-1].modif);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2428 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 391 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep)=(yyvsp[0].rep);(yyval.rep).b_type=strdup((yyvsp[-1].code));}
#line 2434 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 392 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).b_type=strdup((yyvsp[0].code));}
#line 2440 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 393 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[0].modif);}
#line 2446 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 394 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).vis=(yyvsp[-1].vis);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2452 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 396 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[-1].modif);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2458 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 397 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).vis=(yyvsp[-1].vis);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2464 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 398 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[0].modif);}
#line 2470 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 401 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).nb_short=1; (yyval.modif).nb_long=0;(yyval.modif).sign=1;}
#line 2476 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 402 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).nb_long=1; (yyval.modif).nb_short=0;(yyval.modif).sign=1;}
#line 2482 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 403 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).sign=1;(yyval.modif).nb_long=0;(yyval.modif).nb_short=0;}
#line 2488 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 404 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).sign=0;(yyval.modif).nb_long=0;(yyval.modif).nb_short=0;}
#line 2494 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 407 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_auto=1;}
#line 2500 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 408 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_register=1;}
#line 2506 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 409 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_static=1;}
#line 2512 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 410 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_extern=1;}
#line 2518 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 413 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="int";}
#line 2524 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 414 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="double";}
#line 2530 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 415 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="float";}
#line 2536 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 416 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="char";}
#line 2542 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 417 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="void";}
#line 2548 "syntaxique.tab.c" /* yacc.c:1646  */
    break;


#line 2552 "syntaxique.tab.c" /* yacc.c:1646  */
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
#line 420 "syntaxique.y" /* yacc.c:1906  */


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
void yyerror(const char *s) {
  char *c;
  char str[12];
  sprintf(str, "%d", line);
  c=concat(s," at line ",str," .",NULL);
  //printf("%s\n",c);
  generateError(c,lang);
  free(c);
  c=NULL;
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
int main(int argc, char *argv[]) {
  FILE *myfile = fopen(argv[1], "r");  //fichier a compiler
  out = fopen(argv[2], "w+");//ficher du resultat de la traduction
  
  //char *s="write('%c test1 \\n test2 %s test3 test4'  ,arg1,arg2);";
  //printf("-- %s --\n",generate_function(s));
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
  //print_id_list(id_table);
  fclose(myfile);
  fclose(out);
  return 0;
}
