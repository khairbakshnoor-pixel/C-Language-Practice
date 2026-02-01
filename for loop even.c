#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n,sum=0,fac=1;
	printf("enter a number");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		fac=fac*i;
	
	}
		printf("%d",fac);
	return 0;
}
