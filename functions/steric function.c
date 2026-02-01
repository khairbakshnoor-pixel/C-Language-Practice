#include <stdio.h>
#include <stdlib.h>
int steric(int a,int b){
	int i,j;
	for(i=0;i<=5;i++){
		for(j=0;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("%d",steric(a,b));
	return 0;
}
