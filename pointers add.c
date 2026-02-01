#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	int *p=&i;
	*p=5;
	int *m=&j;
	*m=7;
	int result=*p+*m;

	printf("\nthe addresss of i : %d",&i);
	printf("\nthe addresss of j : %d",&j);
	printf("\nthe value of i : %d",*p);
	printf("\nthe value of j : %d",*m);
		printf(" \nthe sum of i and j is %d",result);
	
	return 0;
}
