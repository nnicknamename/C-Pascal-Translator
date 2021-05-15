%{
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

%}
/*KeyWords*/
%token DEFINE INCLUDE AUTO STRUCT DOUBLE INT LONG SHORT CHAR FLOAT
%token CONST SIGNED SIZEOF TYPEDEF RETURN VOID STATIC UNSIGNED
%token ENUM EXTERN  REGISTER UNION VOLATILE WHILE DO FOR IF
%token <code>ELSE SWITCH CASE BREAK DEFAULT GOTO CONTINUE

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
%type <code>LOGICAL RELATIONAL BITWISE ARITHMETIC OPERATOR  LVALUE STAR NAME VALUE GOTODEF LABEL ASSIGNMENT
%type <t_val> ASSIGNMENTOP
%type <op_type> OPERATION
%type <mod_type> MODIFIER
%union{
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
GOTODEF: GOTO ID {$$=concat($1,$2,NULL);}
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
LABEL: ID ':' {$$=concat($1,":",NULL);}
;
INCLUDES:'#' INCLUDE HEAD
  |'#' INCLUDE VALSTR
;

DEFINES:'#' DEFINE ID VALUE
;

FUNCTION:TYPE LVALUE '(' ARGS ')' '{' LOCAL'}'
;

LVALUE:STAR LVALUE {$$=concat($1,$2,NULL);}
  |ID {$$=strdup($1);}
  |ID'['OPERATION']'{$$=concat("[",$3.op,"]",NULL);}
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
  |OPERATION {fprintf(out,"%s \n %s \n %s \n",$1.preop,$1.op,$1.postop);}
  |ASSIGNMENT 
;

ASSIGNMENT:LVALUE ASSIGNMENTOP OPERATION {$$=concat($1,convert_assignment($1,$2),$3.op,NULL);}
;

ASSIGNMENTOP:'='  {$$=-1;}
  |ASSADD         {$$=ASSADD;}
  |ASSMINUS       {$$=ASSMINUS;}      
  |ASSMULT        {$$=ASSMULT;}
  |ASSDIVIDE      {$$=ASSDIVIDE;}
  |ASSMOD         {$$=ASSMOD;}
  |ASSBAND        {$$=ASSBAND;}
  |ASSBOR         {$$=ASSBOR;}
  |ASSBXOR        {$$=ASSBXOR;}
  |ASSLSHIFT      {$$=ASSLSHIFT;}
  |ASSRSHIFT      {$$=ASSRSHIFT;}
;                                      
OPERATION:OPERATION OPERATOR OPERATION {$$.op=concat($1.op,$2,$3.op,NULL);}
  |'('OPERATION')'
  |NOT OPERATION {$$.op=concat("not ",$2.op,NULL);$$.preop=strdup($2.preop);$$.postop=strdup($2.postop);}
  |VALUE         {$$.op=strdup($1);$$.postop="";$$.preop="";}
  |NAME          {$$.op=strdup($1);$$.postop="";$$.preop="";}
  |INCR LVALUE   {sprintf($$.preop,"%s := %s + 1",$2,$2);$$.op=strdup($2);$$.postop="";}
  |DECR LVALUE   {sprintf($$.preop,"%s := %s - 1",$2,$2);$$.op=strdup($2);$$.postop="";}  
  |LVALUE INCR   {$$.postop=concat($1," := 1 +",$1,NULL);$$.op=strdup($1);$$.preop="";}
  |LVALUE DECR   {$$.postop=concat($1," := 1 -",$1,NULL);$$.op=strdup($1);$$.preop="";}                      
  |SIZEOFDEF
;
NAME:RVALUE
  |LVALUE {$$=strdup($1);}
;

RVALUE:BAND IDS
  |IDS '(' DEFINITION ')'
  |IDS '('')'
;



IDS:ID'.'IDS
  |ID
;

STAR:MULT STAR {$$=concat("^",$2,NULL);}
  |MULT   {$$="^";}
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