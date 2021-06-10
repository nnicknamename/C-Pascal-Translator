#include<stdio.h>

int b,c;
float r;
float minus(float x,float y){
    float a=5;
    while(10>5){
        a=a+x+y; 
        if(a>10){
        a=a+x+y; 
        do
        {
            a=++a+x+y++; 
        } while (a<100);
        
        }else{
            b++;
        }    
    }
    return a;
}

int main(){
int l=2435;
int a=0;
    for(int i=0;i<10;i=i+1){
        a%=l;
        a++;
        a++;
    }

}
//init_op_type(&$$.ops);$$.ops.op=$3.ops.op;chain_s_list($$.ops.postop,$3.ops.postop);insert_s_list(&$1.ops.preop,$1.ops.op);chain_s_list($$.ops.preop,$1.ops.preop);
