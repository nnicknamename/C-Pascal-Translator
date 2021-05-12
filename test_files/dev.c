#include<stdio.h>	//importer stdio pour la lecture et ecriture
#include<unistd.h>	//importer unistd pour utiliser les tubes
//#include<sys/wait.h>//importer sys/wait pour utiliser wait
int a,b,c,d;//declaration des variables a,b,c et d

int p[2]; //declaration de tube p
int p1[2];//declaration de tube p1
int p2[2];//declaration de tube p2

void AplusB(){
   int result=a+b;//calcule a+b
   write(p[1],&result,sizeof(int));//ecriture de a+b dans le tube p1
}

void CplusD(){
   int result=c+d;//calcule c+d
   write(p[1],&result,sizeof(int));//ecriture de c+d dans le tube p1
}

void AmultB(){
   int result=a*b;//calcule de a*b
   write(p2[1],&result,sizeof(int));//ecriture de a*b dans le tube p2
}

void CmultD(){
  	int result=c*d;//calcule de c*d
    int f;
	read(p2[0],&f,sizeof(int));//recuperer le resultat de a*b pour attendre la fin de son calcule 
	write(p2[1],&f,sizeof(int));//remettre la valeure de a*b dans le tube p2
	write(p2[1],&result,sizeof(int));//ecriture de c*d dans le tube p1
}

void mult(){
   int resultat1,resultat2;//declaration resultat a+b et c+d ,l'ordre n'est pas important  
   int id_AplusB=fork();//creation du processus AplusB
	if(id_AplusB==0){//code du precessus fils
		AplusB();
	}else{
		int id_CplusD=fork();//creation du precessus CplusD
		if(id_CplusD==0){//code du precessus fils 
			CplusD();
		}else{//code du precessus pere  
			read(p[0],&resultat1,sizeof(int));//lecture du premier resultat dans le tube p
			read(p[0],&resultat2,sizeof(int));//lecture du dexieme resultat dans le tube p
   			float result=(float)resultat1*resultat2;//calcule de (a+b)*(c+d)
			write(p1[1],&result,sizeof(float));//ecriture de (a+b)*(c+d)
		}
	}

}
void sub(){
 	int AmultB_result,CmultD_result;//declaration resultat a*b et c*d respectivement ,l'ordre important 
   	int id_AmultB=fork();//creation du processus AmultB
	if(id_AmultB==0){//code du precessus fils 
		AmultB();
	}else{//code du precessus pere 
		int id_CmultD=fork();//creation du processus CmultD
		if(id_CmultD==0){
			CmultD();
		}else{//code du precessus pere 		
			//attendre la fin des 2 processus AmultB et CmultD
			//c'est important d'attendre la fin des deux processus, sinon la lecture de
			// a*b peut ce faire avant la fin de c*d (le programme ne continue pas l'execution)
			wait(NULL);
			wait(NULL);
			read(p2[0],&AmultB_result,sizeof(int));//lecture de a*b de pipe2
   			read(p2[0],&CmultD_result,sizeof(int));//lecture de c*d de pipe2
   			float result=(float)AmultB_result-CmultD_result;//calcule de (a*b)-(c*d)
  			int f;
			read(p1[0],&f,sizeof(float));//recuperer le resultat de mut pour attendre la fin de son calcule 
			write(p1[1],&f,sizeof(float));//remettre la valeure de a*b dans le tube p2
   			write(p1[1],&result,sizeof(float));//ecriture de (a*b)-(c*d) dans le tube p1
		}
	}
}

void divide(){
   float mult_result,sub_result;//declaration resultat (a+b)*(c+d) et (a*b)-(c*d) respectivement ,l'ordre important
   int id_mult=fork();
	if(id_mult==0){
		mult();
	}else{
		int id_sub=fork();
		if(id_sub==0){
			sub();
		}else{
			//attendre la fin des 2 processus mult et sub
			//c'est important d'attendre la fin des deux processus, sinon la lecture de
			// a*b peut ce faire avant la fin de c*d (le programme ne continue pas l'execution)
			wait(NULL);
			wait(NULL);
			read(p1[0],&mult_result,sizeof(float));//lecture de (a+b)*(c+d) a partire de tube p1
   		read(p1[0],&sub_result,sizeof(float));//lecture de (a*b)-(c*d) a partire de tube p1
   		float result=mult_result/sub_result;//calcule de (a+b)*(c+d)/(a*b)-(c*d)
   		printf("resultat %f\n",result);//affichage de (a+b)*(c+d)/(a*b)-(c*d)
		}
	}
}

void lire_les_donnee(){// lecture de a,b,c et d
   	printf("a=");
  	scanf("%d",&a);
   	printf("b=");
   	scanf("%d",&b);
   	printf("c=");
   	scanf("%d",&c);
   	printf("c=");
   	scanf("%d",&d);
}

int main(){
	pipe(p);//initialisation de tube p
	pipe(p1);//initialisation de tube p1
	pipe(p2);//initialisation de tube p2
	lire_les_donnee();
	divide();
	return 0;
}
