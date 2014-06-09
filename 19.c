#include <stdio.h>
#define n 5
int main (){
	int v[n];
	int i,*a;
	a=v;
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	printf("%d\n",a[i]*2);
	return(0);	
}
