int test=0,Test=50,test1=50;
int Fact(int n){
	int res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}
int fact(int n){
	int res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}

int main(){
	int a,A;
	float b,B;
	double c;
	char d;
	long int e;
	long int long f;
	if(a){
		a++;
	}

	if(a<100)c+=++b;
	else{
		b+=++a;
	}

	if(a)c-=++b;
	else{
		b+=--a;
	}
	int x[100];
	for(int i=0;i<100;i++){
		if(i>50){
			x[i]=i*a;
		}else{
			x[i]=i % a;
		}
	}
	while(A<50){
		A=fact(a);
	}

	do
	{
		b+=++a;
	} while (b);
	int *TEst;
	TEst=malloc(sizeof(int));
	*TEst=100;	
	
}