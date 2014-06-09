#include <stdio.h>
#define n 3
int main (){
	float v[n][n]={1,2,3,4,5,6,7,8,9};
	int i,j;
	for (i=0;i<n;i++)
	for (j=0;j<n;j++)
	printf("%d\n",&v[i][j]);
	return(0);	
}
