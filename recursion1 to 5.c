#include <stdio.h>
#include <stdlib.h>
void number(int n){
	if(n==10) return;
		printf("%d\n",n);
		number(n+1);
	return;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=1;
	number(n);
	return 0;
}
