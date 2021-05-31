#include <stdio.h>
#include<string.h>
#include <stdlib.h>



op_type op_concat(op_type op1,char *opr,op_type op2);

int main(){
    op_type t1;
    t1.preop="tt";
    op_type t2;
    t2.preop="gg";
    op_type t3=op_concat(t1,"test",t2);
    
    return 0;
}
op_type op_concat(op_type op1,char *opr,op_type op2){
  op_type res;
  res.op=malloc(strlen(op1.op)+strlen(opr)+strlen(op2.op));
  res.preop=malloc(strlen(op1.preop)+strlen(op2.preop));
  res.postop=malloc(strlen(op1.postop)+strlen(op2.postop));
  sprintf(res.op,"%s%s%s",op1.op,opr,op2.op);
  sprintf(res.preop,"%s%s",op1.op,op2.op);
  sprintf(res.postop,"%s%s",op1.op,op2.op);
  return res;
}



