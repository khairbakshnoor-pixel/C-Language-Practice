#include <stdio.h>
#include <stdlib.h>

int power(int a ,int b){
	if(b==0){
		return 1;
	}
	
	return a*power(a,b-1);
}

int main(int argc, char *argv[]) {
	int base ,pow;
	printf("Enter a number");
	scanf("%d",&base);
	printf("Enter the second number");
	scanf("%d",&pow);
	printf("%d to the raise power %d is == %d",base,pow,power(base,pow));
	return 0;
}
