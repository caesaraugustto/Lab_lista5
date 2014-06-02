#include <stdio.h>
int troca(int *l, int *f){
int aux;
aux=*l;
*l=*f;
*f=aux;	
}

int main (){
	int a,b;
	scanf("%d %d",&a,&b);
	troca(&a,&b);
	printf("%d\n %d\n",a,b);
}
