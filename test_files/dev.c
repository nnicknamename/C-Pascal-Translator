#include<stdio.h>

int fact(int n){
	int res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}

int main(){
	int n;

	scanf("%d",&n);
	int k=fact(n);
	printf("fact %d = %d\n",n,k);
	return 0;
}