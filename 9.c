#include <stdio.h>
#include <math.h>
#define n 10
#define m 5
#define p 5
int soma_vetores(int v1[],int w1[],int a[]){
	int i,*x;
	x=a;
	if (m!=p){
	printf("Erro!");
	return(0);
}
	for(i=0;i<m;i++,*x++)
	*x=(v1[i]+w1[i]);		
	return(0);
}

int main (){
	int v[m]={1,6,9,8,7}; 
	int w[p]={1,2,3,4,5};
	int y[n],i;	
	soma_vetores(v,w,y);
	for(i=0;i<m;i++)
	printf("%d\n",y[i]);
	return (0);
}
