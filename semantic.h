#include "semantic_types.h"
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
