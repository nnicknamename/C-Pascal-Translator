#include<stdio.h>
#include<stdlib.h>


int main(){
    int a,c[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            c[i][j]=i*j;
        }
    }


    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            write(c[i][j]," ");
        }
        writeln();
    }

    return 0;
}
//init_op_type(&$$.ops);$$.ops.op=$3.ops.op;chain_s_list($$.ops.postop,$3.ops.postop);insert_s_list(&$1.ops.preop,$1.ops.op);chain_s_list($$.ops.preop,$1.ops.preop);
//valgrind