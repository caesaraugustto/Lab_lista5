#include <stdio.h>
int troca(int *l, int *f, int *g){
int menor,meio,maior;
if(*l==*f&&*f==*g)
return (1);
if(*l>*f&&*l>*g){
	maior=*l;
	if(*f>*g){
		meio=*f;
		menor=*g;
	}else{
	meio=*g;
	menor=*f;	
	}
}
if (*l>*f&&*l<*g){
	meio=*l;
	menor=*f;
	maior=*g;
}
if (*l<*f&&*l<*g){
	menor=*l;
	if (*f<*g){
		meio=*f;
		maior=*g;		
	}else{
	meio=*g;
	maior=*f;	
	}
}
*l=menor;
*f=meio;
*g=maior;
return(0);	
}

int main (){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	troca(&a,&b,&c);
	printf("\n%d \n%d \n%d",a,b,c);
	return (0);
}
