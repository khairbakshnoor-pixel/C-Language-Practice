#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,n,k;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		for(j=1;j<n-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf(" @");
		}
		
		
		printf("\n");
	}
		for(i=n-1;i>=1;i--){
		for(j=1;j<n-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf(" @");
		}
		
		
		printf("\n");
	}
	return 0;
}
