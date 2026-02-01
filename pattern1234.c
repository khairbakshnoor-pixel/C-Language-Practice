#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,k,n=9;
	for ( i=0;i<=n;i++){
		for(j=0;j<n-i;j++){
			for(k=0;k<=2*i-1;k++){
			
			printf("*");
		}
		}
		printf("\n");
	}
	return 0;
}
