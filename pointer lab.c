#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
//	int *i;
//	int a=8;
//	i=&a;
//	printf("%d",*i);
	
	
	int a=5;
	int b=8;
	int*p;
	p=&a;
	a=b;
	b=*p;
	printf(" a is %d  b is %d",a,b);
	
	return 0;
}
