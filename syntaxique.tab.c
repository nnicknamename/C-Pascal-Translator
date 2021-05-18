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
    #include "semantic.h"
    #include "compilateurE/generator.h"   
    #include "type_comparator.h"
    #define YYERROR_VERBOSE
    s_list * insert_s_list(s_list **head,char *operation);
    char* concat(const char * args,...);
    void print_s_list(s_list *head,char *separator);
    void init_op_type(op_type *opr);
    void chain_s_list(s_list *list1,s_list *list2);

    char * convert_assignment(char * lvalue, int  ASSIGNMENTOP);
    void yyerror(const char *s);

    extern int yylex();
    extern int yyparse();
    extern int line;
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
#line 77 "syntaxique.y" /* yacc.c:355  */

  nb_modif modif;
  nb_vis vis;
  type_rep rep;
  op_type op;
  char *code;
  int t_val;
  s_list *exp;

#line 221 "syntaxique.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAXIQUE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 238 "syntaxique.tab.c" /* yacc.c:358  */

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
#define YYLAST   672

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  185
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
       0,    88,    88,    89,    90,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   102,   103,   105,   107,   109,   111,
     112,   115,   116,   117,   119,   121,   122,   125,   128,   131,
     132,   133,   136,   137,   138,   140,   141,   144,   146,   147,
     149,   150,   152,   153,   154,   155,   156,   157,   158,   159,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     174,   177,   178,   179,   180,   183,   184,   187,   188,   191,
     193,   194,   196,   198,   201,   202,   205,   208,   209,   212,
     213,   216,   219,   222,   225,   228,   229,   230,   233,   238,
     239,   240,   241,   244,   247,   248,   249,   250,   251,   254,
     255,   256,   259,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   287,   288,   289,   290,   293,   294,
     295,   296,   297,   300,   301,   302,   303,   304,   305,   308,
     309,   311,   312,   315,   316,   317,   322,   323,   326,   327,
     330,   331,   332,   333,   334,   335,   338,   339,   340,   341,
     344,   345,   346,   347,   348,   350,   351,   352,   353,   354,
     356,   357,   358,   361,   362,   363,   364,   367,   368,   369,
     370,   373,   374,   375,   376,   377
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
  "OPERATION", "OPERATOR", "ARITHMETIC", "RELATIONAL", "LOGICAL", "NAME",
  "RVALUE", "IDS", "STAR", "BITWISE", "VALUE", "TYPE", "TWO", "THREE",
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

#define YYPACT_NINF -278

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-278)))

#define YYTABLE_NINF -148

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     204,  -278,    60,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
     -45,   630,  -278,  -278,  -278,    84,  -278,  -278,    87,  -278,
      96,    92,   204,    13,    61,    69,  -278,  -278,  -278,    76,
      86,   102,    80,   649,   649,   170,    57,   458,    80,    80,
      99,   100,   144,   -27,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,   107,  -278,    67,   103,  -278,    80,  -278,   649,
     649,   170,  -278,  -278,   170,   170,   649,  -278,  -278,  -278,
    -278,    51,    80,    80,   470,   150,   470,  -278,   108,   524,
    -278,  -278,   116,  -278,   117,  -278,  -278,   154,   649,   114,
    -278,  -278,   470,  -278,    12,   649,   160,    80,  -278,  -278,
    -278,  -278,  -278,  -278,   118,    80,   150,  -278,  -278,   335,
     119,  -278,   546,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,   470,  -278,  -278,  -278,  -278,
      79,  -278,   121,    78,   122,   159,  -278,   500,  -278,    12,
    -278,   335,  -278,   126,    80,   136,    31,   103,  -278,  -278,
     -56,  -278,  -278,   335,  -278,   241,   -59,  -278,   335,   114,
    -278,   154,  -278,   158,  -278,   568,    12,   155,   152,  -278,
     649,    80,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,   470,  -278,   470,  -278,   156,   649,  -278,
     335,   246,   649,  -278,   157,   335,   161,  -278,   458,   162,
     325,   165,   171,   172,   185,   198,   197,    52,   246,   202,
     218,   221,  -278,   222,   223,   194,   246,   246,   246,   224,
     246,   246,   246,   246,  -278,   161,   470,  -278,   225,   470,
    -278,  -278,   274,   458,   470,   458,  -278,  -278,  -278,  -278,
     217,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,   -31,   230,  -278,   335,  -278,
     -57,   238,   228,   -10,   240,  -278,   470,   470,   325,   470,
     458,   325,   234,   335,   230,  -278,    -8,   247,   290,    46,
     248,   458,   325,   114,   237,   242,    46,  -278,   293,  -278,
    -278,   249,  -278,   252,   404,  -278,  -278,  -278,   293,  -278,
     244,   404,   266,  -278,  -278,   267
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   177,     0,   182,   181,   174,   173,   184,   183,   175,
       0,     0,   185,   179,   176,     0,   180,   178,     0,     3,
       0,     0,     2,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,   163,     0,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     4,    11,    12,    13,     9,
      10,     8,    30,   149,    91,    83,    90,     0,   160,   168,
       0,   167,   164,   161,   172,     0,    38,   156,   157,   158,
     159,    30,     0,     0,     0,     0,     0,   123,   142,     0,
     118,   141,     0,   117,     0,    36,    35,     0,    20,     0,
      26,    25,     0,   148,     0,    32,     0,     0,    29,   165,
     169,   166,   170,   171,     0,     0,     0,   119,   120,   116,
     147,   143,     0,   121,   122,   129,   128,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   150,   151,
     152,   153,   154,   155,    14,     0,   124,   125,   126,   127,
       0,    15,    22,     0,     0,     0,    27,     0,    96,     0,
      98,    93,    97,     0,     0,     0,    91,    89,    37,    41,
       0,   146,   115,   114,   145,   142,     0,   101,   100,     0,
      17,     0,    18,     0,    31,     0,     0,     0,    34,    92,
      38,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   103,     0,   144,     0,    23,    21,    20,    95,
      94,    42,    32,    39,    40,   102,    99,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    42,     0,
       0,     0,    56,     0,     0,     0,    42,    42,    42,     0,
      42,    42,    42,    42,    75,    74,     0,    33,     0,     0,
      80,    79,     0,     0,     0,     0,    52,    16,    59,    24,
       0,    55,    57,    58,    54,    53,    28,    43,    49,    48,
      50,    44,    45,    46,    47,   142,    84,    87,    86,    51,
       0,     0,     0,     0,     0,    76,     0,     0,     0,     0,
       0,     0,     0,    88,    85,    81,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,    64,
      82,     0,    78,     0,    71,    60,    61,    62,     0,    66,
       0,    68,    70,    65,    73,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -278,   330,  -278,    10,  -278,    14,    54,   169,   182,  -278,
    -278,  -278,  -278,   -32,   153,    66,    59,   174,   175,     3,
    -199,  -278,    63,    62,  -277,  -236,  -278,  -278,  -278,  -206,
    -195,  -278,  -183,  -278,  -278,  -278,  -278,    91,  -278,   260,
    -278,  -115,  -137,  -278,  -278,   -29,  -132,  -278,  -278,  -278,
    -278,  -278,   -51,   318,  -278,   -85,     1,   109,    49,   106,
     113,    -3
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,    77,   219,   220,   221,   144,   143,   222,
      26,    27,    28,   165,   153,   223,   224,   104,   160,   225,
     226,   227,   295,   307,   296,   297,   298,   299,   228,   229,
     230,   231,   242,   232,   233,    31,   234,   266,   267,    55,
      56,   151,   235,   167,   193,   168,   135,   136,   137,   138,
      80,    81,    82,    57,   139,    83,   236,    58,    63,    33,
      34,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    32,   238,   166,   146,    78,    85,    86,    79,   152,
      23,   240,    39,    90,    24,   241,   113,   114,   180,   176,
     194,   308,   278,    32,   111,    98,   195,    10,   195,   181,
      61,   308,    23,    37,   175,    62,    24,   272,    84,   274,
     107,   108,    78,   176,    78,   109,   276,   112,    91,    67,
      68,    69,    70,   148,    25,   161,    61,    61,   206,    30,
      78,   200,   309,   147,   152,   156,    29,   105,   176,   281,
      38,   290,   309,   159,   287,   195,    25,   195,   293,   240,
     294,    30,   240,   241,   196,   301,   241,    46,    29,   145,
     149,   152,    44,   240,    10,   285,   154,   241,   288,    42,
      43,    36,   270,    78,   150,   312,   163,   273,    94,   302,
     101,    96,   315,   102,   103,   314,    67,    68,    69,    70,
      71,    52,   178,    53,    53,    40,    72,    73,    41,  -147,
    -147,    92,    92,   106,   106,    47,    74,    75,   249,    59,
      66,    64,   286,    48,    94,    95,    60,    96,    65,   159,
      49,    67,    68,    69,    70,   113,   114,    76,   164,   150,
      50,    78,   170,   171,   205,    59,    59,    64,    99,   100,
      64,    64,    60,    60,    65,     1,    51,    65,    65,     5,
       6,   105,    87,    88,     9,    89,   150,    92,    97,    13,
      14,   110,    16,    17,   140,   142,   141,   155,   169,   145,
     173,   106,   158,   154,   265,   177,   172,   268,   303,     1,
       2,     3,     4,     5,     6,     7,     8,   179,     9,    10,
      11,   250,    12,    13,    14,    15,    16,    17,    18,   257,
     258,   259,   198,   261,   262,   263,   264,   202,   201,   247,
     239,   171,   181,   243,    78,   265,   195,   283,   268,   244,
     245,     1,     2,     3,     4,     5,     6,     7,     8,   246,
       9,    10,    11,   208,    12,    13,    14,    15,    16,    17,
      18,   248,   209,   210,   211,   212,   251,   213,   256,   214,
      19,   215,   216,    67,    68,    69,    70,   217,   113,   114,
      53,    20,   252,    72,    73,   253,   254,   255,   260,   269,
     271,   275,   280,    74,    75,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   277,   279,   289,   192,   282,
     292,   291,   300,   304,    76,   293,   305,   218,   310,   218,
       1,     2,     3,     4,     5,     6,     7,     8,   311,     9,
      10,    11,   208,    12,    13,    14,    15,    16,    17,    18,
     -72,   -69,    45,   197,   203,   237,   204,   157,   214,   306,
     215,   216,    67,    68,    69,    70,   217,   207,   284,    53,
     313,    93,    72,    73,     0,     0,     0,   115,   116,   117,
     118,   119,    74,    75,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,   129,   130,   131,   132,   133,     0,
       0,     0,     0,    76,     0,     0,     0,     0,   218,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     9,    10,
      11,   208,    12,    13,    14,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,   214,     0,   215,
     216,    67,    68,    69,    70,   217,     0,     0,    53,     0,
       0,    72,    73,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,     1,     0,     3,     4,     5,     6,     7,
       8,     0,     9,    10,     0,     0,    12,    13,    14,     0,
      16,    17,    76,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
       0,     0,    53,     0,     0,    72,    73,    67,    68,    69,
      70,    71,     0,     0,    53,    74,    75,    72,    73,     0,
       0,     0,     0,     0,     0,     0,     0,    74,    75,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,   115,   116,   117,   118,   119,     0,    76,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,   129,
     130,   131,   132,   133,     0,     0,   115,   116,   117,   118,
     119,     0,     0,   120,   121,   122,   123,   124,   125,   126,
     127,   174,   128,   129,   130,   131,   132,   133,   115,   116,
     117,   118,   119,     0,     0,   120,   121,   122,   123,   124,
     125,   126,   127,   134,   128,   129,   130,   131,   132,   133,
     115,   116,   117,   118,   119,     0,     0,   120,   121,   122,
     123,   124,   125,   126,   127,   162,   128,   129,   130,   131,
     132,   133,     0,     0,     0,     1,     2,     3,     4,     5,
       6,     7,     8,     0,     9,     0,     0,   199,    12,    13,
      14,     0,    16,    17,     1,     0,     3,     4,     5,     6,
       7,     8,     0,     9,     0,     0,     0,    12,    13,    14,
       0,    16,    17
};

static const yytype_int16 yycheck[] =
{
      32,     0,   208,   140,    89,    37,    38,    39,    37,    94,
       0,   210,    11,    40,     0,   210,    47,    48,    74,   151,
      79,   298,    79,    22,    75,    57,    85,    15,    85,    85,
      33,   308,    22,    78,   149,    34,    22,   243,    37,   245,
      72,    73,    74,   175,    76,    74,    77,    76,    75,    37,
      38,    39,    40,    41,     0,   106,    59,    60,   195,     0,
      92,   176,   298,    92,   149,    97,     0,    66,   200,    79,
      11,    79,   308,   105,   280,    85,    22,    85,    32,   278,
      34,    22,   281,   278,   169,   291,   281,    74,    22,    88,
      78,   176,     0,   292,    15,   278,    95,   292,   281,     3,
       4,    41,   239,   135,    94,   304,   135,   244,    77,   292,
      61,    80,   311,    64,    65,   310,    37,    38,    39,    40,
      41,    41,   154,    44,    44,    41,    47,    48,    41,    78,
      78,    80,    80,    82,    82,    74,    57,    58,    86,    33,
      83,    35,   279,    74,    77,    78,    33,    80,    35,   181,
      74,    37,    38,    39,    40,    47,    48,    78,    79,   149,
      74,   193,    84,    85,   193,    59,    60,    61,    59,    60,
      64,    65,    59,    60,    61,     5,    74,    64,    65,     9,
      10,   180,    83,    83,    14,    41,   176,    80,    85,    19,
      20,    41,    22,    23,    78,    41,    79,    37,    77,   198,
      41,    82,    84,   202,   236,    79,    84,   236,   293,     5,
       6,     7,     8,     9,    10,    11,    12,    81,    14,    15,
      16,   218,    18,    19,    20,    21,    22,    23,    24,   226,
     227,   228,    74,   230,   231,   232,   233,    85,    83,    41,
      78,    85,    85,    78,   276,   277,    85,   276,   277,    78,
      78,     5,     6,     7,     8,     9,    10,    11,    12,    74,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    74,    26,    27,    28,    29,    74,    31,    84,    33,
      76,    35,    36,    37,    38,    39,    40,    41,    47,    48,
      44,    87,    74,    47,    48,    74,    74,    74,    74,    74,
      26,    84,    74,    57,    58,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    85,    78,    83,    77,    79,
      30,    74,    74,    86,    78,    32,    84,    83,    79,    83,
       5,     6,     7,     8,     9,    10,    11,    12,    86,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      84,    84,    22,   171,   180,   202,   181,    97,    33,   296,
      35,    36,    37,    38,    39,    40,    41,   198,   277,    44,
     308,    53,    47,    48,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    57,    58,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    44,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,     5,    -1,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    18,    19,    20,    -1,
      22,    23,    78,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      -1,    -1,    44,    -1,    -1,    47,    48,    37,    38,    39,
      40,    41,    -1,    -1,    44,    57,    58,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    -1,    78,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    -1,    -1,    42,    43,    44,    45,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    81,    58,    59,    60,    61,    62,    63,    42,    43,
      44,    45,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    79,    58,    59,    60,    61,    62,    63,
      42,    43,    44,    45,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    79,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,    -1,    -1,    79,    18,    19,
      20,    -1,    22,    23,     5,    -1,     7,     8,     9,    10,
      11,    12,    -1,    14,    -1,    -1,    -1,    18,    19,    20,
      -1,    22,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    10,    11,    12,    14,
      15,    16,    18,    19,    20,    21,    22,    23,    24,    76,
      87,    89,    90,    91,    93,    94,    98,    99,   100,   103,
     104,   123,   144,   147,   148,   149,    41,    78,   104,   144,
      41,    41,     3,     4,     0,    89,    74,    74,    74,    74,
      74,    74,    41,    44,   101,   127,   128,   141,   145,   147,
     148,   149,   144,   146,   147,   148,    83,    37,    38,    39,
      40,    41,    47,    48,    57,    58,    78,    91,   101,   133,
     138,   139,   140,   143,   144,   101,   101,    83,    83,    41,
      40,    75,    80,   141,    77,    78,    80,    85,   101,   145,
     145,   146,   146,   146,   105,   144,    82,   101,   101,   133,
      41,   140,   133,    47,    48,    42,    43,    44,    45,    46,
      49,    50,    51,    52,    53,    54,    55,    56,    58,    59,
      60,    61,    62,    63,    79,   134,   135,   136,   137,   142,
      78,    79,    41,    96,    95,   144,   143,   133,    41,    78,
      91,   129,   143,   102,   144,    37,   101,   127,    84,   101,
     106,   140,    79,   133,    79,   101,   130,   131,   133,    77,
      84,    85,    84,    41,    81,   129,   134,    79,   101,    81,
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
     133,   133,   133,   133,   134,   134,   134,   134,   135,   135,
     135,   135,   135,   136,   136,   136,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   139,   140,   140,   141,   141,
     142,   142,   142,   142,   142,   142,   143,   143,   143,   143,
     144,   144,   144,   144,   144,   145,   145,   145,   145,   145,
     146,   146,   146,   147,   147,   147,   147,   148,   148,   148,
     148,   149,   149,   149,   149,   149
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
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     3,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     2,     2,     2,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
#line 89 "syntaxique.y" /* yacc.c:1646  */
    {YYACCEPT;}
#line 1633 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 105 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-1].code),(yyvsp[0].code),NULL);}
#line 1639 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 119 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-1].code),":",NULL);}
#line 1645 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 131 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-1].code),(yyvsp[0].code),NULL);}
#line 1651 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 132 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 1657 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 133 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat("[",(yyvsp[-1].op).op,"]",NULL);}
#line 1663 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 201 "syntaxique.y" /* yacc.c:1646  */
    {print_s_list((yyvsp[0].exp),";\n");}
#line 1669 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 225 "syntaxique.y" /* yacc.c:1646  */
    {printf("%s \n",convert_type((yyvsp[-1].rep)));}
#line 1675 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 228 "syntaxique.y" /* yacc.c:1646  */
    {chain_s_list((yyvsp[-2].exp),(yyvsp[0].exp));(yyval.exp)=(yyvsp[-2].exp);}
#line 1681 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 229 "syntaxique.y" /* yacc.c:1646  */
    {insert_s_list(&(yyvsp[0].op).postop,(yyvsp[0].op).op);chain_s_list((yyvsp[0].op).preop,(yyvsp[0].op).postop);(yyval.exp)=(yyvsp[0].op).preop;}
#line 1687 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 230 "syntaxique.y" /* yacc.c:1646  */
    {insert_s_list(&(yyvsp[0].op).postop,(yyvsp[0].op).op);chain_s_list((yyvsp[0].op).preop,(yyvsp[0].op).postop);(yyval.exp)=(yyvsp[0].op).preop;}
#line 1693 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 233 "syntaxique.y" /* yacc.c:1646  */
    {{(yyval.op).op=concat((yyvsp[-2].code),convert_assignment((yyvsp[-2].code),-1),(yyvsp[0].op).op,NULL);
(yyval.op).preop=(yyvsp[0].op).preop;(yyval.op).postop=(yyvsp[0].op).postop;}}
#line 1700 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 254 "syntaxique.y" /* yacc.c:1646  */
    {chain_s_list((yyvsp[-2].exp),(yyvsp[0].exp));(yyval.exp)=(yyvsp[-2].exp);}
#line 1706 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 255 "syntaxique.y" /* yacc.c:1646  */
    {insert_s_list(&(yyvsp[0].op).postop,(yyvsp[0].op).op);chain_s_list((yyvsp[0].op).preop,(yyvsp[0].op).postop);(yyval.exp)=(yyvsp[0].op).preop;}
#line 1712 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 256 "syntaxique.y" /* yacc.c:1646  */
    {insert_s_list(&(yyvsp[0].op).postop,(yyvsp[0].op).op);chain_s_list((yyvsp[0].op).preop,(yyvsp[0].op).postop);(yyval.exp)=(yyvsp[0].op).preop;}
#line 1718 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 259 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op).op=concat((yyvsp[-2].code),convert_assignment((yyvsp[-2].code),(yyvsp[-1].t_val)),(yyvsp[0].op).op,NULL);
(yyval.op).preop=(yyvsp[0].op).preop;(yyval.op).postop=(yyvsp[0].op).postop;}
#line 1725 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 263 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=-1;}
#line 1731 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 264 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSADD;}
#line 1737 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 265 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMINUS;}
#line 1743 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 266 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMULT;}
#line 1749 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 267 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSDIVIDE;}
#line 1755 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 268 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMOD;}
#line 1761 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 269 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBAND;}
#line 1767 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 270 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBOR;}
#line 1773 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 271 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBXOR;}
#line 1779 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 272 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSLSHIFT;}
#line 1785 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 273 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSRSHIFT;}
#line 1791 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 275 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat((yyvsp[-2].op).op,(yyvsp[-1].code),(yyvsp[0].op).op,NULL);chain_s_list((yyval.op).preop,(yyvsp[-2].op).preop);chain_s_list((yyval.op).preop,(yyvsp[0].op).preop);chain_s_list((yyval.op).postop,(yyvsp[-2].op).postop);chain_s_list((yyval.op).postop,(yyvsp[0].op).postop);}
#line 1797 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 276 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[-1].op);(yyval.op).op=concat("( ",(yyvsp[-1].op).op," )",NULL);}
#line 1803 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 277 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat("not ",(yyvsp[0].op).op,NULL);insert_s_list(&(yyval.op).preop,(yyvsp[0].op).preop->op);insert_s_list(&(yyval.op).postop,(yyvsp[0].op).postop->op);}
#line 1809 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 278 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=strdup((yyvsp[0].code));(yyval.op).postop=NULL;}
#line 1815 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 279 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=strdup((yyvsp[0].code));(yyval.op).postop=NULL;}
#line 1821 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 280 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).preop,concat((yyvsp[0].code)," := 1 + ",(yyvsp[0].code),NULL));(yyval.op).op=strdup((yyvsp[0].code));}
#line 1827 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 281 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).preop,concat((yyvsp[0].code)," := 1 - ",(yyvsp[0].code),NULL));(yyval.op).op=strdup((yyvsp[0].code));}
#line 1833 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 282 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).postop,concat((yyvsp[-1].code)," := 1 + ",(yyvsp[-1].code),NULL));(yyval.op).op=strdup((yyvsp[-1].code));}
#line 1839 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 283 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).postop,concat((yyvsp[-1].code)," := 1 - ",(yyvsp[-1].code),NULL));(yyval.op).op=strdup((yyvsp[-1].code));}
#line 1845 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 287 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 1851 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 288 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 1857 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 289 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 1863 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 290 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 1869 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 293 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" - ";}
#line 1875 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 294 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" + ";}
#line 1881 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 295 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" * ";}
#line 1887 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 296 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" / ";}
#line 1893 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 297 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" mod ";}
#line 1899 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 300 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" = ";}
#line 1905 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 301 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" <> ";}
#line 1911 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 302 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" > ";}
#line 1917 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 303 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" < ";}
#line 1923 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 304 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" >= ";}
#line 1929 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 305 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" <= ";}
#line 1935 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 308 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="and";}
#line 1941 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 309 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="or";}
#line 1947 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 312 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 1953 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 326 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat("^",(yyvsp[0].code),NULL);}
#line 1959 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 327 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="^";}
#line 1965 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 338 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 1971 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 339 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 1977 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 340 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 1983 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 341 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 1989 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 344 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[-1].modif);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 1995 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 345 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep)=(yyvsp[0].rep);(yyval.rep).b_type=strdup((yyvsp[-1].code));}
#line 2001 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 346 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).b_type=strdup((yyvsp[0].code));}
#line 2007 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 347 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[0].modif);}
#line 2013 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 348 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).vis=(yyvsp[-1].vis);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2019 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 350 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[-1].modif);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2025 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 351 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep)=(yyvsp[0].rep);(yyval.rep).b_type=strdup((yyvsp[-1].code));}
#line 2031 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 352 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).b_type=strdup((yyvsp[0].code));}
#line 2037 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 353 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[0].modif);}
#line 2043 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 354 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).vis=(yyvsp[-1].vis);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2049 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 356 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[-1].modif);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2055 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 357 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).vis=(yyvsp[-1].vis);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2061 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 358 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[0].modif);}
#line 2067 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 361 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).nb_short=1; (yyval.modif).nb_long=0;(yyval.modif).sign=1;}
#line 2073 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 362 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).nb_long=1; (yyval.modif).nb_short=0;(yyval.modif).sign=1;}
#line 2079 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 363 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).sign=1;(yyval.modif).nb_long=0;(yyval.modif).nb_short=0;}
#line 2085 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 364 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).sign=0;(yyval.modif).nb_long=0;(yyval.modif).nb_short=0;}
#line 2091 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 367 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_auto=1;}
#line 2097 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 368 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_register=1;}
#line 2103 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 369 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_static=1;}
#line 2109 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 370 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_extern=1;}
#line 2115 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 373 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="int";}
#line 2121 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 374 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="double";}
#line 2127 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 375 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="float";}
#line 2133 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 376 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="char";}
#line 2139 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 377 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="void";}
#line 2145 "syntaxique.tab.c" /* yacc.c:1646  */
    break;


#line 2149 "syntaxique.tab.c" /* yacc.c:1646  */
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
#line 380 "syntaxique.y" /* yacc.c:1906  */


char * convert_assignment(char * lvalue, int  ASSIGNMENTOP){
char* res;
  switch(ASSIGNMENTOP){
    case -1 :       
      res=strdup(" := ");  
    break;
    case ASSADD :    
      res=concat(" := ",lvalue,"+ ",NULL);
    break;
    case ASSMINUS : 
      res=concat(" := ",lvalue,"- ",NULL);   
    break;   
    case ASSMULT :  
      res=concat(" := ",lvalue,"* ",NULL);   
    break;   
    case ASSDIVIDE : 
      res=concat(" := ",lvalue,"/ ",NULL);  
    break;   
    case ASSMOD :    
      res=concat(" := ",lvalue,"mod ",NULL); 
    break; 
    case ASSBAND :   
      res=concat(" := ",lvalue,"& ",NULL);   
    break; 
    case ASSBOR :    
      res=concat(" := ",lvalue,"| ",NULL);   
    break;   
    case ASSBXOR :   
      res=concat(" := ",lvalue,"^ ",NULL);   
    break;   
    case ASSLSHIFT : 
      res=concat(" := ",lvalue,"<< ",NULL);  
    break;   
    case ASSRSHIFT : 
      res=concat(" := ",lvalue,">> ",NULL);  
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
  char *res=malloc(length+3);
  va_end(valist);
  arg=strdup(args);
  while(arg!=NULL){
    strcat(res,arg);
    arg=va_arg(valist2, char*);
  };
  va_end(valist2);
  free(arg);
  return res;
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
  //print_id_list(id_table);
  fclose(myfile);
  fclose(out);
  return 0;
}
