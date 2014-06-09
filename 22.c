#include <stdio.h>
#define n 10
int insere (int a[],int b){
	int *l,i;	
	for(l=a,i=0;i<n;*l++,i++)
	*l=b;	
}

int main (){
	int vetor[n],num,i;
	scanf("%d",&num);
	insere(vetor,num);	
	return(0);
}

