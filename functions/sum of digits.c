#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n=n/10;
	}
	return sum;
}

int main(int argc, char *argv[]) {
	int n;
	printf("enter a number any digits");
	scanf("%d",&n);
	printf("the sum of the digits are %d",sum_of_digits(n));
	return 0;
}
