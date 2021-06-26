#include <stdio.h>
#include<string.h>
#include <stdlib.h>


int main(){
    int *a;
    a=malloc(sizeof(int));
    scanf("%d",a);


    printf("a= %d",*a);
    return 0;
}




