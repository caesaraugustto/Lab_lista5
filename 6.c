#include <stdio.h>
#include <math.h>
int ler (float *l, float *f, float *g){
	float a,b,c;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
*l=a;
*f=b;
*g=c;
}
int raizes (float a,float b,float c,float *x1, float *x2){
	float delta;
	delta=((b*b)-4*a*c);
*x1=(-b+(pow(delta,1/2)))/(2*a);
*x2=(-b-(pow(delta,1/2)))/(2*a);
}

int main (){
	float a,b,c,x1,x2;
	ler(&a,&b,&c);
	raizes(a,b,c,&x1,&x2);
	printf("%.2f\n",x1);
	printf("%.2f",x2);
	return (0);
}
