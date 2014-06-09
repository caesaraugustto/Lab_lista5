#include <stdio.h>
int main (){	
	int a=1,*d; float b=2,*e; char c='a',*f;
	
	printf("anterior:%d\n",a);
	printf("anterior:%f\n",b);
	printf("anterior:%c\n",c);
	d=&a; e=&b;	f=&c;
	*d=5; *e=6; *f='b';
	printf("sucessor:%d\n",*d);
	printf("sucessor:%f\n",*e);
	printf("sucessor:%c\n",*f);		
	return (0);
}
