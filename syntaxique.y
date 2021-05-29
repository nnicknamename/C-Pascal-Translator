%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdarg.h>
    extern int line;
    #include "semantic.h"
    #include "compilateurE/generator.h"   
    #include "type_comparator.h"
    #define YYERROR_VERBOSE
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

/*Relational Operatoheadrs*/
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

%type <code>LOGICAL RELATIONAL BITWISE ARITHMETIC OPERATOR LVALUE  STAR VALUE GOTODEF LABEL BASICTYPE IDS
%type <t_val> ASSIGNMENTOP
%type <op> GLOBALDEFINITION DEFINITION ARGDEFINITION OPERATION  ASSIGNMENT GLOBALOPERATION GLOBALASSIGNMENT NAME RVALUE
%type <modif> MODIFIER
%type <vis> VISIBILITY 
%type <rep> THREE TWO TYPE

%type <decl> DECLARATION GLOBALDECLARATION SASSIGNMENT 
%type <decl> SDEFINITION EXPRESSION LINE  

%type <loc> LOCAL  CONDCODE CODEBLOCK CONDITIONALS WHILELOOP DOWHILE
%union{
  nb_modif modif;
  nb_vis vis;
  type_rep rep;
  op_type op;
  local_type loc;
  decl_type decl;
  char *code;
  int t_val;
  s_list *exp;
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

FUNCTION:TYPE LVALUE '(' ARGS ')' '{' LOCAL '}' {fprintf(out,"function %s ( ) : %s\n",$2,convert_type($1));fprint_types($7);fprintf(out,"BEGIN\n");fprint_s_list($7.ops,"\n");fprintf(out,"\n END;");}
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


LOCAL: {init_local_type(&$$);}
  |LOCAL LINE         {insert_decl_in_loc(&$1,$2);$$=$1;}
  |LOCAL CODEBLOCK    {chain_local(&$1,&$2);$$=$1;} 
  |LOCAL CONDITIONALS {chain_local(&$1,&$2);$$=$1;}
  |LOCAL WHILELOOP    {chain_local(&$1,&$2);$$=$1;}
  |LOCAL DOWHILE      {chain_local(&$1,&$2);$$=$1;}
  |LOCAL FORLOOP      
  |LOCAL SWITCHCOND   
;

LINE:EXPRESSION EL {$$=$1;postfix_s_list($$.ops.preop,";");postfix_s_list($$.ops.postop,";");$$.ops.op=concat($$.ops.op,";",NULL);}  
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

EXPRESSION: DEFINITION  {$$.ops=$1;$$.type="";$$.ids=NULL;}
  |DECLARATION {$$=$1;}
;

CODEBLOCK:  '{' LOCAL '}' {insert_first_s_list(&$2.ops,"begin");insert_s_list(&$2.ops,"end");$$=$2;}
;

CONDITIONALS:IF '(' DEFINITION ')' CONDCODE {$$=$5;insert_first_s_list(&$$.ops,concat("if ( ",$3.op," ) then ",NULL));}
  |IF '(' DEFINITION ')' CONDCODE ELSE CONDCODE {$$=$5;insert_first_s_list(&$$.ops,concat("if ( ",$3.op," ) then ",NULL));insert_s_list(&$$.ops,"else");chain_s_list($$.ops,$7.ops);}
;

CONDCODE:CODEBLOCK {$$=$1;}
  |LINE
;

WHILELOOP:WHILE '(' DEFINITION ')' CONDCODE {$$=$5;insert_first_s_list(&$$.ops,concat("while ( ",$3.op," ) do ",NULL));}
;

DOWHILE:DO CONDCODE WHILE '(' DEFINITION ')' EL {$$=$2;insert_first_s_list(&$$.ops,"do");insert_s_list(&$$.ops,concat("while ( ",$5.op," )",NULL));}
;

GLOBALDECLARATION: TYPE GLOBALDEFINITION  {$$.type=convert_type($1);$$.ops=$2;}
;

DECLARATION:TYPE SDEFINITION {$$=$2;$$.type=convert_type($1);}
;

SDEFINITION:SDEFINITION ',' SDEFINITION {init_op_type(&$$.ops);$$.ops.op=$3.ops.op;insert_s_list(&$1.ops.preop,$1.ops.op);chain_s_list($$.ops.preop,$1.ops.preop);chain_s_list($$.ops.preop,$1.ops.postop);chain_s_list($$.ops.preop,$3.ops.preop);chain_s_list($$.ops.postop,$3.ops.postop);$$.ids=$1.ids;chain_s_list($$.ids,$3.ids);}
  |SASSIGNMENT {$$=$1;}
  |LVALUE {init_op_type(&$$.ops);$$.ops.op=strdup($1);$$.ops.postop=NULL;$$.ids=insert_s_list(&$$.ids,$1);}
;

SASSIGNMENT:LVALUE '=' OPERATION {$$.ops.op=concat($1,convert_assignment($1,-1),$3.op,NULL);
$$.ops.preop=$3.preop;$$.ops.postop=$3.postop;$$.ids=insert_s_list(&$$.ids,$1);}
;

GLOBALDEFINITION:GLOBALDEFINITION ',' GLOBALDEFINITION {init_op_type(&$$);$$.op=concat($1.op,",",$3.op,NULL);chain_s_list($$.preop,$1.preop);chain_s_list($$.preop,$3.preop);chain_s_list($$.postop,$1.postop);chain_s_list($$.postop,$3.postop);}
  |GLOBALASSIGNMENT {$$=$1;}
  |LVALUE {init_op_type(&$$);$$.op=strdup($1);$$.postop=NULL;}
;

GLOBALASSIGNMENT:LVALUE '=' GLOBALOPERATION {$$.op=concat($1," =: ",$3.op,NULL);$$.preop=$3.preop;$$.postop=$3.postop;}
;

GLOBALOPERATION:GLOBALOPERATION OPERATOR GLOBALOPERATION {init_op_type(&$$);$$.op=concat($1.op,$2,$3.op,NULL);chain_s_list($$.preop,$1.preop);chain_s_list($$.preop,$3.preop);chain_s_list($$.postop,$1.postop);chain_s_list($$.postop,$3.postop);}
  |'('GLOBALOPERATION')' {$$=$2;$$.op=concat("( ",$2.op," )",NULL);}
  |ID         {init_op_type(&$$);$$.op=strdup($1);$$.postop=NULL;}
  |VALUE      {init_op_type(&$$);$$.op=strdup($1);$$.postop=NULL;}
  |SIZEOFDEF
;

DEFINITION:DEFINITION ',' DEFINITION {init_op_type(&$$);$$.op=$3.op;insert_s_list(&$1.preop,$1.op);chain_s_list($$.preop,$1.preop);chain_s_list($$.preop,$1.postop);chain_s_list($$.preop,$3.preop);chain_s_list($$.postop,$3.postop);}
  |OPERATION {$$=$1;}
  |ASSIGNMENT {$$=$1;}
;

ASSIGNMENT:LVALUE ASSIGNMENTOP OPERATION {$$.op=concat($1,convert_assignment($1,$2),$3.op,NULL);
$$.preop=$3.preop;$$.postop=$3.postop;}
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
OPERATION:OPERATION OPERATOR OPERATION {init_op_type(&$$);$$.op=concat($1.op,$2,$3.op,NULL);chain_s_list($$.preop,$1.preop);chain_s_list($$.preop,$3.preop);chain_s_list($$.postop,$1.postop);chain_s_list($$.postop,$3.postop);}
  |'('OPERATION')'{$$=$2;$$.op=concat("( ",$2.op," )",NULL);}
  |NOT OPERATION {init_op_type(&$$);$$.op=concat("not ",$2.op,NULL);insert_s_list(&$$.preop,$2.preop->op);insert_s_list(&$$.postop,$2.postop->op);}
  |VALUE         {init_op_type(&$$);$$.op=strdup($1);$$.postop=NULL;}
  |NAME          {$$=$1;}
  |INCR LVALUE   {init_op_type(&$$);insert_s_list(&$$.preop,concat($2," := 1 + ",$2,NULL));$$.op=strdup($2);}
  |DECR LVALUE   {init_op_type(&$$);insert_s_list(&$$.preop,concat($2," := 1 - ",$2,NULL));$$.op=strdup($2);}  
  |LVALUE INCR   {init_op_type(&$$);insert_s_list(&$$.postop,concat($1," := 1 + ",$1,NULL));$$.op=strdup($1);}
  |LVALUE DECR   {init_op_type(&$$);insert_s_list(&$$.postop,concat($1," := 1 - ",$1,NULL));$$.op=strdup($1);}                      
  |SIZEOFDEF
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

LOGICAL:AND         {$$=" and ";}
  |OR               {$$=" or ";}
;

BITWISE:BAND        {$$=" & ";}
  |BOR              {$$=" | ";}
  |BXOR             {$$=" xor ";}
  |BOC              {$$=" ~ ";}
  |LSHIFT           {$$=" shl ";}
  |RSHIFT           {$$=" shr ";}
;
NAME:RVALUE {$$=$1;}
  |LVALUE {init_op_type(&$$);$$.op=$1;$$.postop=NULL;}
;

RVALUE:BAND IDS           {init_op_type(&$$);$$.op=concat("@",$1,NULL);$$.postop=NULL;}
  |IDS '(' ARGDEFINITION ')'{init_op_type(&$$);$$.op=concat($1,"(",$3.op,")",NULL);$$.preop=$3.preop;$$.postop=$3.postop;}
  |IDS '('')'             {init_op_type(&$$);$$.op=concat($1,"(",")",NULL);$$.postop=NULL;}
;
ARGDEFINITION:ARGDEFINITION ',' ARGDEFINITION {init_op_type(&$$);$$.op=concat($1.op," , ",$3.op,NULL);}
  |OPERATION {$$=$1;}
  |ASSIGNMENT {$$=$1;}
;
IDS:ID'.'IDS {$$=concat($1,".",$3,NULL);}
  |ID {$$=$1;}
;

STAR:MULT STAR {$$=concat("^",$2,NULL);}
  |MULT   {$$="^";}
;

VALUE:VALINT {$$=strdup($1);}
  |VALREAL   {$$=strdup($1);}
  |VALCHAR   {$$=strdup($1);} 
  |VALSTR    {$$=strdup($1);} 
;

TYPE:MODIFIER TWO   {$$=init_type_rep();$$.mod=$1;$$=add_type_rep($$,$2);}
  |BASICTYPE THREE  {$$=init_type_rep();$$=$2;$$.b_type=strdup($1);}
  |BASICTYPE        {$$=init_type_rep();$$.b_type=strdup($1);}
  |MODIFIER         {$$=init_type_rep();$$.mod=$1;}
  |VISIBILITY TYPE  {$$=init_type_rep();$$.vis=$1;$$=add_type_rep($$,$2);}
;
TWO:MODIFIER TWO    {$$=init_type_rep();$$.mod=$1;$$=add_type_rep($$,$2);}
  |BASICTYPE THREE  {$$=init_type_rep();$$=$2;$$.b_type=strdup($1);}
  |BASICTYPE        {$$=init_type_rep();$$.b_type=strdup($1);}
  |MODIFIER         {$$=init_type_rep();$$.mod=$1;}
  |VISIBILITY TWO   {$$=init_type_rep();$$.vis=$1;$$=add_type_rep($$,$2);}
;
THREE: MODIFIER THREE {$$=init_type_rep();$$.mod=$1;$$=add_type_rep($$,$2);}
  |VISIBILITY THREE {$$=init_type_rep();$$.vis=$1;$$=add_type_rep($$,$2);}
  |MODIFIER         {$$=init_type_rep();$$.mod=$1;}
;

MODIFIER:SHORT  {$$.nb_short=1; $$.nb_long=0;$$.sign=1;}
  |LONG         {$$.nb_long=1; $$.nb_short=0;$$.sign=1;}
  |SIGNED       {$$.sign=1;$$.nb_long=0;$$.nb_short=0;}
  |UNSIGNED     {$$.sign=0;$$.nb_long=0;$$.nb_short=0;}
;

VISIBILITY:AUTO {$$.nb_auto=1;}
  |REGISTER     {$$.nb_register=1;}
  |STATIC       {$$.nb_static=1;}
  |EXTERN       {$$.nb_extern=1;}
;

BASICTYPE:INT {$$="int";} 
  |DOUBLE     {$$="double";}
  |FLOAT      {$$="float";}
  |CHAR       {$$="char";}
  |VOID       {$$="void";}
;

%%

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