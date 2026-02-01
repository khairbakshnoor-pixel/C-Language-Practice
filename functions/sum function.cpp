#include <stdio.h>
#include <stdlib.h>
void sum(int n){
	int s=0;
	int i;
	for(i=1;i<=n;i++){
		s= s+i;
}
		printf(" the sum of first %d numbers is = %d",i-1,s);

	return;

	
	
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int	n;
printf("enter a number");
scanf("%d",&n);
	sum(n);

	
	return 0;
}
