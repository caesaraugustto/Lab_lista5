#include <stdio.h>
#include <math.h>
int frac(float num,int *inteiro, float *frac){
*inteiro=(int)num;
*frac=num-*inteiro;
}

int main (){
	int in; 
	float a,fraci;
	scanf("%f",&a);
	frac(a,&in,&fraci);
	printf("%d\n",in);
	printf("%f",fraci);
	return (0);
}
