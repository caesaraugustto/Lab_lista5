#include <stdio.h>
int soma_dobro(int *l, int *f,int *s){
*l=(*l)*2;
*f=(*f)*2;
*s=*l+*f;
}

int main (){
	int a,b,soma;
	scanf("%d %d",&a,&b);
	soma_dobro(&a,&b,&soma);
	printf("A soma do dobro e:%d",soma);
	return (0);
}
