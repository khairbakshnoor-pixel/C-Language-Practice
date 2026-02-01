#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int factorial (int n ){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
		return fact;
}

int main(int argc, char *argv[]) {
	int a;
	printf("enter a number");
	scanf("%d",&a);
	printf("the factorial of %d  is  == %d", a,factorial(a));
	
	return 0;
}
