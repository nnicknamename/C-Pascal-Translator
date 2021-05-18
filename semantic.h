#include "semantic_types.h"

//operations semantics 

s_list * insert_s_list(s_list **head,char *operation){
  s_list *res =malloc(sizeof(s_list));
  res->op=operation;
  res->next_op=*head;
  *head=res;
  return res;
}
void print_s_list(s_list *head,char *separator){
  s_list *temp=head;
  while(temp!=NULL){
    if(temp->op!=NULL){
      fprintf(out,"%s %s",temp->op,separator);
    }
    temp=temp->next_op;
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