#include <stdio.h>
#include <math.h>
#define n 10
void maior_vezes(int v[],int *m, int *x){
	int i;
	*m=v[0];
	*x=1;
for (i=1;i<n;i++)
if (v[i]==*m)
*x=*x+1;
else{
if (v[i]>*m){
*m=v[i];
*x=0;
*x=*x+1;
}
}
}

int main (){
	int vetor[n],i,maior,vezes; 
	for (i=0;i<n;i++)
	scanf("%d",&vetor[i]);
	maior_vezes(vetor,&maior,&vezes);
	printf("%d %d",maior,vezes);
	return (0);
}
