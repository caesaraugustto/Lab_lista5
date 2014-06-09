#include <stdio.h>
int soma(int *l, int *f){
*l=*l+*f;
}

int main (){
	int a,b;
	scanf("%d %d",&a,&b);
	soma(&a,&b);
	printf("\n%d \n%d",a,b);
	return (0);
}
