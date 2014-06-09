#include <stdio.h>
#include <math.h>
#define N 10
void min_max(int v[],int *min,int *max){
	int i;
	*max=v[0];
	*min=v[0];	
for (i=1;i<N;i++){
if (v[i]>*max)
*max=v[i];
if (v[i]<*min)
*min=v[i];
}
}

int main (){
	int vetor[N],i,min,max; 
	for (i=0;i<N;i++)
	scanf("%d",&vetor[i]);
	min_max(vetor,&min,&max);	
	return (0);
}
