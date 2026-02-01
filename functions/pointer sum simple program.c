#include <stdio.h>
#include <stdlib.h>
int sum(int *a ,int *b){
	return *a+*b;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1;
	printf("enter num1		:");
	scanf("%d",&num1);
	int num2;
	printf("enter num2		:");
	scanf("%d",&num2);
	printf(" sum is %d",sum(&num1,&num2));
	
	return 0;
}
