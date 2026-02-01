#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("%d",j);
		}
		
		
		printf("\n");
	}
	return 0;
}
