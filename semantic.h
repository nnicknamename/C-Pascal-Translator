#include "semantic_types.h"
#include "function_translator/func_trans.h"
#include <string.h>
//operations semantics 
char* concat(const char * args,...);
char* convert_type(type_rep type);
char* f_context;
int length_s_list(s_list **head){
  int res=0;
  s_list *temp=*head;
  while(temp->next_op!=NULL){
    res++;
    temp=temp->next_op;
  }
  return res;
}

s_list * insert_s_list(s_list **head,char *operation){
  if(strcmp(operation,"")!=0){
  s_list *res=malloc(sizeof(s_list));
  s_list *temp=*head;
  if(temp==NULL){
    res->op=operation;
    res->next_op=*head;
    *head=res;
  }else{
    while(temp->next_op!=NULL){
      temp=temp->next_op;
    }
      res->op=operation;
      res->next_op=NULL;
      temp->next_op=res;
  }
  return res;
  }
  return *head;
}
s_list * insert_first_s_list(s_list **head,char *operation){
  if(strcmp(operation,"")!=0){
  s_list *res=malloc(sizeof(s_list));
  s_list *temp=*head;
    res->op=operation;
    res->next_op=*head;
    *head=res;
  return res;
  }
  return *head;
}
s_list * insert_n_s_list(s_list **head,char *operation,int n){
  if(strcmp(operation,"")!=0){
    s_list *res=malloc(sizeof(s_list));
    s_list *temp=*head;
    s_list *temp1=*head;

    if(temp!=NULL){
    {
      while(temp->next_op!=NULL && n>0){
        temp1=temp;
        temp=temp->next_op;
        n--;
      }
        res->op=operation;
        res->next_op=temp->next_op;
        temp->next_op=res;
    }
    return res;
    }
    return *head;
  }
}
void postfix_s_list(s_list *head,char *postfix){
  s_list *temp=head;
    while(temp!=NULL){
      if(temp->op!=NULL && strcmp(temp->op,"")){
        temp->op=concat(temp->op,postfix,NULL);
      }
      temp=temp->next_op;
    }
}
void prefix_s_list(s_list *head,char *prefix){
  s_list *temp=head;
    while(temp!=NULL){
      if(temp->op!=NULL && strcmp(temp->op,"")){
        temp->op=concat(prefix,temp->op,NULL);
      }
      temp=temp->next_op;
    }
}
void postfix_last_s_list(s_list *head,char *postfix){
  s_list *temp=head;
    while(temp!=NULL){
      if(temp->next_op==NULL &&temp->op!=NULL && strcmp(temp->op,"")){
        temp->op=concat(temp->op,postfix,NULL);
      }
      temp=temp->next_op;
    }
}

void print_s_list(s_list *head,char *separator){
  s_list *temp=head;
  while(temp!=NULL){
    if(temp->op!=NULL && strcmp(temp->op,"")){
      printf("%s %s",temp->op,separator);
    }
    temp=temp->next_op;
  }
}

void fprint_s_list(s_list *head,char *separator){
  s_list *temp=head;
  int tabs=0;
  if(temp!=NULL){
    while(temp->next_op!=NULL){
      if(temp->op!=NULL){
        if(strncmp(temp->op,"end",3)==0){
            tabs--;
        }

        for(int i=0;i<tabs;i++){
          fprintf(out,"\t");
        }
        if(strncmp(temp->op,"begin",5)==0){
          tabs++;
        }
        if(strcmp(temp->op,"")){
        fprintf(out,"%s %s",temp->op,separator);
        }
      }
      temp=temp->next_op;
    }
    if(temp->op!=NULL){
        fprintf(out,"%s ",temp->op);
      }
  }
}

char * sprint_s_list(s_list *head,char *separator){
  s_list *temp=head;
  char *res="";
  if(temp!=NULL){
    while(temp->next_op!=NULL){
      if(temp->op!=NULL && strcmp(temp->op,"")){
        res=concat(res,temp->op,separator,NULL);
      }
      temp=temp->next_op;
    }
    if(temp->op!=NULL && strcmp(temp->op,"")){
        res=concat(res,temp->op,NULL);
      }
  }
  return res;
}

void chain_s_list(s_list *list1,s_list *list2){
  if(list1!=NULL){
    s_list *temp=list1;
    while(temp->next_op!=NULL){
      temp=temp->next_op;
    }
    temp->next_op=list2;
  }else{
    list1=list2;
  }
}

s_list * insert_s_list_id(s_list **head,char *operation){

  if(strcmp(operation,"")!=0){
  s_list *res=malloc(sizeof(s_list));
  s_list *temp=*head;
  s_list *temp1;
  if(temp==NULL){
    res->op=operation;
    res->next_op=*head;
    *head=res;
  }else{
    while(temp!=NULL){
      if(!strcmp(temp->op,operation)){
        return *head;
      }
      temp1=temp;
      temp=temp->next_op;
    }
      res->op=operation;
      res->next_op=NULL;
      temp1->next_op=res;
  }

  return res;
  }
  return *head;
}

void chain_s_list_id(s_list *list1,s_list *list2){
  if(list2!=NULL ){
    s_list *temp=list2;
    while(temp!=NULL){
      if(temp->op!=NULL){

        insert_s_list_id(&list1,temp->op);
      }
      temp=temp->next_op;
    }
  }
}

void init_op_type(op_type *opr){
  opr->simple=1;
  opr->preop=malloc(sizeof(s_list));
  opr->postop=malloc(sizeof(s_list));
  opr->preop->next_op=NULL;
  opr->postop->next_op=NULL;
}
//type semantics 

type_rep add_type_rep(type_rep type1,type_rep type2){
  type_rep res;
  res.b_type=type2.b_type;
  res.mod.nb_long= type1.mod.nb_long+ type2.mod.nb_long;
  res.mod.nb_short=type1.mod.nb_short+ type2.mod.nb_short;
  res.mod.sign=type1.mod.sign && type2.mod.sign;
  res.vis.nb_auto=type1.vis.nb_auto+ type2.vis.nb_auto;
  res.vis.nb_extern=type1.vis.nb_extern+ type2.vis.nb_extern;
  res.vis.nb_register=type1.vis.nb_register+ type2.vis.nb_register;
  res.vis.nb_static=type1.vis.nb_static+ type2.vis.nb_static;
  return res ;
}

type_rep init_type_rep(){
  type_rep res;
  res.b_type="int";
  res.mod.nb_long=0;
  res.mod.nb_short=0;
  res.mod.sign=1;
  res.vis.nb_auto=0;
  res.vis.nb_extern=0;
  res.vis.nb_register=0;
  res.vis.nb_static=0;
  return res ;
}

//LOCAL semantics 
void init_local_type(local_type *local){
  local->ops=malloc(sizeof(s_list));
  local->ops->next_op=NULL;
  local->declarations=malloc(sizeof(decl_list));
  local->declarations->type="";
  local->declarations->ids=malloc(sizeof(s_list));
  local->declarations->ids->next_op=NULL;
  local->declarations->next=NULL;
}

local_type *insert_decl_in_loc(local_type *local,decl_type decl){
  decl_list *temp=local->declarations;
  int concatenated=0;
  decl_list * x;
  x=malloc(sizeof(decl_list));
  if(temp==NULL){
    init_local_type(local);
    x->type=decl.type;
    x->next=local->declarations;
    x->ids=decl.ids;
    local->declarations=x;
  }else{  
    while(temp!=NULL){
        //printf("at line %d\n",line );
        if(concatenated==0 && !strcmp(temp->type,decl.type)){
            chain_s_list_id(temp->ids,decl.ids);
            concatenated=1;
        }   
        temp=temp->next;
    }
    if(concatenated==0){
        decl_list *temp=local->declarations;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        x->type=decl.type;
        x->next=NULL;
        x->ids=decl.ids;
        temp->next=x;
       // printf("type: %s\n",x->type);
    }
  }
    insert_s_list(&decl.ops.preop,decl.ops.op);
    chain_s_list(local->ops,decl.ops.preop);
    chain_s_list(local->ops,decl.ops.postop);  
    return local;
}

void chain_decl_list(decl_list *decl1,decl_list *decl2){
int concatenated=0;
  decl_list *temp2=decl2;
  while(temp2!=NULL){
    concatenated=0;
    decl_list *temp1=decl1;
    while(temp1!=NULL){
        //printf("at line %d\n",line );
        if(concatenated==0 && !strcmp(temp1->type,temp2->type)){
          chain_s_list_id(temp1->ids,temp2->ids);
          concatenated=1;
        }
        temp1=temp1->next;
    }
    decl_list * x;
    if(concatenated==0){
    x=malloc(sizeof(decl_list));
    decl_list *temp=decl1;
    if(temp==NULL){
      x->type=temp2->type;
      x->next=decl1;
      x->ids=temp2->ids;
      decl1=x;
      }else{
        while(temp->next!=NULL){
          temp=temp->next;
        }
        x->type=temp2->type;
        x->next=NULL;
        x->ids=temp2->ids;
        temp->next=x;
      }
  }
    temp2=temp2->next;
  }
}

void chain_local(local_type *local1,local_type *local2){
  chain_s_list(local1->ops,local2->ops);
  chain_decl_list(local1->declarations,local2->declarations);
}

void print_types(local_type local){
  decl_list *temp=local.declarations;
  while(temp!=NULL){
    print_s_list(temp->ids,", ");
    printf("%s \n",temp->type);
    temp=temp->next;
  }
}

void fprint_types(local_type local){
  decl_list *temp=local.declarations;
  int first=1;
  while(temp!=NULL){
    if(strcmp(temp->type,"")){
      if(first){
        fprintf(out,"var ");
        first=0;
      }
      fprint_s_list(temp->ids,", ");
      fprintf(out,": %s ;\n",temp->type);
    }
    temp=temp->next;
  }
}

void fprint_functions(type_rep type,char * name,char *args,local_type local){

  if(strncmp(name,"main",4)){
    char *type_converted=convert_type(type);
    if(type_converted!=NULL){
      fprintf(out,"function %s ( %s ) : %s;\n",name,args,convert_type(type));
    }else{
      fprintf(out,"procedure %s ( %s );\n",name,args);
    }
    fprint_types(local);
    fprintf(out,"BEGIN\n");
    fprint_s_list(local.ops,"\n");
    fprintf(out,"\nEND;\n");
  }else{
    main_local=local;
  }
} 

void generate_main(){
    fprint_types(main_local);
    fprintf(out,"BEGIN\n");
    fprint_s_list(main_inits,"\n");
    fprintf(out,"\n");
    fprint_s_list(main_local.ops,"\n");
    fprintf(out,"\nEND.\n");
}

char *scanf_pointer_handler(char * var){
  if(strncmp(var,"@",1)==0){
    var++;
  }else{
    var=concat(var,"^",NULL);
  }
  return var;
}

char* scanf_args_list_handler(op_list *args){
  op_list *temp=args;
  char *res=" ";
  while(temp->next!=NULL){
    res=concat(res,scanf_pointer_handler(temp->ops.op)," , ",NULL);
    temp=temp->next;
  }
  res=concat(res,scanf_pointer_handler(temp->ops.op),NULL);

  return res;
}

s_list *op_list_to_preop_list(op_list *args){
  op_list *temp=args;
  s_list *res=NULL;

  while(temp!=NULL){
    chain_s_list(res,args->ops.preop);
    temp=temp->next;
  }

  return res;
}
s_list *op_list_to_postop_list(op_list *args){
  op_list *temp=args;
  s_list *res=NULL;
  while(temp!=NULL){
    chain_s_list(res,args->ops.preop);
    temp=temp->next;
  }

  return res;
}

char* scanf_list_handler(op_list *args){
  op_list *temp=args;
  char *res=" ";
  while(temp->next!=NULL){
    res=concat(res,temp->ops.op," , ",NULL);
    temp=temp->next;
  }
  res=concat(res,temp->ops.op,NULL);

  return res;
}

op_type function_call_handler(char * name,op_list *args){
  op_type res;
  init_op_type(&res);
  if(strncmp(name,"printf",6)==0){
    res.op=generate_function(args->ops.op,args->next);
  }else{
    if(strncmp(name,"scanf",5)==0){
      
      res.op=concat("read(",scanf_args_list_handler(args),")",NULL);
    }else{
      res.op=concat(name,"(",scanf_list_handler(args),")",NULL);
    }
  }

  //printf("function %s :%s \n",name,res.op);
  res.preop=op_list_to_preop_list(args);
  res.postop=op_list_to_postop_list(args);
  return res;
}

char *serialize_op(op_type decl){
  postfix_s_list(decl.preop,";");
  postfix_s_list(decl.postop,";");
  decl.op=strcmp(decl.op,"")?concat(decl.op,";",NULL):"";
  insert_s_list(&decl.preop,decl.op);
  decl.op=concat(sprint_s_list(decl.preop,""),sprint_s_list(decl.postop,";"),NULL);
  return  decl.op;
}

char *sprint_stars(int n){
  char *res=malloc(sizeof(char)*n);
  for(int i=0;i<n;i++){
    strcat(res,"^");
  }
  return res;
}


char * generate_name_lval(lval_def lval){
  char * res;
  if(lval.type==simple){
    res=lval.id;
  }else{
    res=concat(lval.id,"[",sprint_s_list(lval.dimentions," ,"),"]",NULL);
  }
  res=concat(res,sprint_stars(lval.nbpointers),NULL);
  return res;
}

local_type for_loop_handler(decl_op_list expr1,decl_op_list expr2,decl_op_list expr3,local_type codeblock){
  local_type res=codeblock;  

  //insert the incrementation part at the end of the loop 
  insert_n_s_list(&res.ops,serialize_op(expr3.ops),length_s_list(&res.ops)-1);
  //insert the loop header at the begining of the list 
  insert_first_s_list(&res.ops,concat("while","(",expr2.ops.op,") do",NULL));
  //put the declaration on top of the loop 
  insert_first_s_list(&res.ops,serialize_op(expr1.ops));

  //chain the declarations of all the parts 
  chain_decl_list(res.declarations,expr1.declarations);
  chain_decl_list(res.declarations,expr2.declarations);
  chain_decl_list(res.declarations,expr3.declarations);

  //put ; at the end of the loop
  postfix_last_s_list(res.ops," ;");
  return res;
}

void chain_lval_list(lval_list *list1,lval_list *list2){
  if(list1!=NULL){
    lval_list *temp=list1;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=list2;
  }else{
    list1=list2;
  }
}

void decrease_val(s_list *lval){
  s_list* temp=lval;
  while (temp!=NULL){
    if(temp->op!=NULL && strcmp(temp->op,"")){
      //printf("tesddt\n");
      sprintf(temp->op,"%d",atoi(temp->op)-1);
    }
    temp=temp->next_op;
  }
  
}

char * array_type(lval_def lval ,type_rep type){
  decrease_val(lval.dimentions);
  prefix_s_list(lval.dimentions,"0..");
  if(lval.inits!=NULL){
    return concat(sprint_stars(lval.nbpointers),"array [",sprint_s_list(lval.dimentions,","),"] of ",convert_type(type),"= (",lval.inits,")",NULL);
  }else{
    return concat(sprint_stars(lval.nbpointers),"array [",sprint_s_list(lval.dimentions,","),"] of ",convert_type(type),NULL);
  }
}

decl_list declaration_handler(type_rep type,lval_list lvals){
  decl_list *res=NULL;
  lval_list *temp=&lvals;
  //printf("test\n");
  while(temp!=NULL){
    if(temp->lval.type==array){
      decl_list *x=malloc(sizeof(decl_list));
      x->type=array_type(temp->lval,type);
      x->ids=malloc(sizeof(s_list));
      x->ids->op=temp->lval.id;
      x->ids->next_op=NULL;
      x->next=NULL;
      if(res==NULL){
        res=x;
      }
      chain_decl_list(res,x);
    }else{
      decl_list *x=malloc(sizeof(decl_list));
      x->type=concat(sprint_stars(temp->lval.nbpointers),convert_type(type),NULL);
      x->ids=malloc(sizeof(s_list));
      x->ids->op=temp->lval.id;
      x->ids->next_op=NULL;
      x->next=NULL;
      if(res==NULL){
        res=x;
      }
      chain_decl_list(res,x);
    }
    temp=temp->next;
  }

  //fprint_decl_list(res);
  return *res;
}

void fprint_decl_list(decl_list *list){
  decl_list *temp=list;
  int first=1;
  while(temp!=NULL){
    printf("expressionr\n");
    if(strcmp(temp->type,"")){
      if(first){
        fprintf(out,"var ");
        first=0;
      }
      fprint_s_list(temp->ids,", ");
      fprintf(out,": %s ;\n",temp->type);
    }
    temp=temp->next;
  }
}

//********************************************************************

enum treatment{
  mall=0,
  fre=1,
  scan=2
};

typedef  struct func_tests{
  char * detect;
  int action;
}func_tests;

const struct func_tests dect1[]={
   {"malloc(",mall},
   {"free(",fre},
   {"read(",scan}
};

int get_action(char* opr){
  for(int i=0;i<3;i++){ 
      if(strncmp(opr,dect1[i].detect,strlen(dect1[i].detect))==0){
        return dect1[i].action;
      }
  }
  return -1;
}

char* special_func_handler(char* opr,lval_def lval){
  switch(get_action(opr)){
    case mall:
      if(lval.id!=NULL){
        opr+=7;
        opr=concat("getmem(",lval.id," ,",opr,NULL);
      }
    break;
    case fre:
      if(lval.id== NULL){
        opr+=5;
        opr=concat("freemem(",opr,NULL);
      }
    break;

    case scan:
    //printf("prr\n");
      if(lval.id== NULL){
        opr=strchr(opr,',')+1;
        opr=concat("read(",opr,NULL);
      }
    break;

    default:
      return  NULL;
  }
}

//********************************************************************

op_type func_handler(op_type opr){
  op_type res;
  lval_def l;
  l.id=NULL;
  res.op=NULL;
  res.op=special_func_handler(opr.op,l);
  if(res.op==NULL){
    return opr;
  }
  res.preop=opr.preop;
  res.postop=opr.postop;
  return res;
}


op_type assign_handler(lval_def lval,int t_val,op_type opr){
  op_type res;
  res.op=NULL;
  res.op=special_func_handler(opr.op,lval);
  if(res.op==NULL && lval.id!=NULL){
    res.op=concat(generate_name_lval(lval),convert_assignment(lval.id,t_val),opr.op,NULL);
  }
  res.preop=opr.preop;
  res.postop=opr.postop;
  return res;
}

char * cond_handle(op_type opr){
  char * res;
  res=opr.op;
  if(opr.conditional==0){
      res=concat(opr.op," > 0",NULL);
  }
  return res;
}



void chain_op_list(op_list *list1,op_list *list2){

if(list1!=NULL){
    op_list *temp=list1;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=list2;
  }else{
    list1=list2;
  }

}