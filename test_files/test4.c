#include<stdio.h>
int main(){


    float x=5,y=10;
    while(a+b>0){
        int a=5,b=3 ,c=8;
        if(a*c<=5000000000)
            a=a+b+c;
        else{
            float k;
            k=k*10+50+90;
            a+a;
            if(k+5>0){
            k=k*10+50+90;
            k=k*10+50+90;
            }
        }
    }
    return 0;
}
//init_op_type(&$$.ops);$$.ops.op=$3.ops.op;chain_s_list($$.ops.postop,$3.ops.postop);insert_s_list(&$1.ops.preop,$1.ops.op);chain_s_list($$.ops.preop,$1.ops.preop);

/*
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
        printf("at line %d\n",line );
        if(concatenated==0 && !strcmp(temp->type,decl.type)){
            chain_s_list(temp->ids,decl.ids);
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
        printf("type: %s\n",x->type);
    }
  }
    insert_s_list(&decl.ops.preop,decl.ops.op);
    chain_s_list(local->ops,decl.ops.preop);
    chain_s_list(local->ops,decl.ops.postop);  
    return local;
}*/