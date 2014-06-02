#include <stdio.h>
int troca(int *l, int *f){
int maior;
maior=*l;
if (*f>maior){
	maior=*f;
	*f=*l;
	*l=maior;	
}	
}

int main (){
	int a,b;
	scanf("%d %d",&a,&b);
	troca(&a,&b);
	printf("%d\n %d\n",a,b);
	return (0);
}
