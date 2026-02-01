#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=2;

	while(n<=35){
		if(n%2==0)
		printf("%d\n",n);
		n++;
	}
	return 0;
}
