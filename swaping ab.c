#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,temp;
/*	a=5;
	b=6;
	temp=a;
	a=b;
	b=temp;*/
	a=5;
	b=6;
	a=a+b;
	b=a-b;
	a=a-b;

	
	printf("%d %d",a,b);
	
	return 0;
}
