#include <stdio.h>
#include <stdlib.h>
int power(int a,int b){
	if(b==0){
		return 1;
	}
	else {
		return a*power(a,b-1);
	
}
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int a;
printf("enter a base ");
scanf("%d",&a);
int b;
printf("enter a exponent ");
scanf("%d",&b);

printf("the base %d to raised to power %d is = %d",a,b,power(a,b));
	return 0;
}
