#include <stdio.h>
int exibe_dados(float a,float b,float c,float d){
	printf("A nota 1 e:%.2f, a nota 2 e:%.2f,\n a media simples e:%.2f e a media ponderada e:%.2f",a,b,c,d);}
int le_notas (float *l, float *f){
scanf("%f",l);
scanf("%f",f);
}
int calc_media (float *l, float *f){
float media_simp,media_pond;
media_simp=(*l+*f)/2;
media_pond=((*l)+((*f)*2))/3;
exibe_dados(*l,*f,media_simp,media_pond);
}

int main (){
   float a,b;	
	le_notas(&a,&b);
	calc_media(&a,&b);	
	return (0);
}
