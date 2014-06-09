#include <stdio.h>
#include <string.h>

int verifica (char a[],char b[]){
	char *l,*p;
	l=a; p=b;
	
	if(strstr(l,p))
	printf("a segunda esta contida na primeira");
	else
	printf("nao esta contida");
	
}

int main (){
	char v1[]="banor",v2[]="amor";	
	verifica(v1,v2);
	
	
	return(0);	
}
