#include <stdio.h>
#include <math.h>
#define N 10
void _maior(int v[],int *m){
	int i;
	*m=v[0];	
for (i=1;i<N;i++){
if (v[i]>*m)
*m=v[i];
}
}

int main (){
	int vetor[N],i,maior,k; 
	for (i=0;i<N;i++)
	scanf("%d",&vetor[i]);
	_maior(vetor,&maior);
	printf("Digite com quantos elementos deve ser impresso o vetor\n");
	scanf("%d",&k);
	for(i=0;(i<k) && (k<=N);i++)
	printf("%d\n",vetor[i]);
	printf("O maior numero e:\n");
	printf("%d\n",maior);
	return (0);
}
