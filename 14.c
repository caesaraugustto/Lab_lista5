#include <stdio.h>
#define n 6
int main (){	
	int v[n]={1,2,3,4,5,6},i;
	int *d;
	d=v;
	for(i=0;i<n;i++)
	d[i]=d[i]+1;
	for(i=0;i<n;i++)
	printf("%d",v[i]);					
	return (0);
}
