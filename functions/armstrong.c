#include <stdio.h>
#include <stdlib.h>

int sum_ofN(int n){
	if(n<=1){
return 1;
}


	return  n+sum_ofN(n-1);
}
int main(int argc, char *argv[]) {
	int n;
printf("Enter a number 	:");
scanf("%d",&n);
printf(" the sum of  first %d natural  numbers is %d",n,sum_ofN(n));
	return 0;
}
