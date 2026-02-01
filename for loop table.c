#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n,sum=0,factorial=1;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		factorial=factorial*i;
		if (i%2==0){
		sum=sum+i;
		
		printf("%d\n",n*i);
	}
}
	printf("the sum is %d\n",sum);
	printf("the factorial is %d",factorial);
	
	return 0;
}
