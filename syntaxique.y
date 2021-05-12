%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include "compilateurE/generator.h"   
    #include "type_comparator.h"
    #define YYERROR_VERBOSE
    void yyerror(const char *s);
    extern int yylex();
    extern int yyparse();
    extern int line;
    extern FILE *yyin;
    FILE *out;

%}
/*KeyWords*/
%token DEFINE INCLUDE AUTO STRUCT DOUBLE INT LONG SHORT CHAR FLOAT
%token CONST SIGNED SIZEOF TYPEDEF RETURN VOID STATIC UNSIGNED
%token ENUM EXTERN  REGISTER UNION VOLATILE WHILE DO FOR IF
%token ELSE SWITCH CASE BREAK DEFAULT GOTO CONTINUE

/*Values*/
%token <code>VALINT VALREAL VALCHAR VALSTR ID

/*Arithmetic Operators*/
%token <code>ADD MINUS MULT DIVIDE MOD INCR DECR

/*Relational Operators*/
%token <code>EQUAL DIF SUP INF SUPEQ INFEQ

/*Logical Operators*/
%token <code>AND OR NOT

/*Bitwise Operators*/
%token <code>BAND BOR BXOR BOC LSHIFT RSHIFT

/*assignment operators*/
%token <code>ASSADD ASSMINUS ASSMULT ASSDIVIDE ASSMOD 
%token <code>ASSBAND ASSBOR ASSBXOR ASSLSHIFT ASSRSHIFT

%token EL
%token HEAD
%token END

%right'=' ASSADD ASSMINUS ASSMULT ASSDIVIDE ASSMOD ASSBAND ASSBOR ASSBXOR ASSLSHIFT ASSRSHIFT
%left OR 
%left AND
%left BOR
%left BXOR
%left BAND
%left EQUAL DIF
%left INF INFEQ SUP SUPEQ
%left RSHIFT LSHIFT
%left ADD MINUS
%left DIVIDE MULT
%left '(' ')' '[' ']' INCR DECR '.' 
%type <code>LOGICAL RELATIONAL BITWISE ARITHMETIC OPERATOR OPERATION LVALUE STAR NAME VALUE
%union{
  struct{
    int nb_short;
    int nb_long;
    int sign;
    char* c_type;
    char* p_type;
  }t_catch;
  char *code;
}
%start CODE
%%
CODE:
  |END {YYACCEPT;}
  |GLOBAL CODE
;   
GLOBAL:INCLUDES
  |DEFINES 
  |FUNCTION
  |GLOBALDECLARATION EL  
  |TYPEDEFINITION EL
  |STRUCTURE EL
  |SIZEOFDEF EL 
  |ENUMDEF EL
  |UNIONDEF EL
;
SIZEOFDEF:SIZEOF '('OPERATION')'
  |SIZEOF '('TYPE')'
;
GOTODEF: GOTO ID 
;
ENUMDEF:ENUM ID '{'ENUMARGS'}'
;
UNIONDEF:UNION ID '{'UNIONARGS'}'
;
UNIONARGS:TYPE ID EL UNIONARGS
  |
;

ENUMARGS:ENUMARGS ',' ENUMARGS
  |ID
  |ID'='VALUE
;
LABEL: ID ':'
;
INCLUDES:'#' INCLUDE HEAD
  |'#' INCLUDE VALSTR
;

DEFINES:'#' DEFINE ID VALUE
;

FUNCTION:TYPE LVALUE '(' ARGS ')' '{' LOCAL'}'
;

LVALUE:STAR LVALUE {$$=strdup($1);strcat($$,$2);}
  |ID {$$=strdup($1);}
  |ID'['OPERATION']'
;

ARGS:
  |TYPE LVALUE ',' ARGS
  |TYPE LVALUE
;
TYPEDEFINITION:TYPEDEF TYPE LVALUE
  |TYPEDEF STRUCTURE LVALUE 
;

STRUCTURE: STRUCT ID '{'DECLARATIONSTRUCTURE'}'
;
DECLARATIONSTRUCTURE:
  |TYPE X EL DECLARATIONSTRUCTURE
;
X:X ',' X
  |LVALUE
  ;
LOCAL:
  |LINE         LOCAL
  |CODEBLOCK    LOCAL
  |CONDITIONALS LOCAL
  |WHILELOOP    LOCAL
  |DOWHILE      LOCAL
  |FORLOOP      LOCAL
  |SWITCHCOND   LOCAL
;

LINE:EXPRESSION EL
  |RETURN EXPRESSION EL
  |BREAK EL
  |STRUCTURE EL
  |TYPEDEFINITION EL
  |GOTODEF EL
  |LABEL
  |ENUMDEF EL
  |UNIONDEF EL
  |CONTINUE EL
;

SWITCHCOND:SWITCH '('EXPRESSION')' '{'SWITCHINSIDE'}'
;

SWITCHINSIDE: CASE1 SWITCHINSIDE
  |DEFAULT1 CASEAFTER
  |CASE2
  |DEFAULT2
;

CASEAFTER:CASE1 CASEAFTER
  |CASE2
;

CASE1:CASE VALUE':' LINE
  |CASE VALUE':' 
;

CASE2:CASE VALUE':' LINE
;
DEFAULT1:DEFAULT ':' LINE
  | DEFAULT':' 
;
DEFAULT2:DEFAULT ':' LINE
;
FORLOOP:FOR '(' EXPRESSION EL EXPRESSION EL EXPRESSION')'CODEBLOCK
;

EXPRESSION: DEFINITION  
  |DECLARATION
;

CODEBLOCK:  '{' LOCAL '}'
;

CONDITIONALS:IF '(' DEFINITION ')' CONDCODE
  |IF '(' DEFINITION ')' CONDCODE ELSE CONDCODE
;

CONDCODE:CODEBLOCK
  |LINE
;

WHILELOOP:WHILE '(' DEFINITION ')' CONDCODE
;

DOWHILE:DO CONDCODE WHILE '(' DEFINITION ')' EL
;

GLOBALDECLARATION: TYPE GLOBALDEFINITION 
;

DECLARATION:TYPE SDEFINITION
;

SDEFINITION:SDEFINITION ',' SDEFINITION 
  |OPERATION 
  |SASSIGNMENT 
;

SASSIGNMENT:LVALUE '=' OPERATION
;


GLOBALDEFINITION:GLOBALDEFINITION ',' GLOBALDEFINITION
  |GLOBALASSIGNMENT
  |LVALUE
  |LVALUE'['VALINT']'
;

GLOBALASSIGNMENT:LVALUE '=' GLOBALOPERATION
;

GLOBALOPERATION:GLOBALOPERATION OPERATOR GLOBALOPERATION
  |'('GLOBALOPERATION')'
  |ID
  |VALUE
  |SIZEOFDEF
;

DEFINITION:DEFINITION ',' DEFINITION 
  |OPERATION {fprintf(out,"%s\n",$1);}
  |ASSIGNMENT 
;

ASSIGNMENT:LVALUE ASSIGNMENTOP OPERATION
;
ASSIGNMENTOP:'='
  |ASSADD 
  |ASSMINUS 
  |ASSMULT
  |ASSDIVIDE
  |ASSMOD
  |ASSBAND 
  |ASSBOR 
  |ASSBXOR 
  |ASSLSHIFT 
  |ASSRSHIFT
;
OPERATION:OPERATION OPERATOR OPERATION {$$=strdup($1);strcat($$,$2);strcat($$,$3);}
  |'('OPERATION')'
  |NOT OPERATION  {$$=strdup("not ");strcat($$,$2);}
  /*|OPERATION PF  {$$=strdup($1);strcat($$,$2);}*/
  |VALUE         {$$=strdup($1);}
  |NAME          {$$=$1;}
  |INCR LVALUE   {fprintf(out,"%s = %s + 1 ;\n",$2,$2);$$=strdup($2);}
  |DECR LVALUE   {fprintf(out,"%s = %s - 1 ;\n",$2,$2);$$=strdup($2);}                      
  |SIZEOFDEF
;
NAME:RVALUE
  |LVALUE {$$=strdup($1);}
;

RVALUE:BAND ID
  |IDS '(' DEFINITION ')'
  |IDS '('')'
;



IDS:ID'.'IDS
  |ID
;

STAR:MULT STAR {$$="*";strcat($$,$2);}
  |MULT   {$$="*";}
;

OPERATOR:ARITHMETIC {$$=$1;}
  |RELATIONAL       {$$=$1;}
  |LOGICAL          {$$=$1;}
  |BITWISE          {$$=$1;}
;

ARITHMETIC:MINUS    {$$=" - ";}
  |ADD              {$$=" + ";}
  |MULT             {$$=" * ";}
  |DIVIDE           {$$=" / ";}
  |MOD              {$$=" mod ";}
;

RELATIONAL:EQUAL    {$$=" = ";}
  |DIF              {$$=" <> ";}
  |SUP              {$$=" > ";}
  |INF              {$$=" < ";}
  |SUPEQ            {$$=" >= ";}
  |INFEQ            {$$=" <= ";}
;

LOGICAL:AND         {$$="and";}
  |OR               {$$="or";}
;

BITWISE:BAND 
  |BOR
  |BXOR
  |BOC
  |LSHIFT
  |RSHIFT
;

VALUE:VALINT {$$=strdup($1);}
  |VALREAL   {$$=strdup($1);}
  |VALCHAR   {$$=strdup($1);} 
  |VALSTR    {$$=strdup($1);} 
;

TYPE:VISIBILITY TYPE
  |MODIFIER  TYPE
  |C TYPE
  |BASICTYPE  B
;
C:VOLATILE 
  |CONST
;
B:VISIBILITY  B
  |MODIFIER   B
  |C          B
  |
;

MODIFIER:SHORT
  |LONG
  |SIGNED
  |UNSIGNED
;

VISIBILITY:AUTO
  |REGISTER
  |STATIC
  |EXTERN
;

BASICTYPE:INT 
  |DOUBLE
  |FLOAT
  |CHAR
  |VOID 
  |          
;

%%
void yyerror(const char *s) {
  char *c=s;
  //sprintf(c,"%s at line %d .\n",s,line);
  strcat(c," at line ");
  char str[12];
  sprintf(str, "%d", line);
  strcat(c,str);
  strcat(c," .");
  //printf("%s\n",c);
  generateError(c);
}

int main(int argc, char *argv[]) {
  FILE *myfile = fopen(argv[1], "r");
  out = fopen(argv[2], "w+");
  if (!myfile) {
    printf("file not found");
    return -1;
  }
  yyin = myfile;

  yyparse();
  return 0;
}