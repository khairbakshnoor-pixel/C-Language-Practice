#include <stdio.h>
#include <stdlib.h>
void increasing(int n){
	if(n==0) return;
		printf("%d\n",n);
	increasing(n-1);
	printf("%d\n",n);

	return;
	
	
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int	n=4;
	increasing(n);

	
	return 0;
}
