#include<stdio.h>
int a[10][100][500],*b[500];
long int fact(int n){
    long int res=1;
    for(int i=1;i<n;i++){
        res*=i;
    }
    return res;
}

int main(){
    write(fact(10));
}
//init_op_type(&$$.ops);$$.ops.op=$3.ops.op;chain_s_list($$.ops.postop,$3.ops.postop);insert_s_list(&$1.ops.preop,$1.ops.op);chain_s_list($$.ops.preop,$1.ops.preop);
//valgrind