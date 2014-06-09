#include <stdio.h>
#define n 10
int insere (int a[]){
	int *l,i;	
	for(l=a,i=0;i<(sizeof(a))+1;*l++,i++)
	printf("%d\n",*l);	
}

int main (){
	int vetor[]={1,2,3,4,5};	
	insere(vetor);	
	return(0);
}

