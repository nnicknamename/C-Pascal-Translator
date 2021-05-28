#include "semantic_types.h"

//operations semantics 



s_list * insert_s_list(s_list **head,char *operation){
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

void print_s_list(s_list *head,char *separator){
  s_list *temp=head;
  while(temp!=NULL){
    if(temp->op!=NULL){
      printf("%s %s",temp->op,separator);
    }
    temp=temp->next_op;
  }
}

void fprint_s_list(s_list *head,char *separator){
  s_list *temp=head;
  if(temp!=NULL){
    while(temp->next_op!=NULL){
      if(temp->op!=NULL){
        fprintf(out,"%s %s",temp->op,separator);
      }
      temp=temp->next_op;
    }
    if(temp->op!=NULL){
        fprintf(out,"%s ",temp->op);
      }
  }
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
void init_op_type(op_type *opr){
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
/*void init_decls(decl_type **declaration){
  decl_type *decl;
  decl=malloc(sizeof(decl_type));
  decl->type="NULL";//causes segmentation fault if printed before a change 
  init_op_type(&decl->ops);
  decl->ids=NULL;
  *declaration=decl;
} */

void init_local_type(local_type *local){
  local->ops=malloc(sizeof(s_list));
  local->ops->next_op=NULL;
  local->declarations=malloc(sizeof(decl_list));
  local->declarations->type="";
  local->declarations->ids=malloc(sizeof(s_list));
  local->declarations->ids->next_op=NULL;
  local->declarations->next=NULL;
}
local_type *concat_locals(local_type *local,decl_type decl){
  decl_list *temp=local->declarations;
  int concatenated=0;
  if(temp==NULL){

    init_local_type(local);
  }
    insert_s_list(&decl.ops.preop,decl.ops.op);
    chain_s_list(local->ops,decl.ops.preop);
    chain_s_list(local->ops,decl.ops.postop);  
  
  decl_list * x;
  while(temp!=NULL ){
      if(concatenated==0 && !strcmp(temp->type,decl.type)){
        chain_s_list(temp->ids,decl.ids);
        //print_s_list(temp->ids,"; ");
        concatenated=1;
      }
      temp=temp->next;
  }
  if(concatenated==0){
    x=malloc(sizeof(decl_list));
    decl_list *temp=local->declarations;
    if(temp==NULL){
      x->type=decl.type;
      x->next=local->declarations;
      x->ids=decl.ids;
      local->declarations=x;

      }else{
        while(temp->next!=NULL){
          temp=temp->next;
        }
        x->type=decl.type;
        x->next=NULL;
        x->ids=decl.ids;
        temp->next=x;
      }
  }
  return local;
}

void print_types( local_type local){
  decl_list *temp=local.declarations;
  while(temp!=NULL){
    print_s_list(temp->ids,", ");
    printf("%s \n",temp->type);
    temp=temp->next;
  }
}
void fprint_types(local_type local){
  decl_list *temp=local.declarations;
  fprintf(out,"var ");
  while(temp!=NULL){
    if(strcmp(temp->type,"")){
      fprint_s_list(temp->ids,", ");
      fprintf(out,": %s ;\n",temp->type);
    }
    temp=temp->next;
  }
}
//{fprint_s_list($1.ops.preop,";\n");fprintf(out,"%s ;\n",$1.ops.op);fprint_s_list($1.ops.postop,";\n");printf("%s ",$1.type);print_s_list($1.ids,",");printf(";\n");}