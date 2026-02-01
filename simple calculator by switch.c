#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Q1. Write a C program to declare two integer variables,take their values as input from the user, and display thier sum, difference, and produc

int main(int argc, char *argv[]) {
	int a,b,sum,sub,mul,div;
	char op;
	printf("enter the 1st integer		:");
	scanf("%d",&a);
		printf("enter the 2nd integer		:");
	scanf("%d",&b);
		printf("enter the operator(+,-,*,%)		:");
	scanf(" %c",&op);
	switch(op){
		case '+':
			sum=a+b;
			printf("the sum is %d\n ",sum);
			 break;
			case '-':
			sub=a-b;
			printf("the sum is %d\n ",sub);
			break;
			case '*':
			mul=a*b;
			printf("the sum is %d\n ",mul);
			break;
			case '/':
			div=a/b;
			printf("the sum is %d\n ",div);
			break;
			default:
				printf("invalid operator");
	}
	return 0;
}
