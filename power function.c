#include <stdio.h>
#include <stdlib.h>
int power(int base, int expo) {
    int i,result = 1;
    for( i = 1; i <= expo; i++) {
        result = result * base;
    }
    return result;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int a,b;
printf("enter the number 		:");
scanf("%d",&a);
printf("enter a power 			: ");
scanf("%d",&b);
printf("the number is %d and  power is  %d and the answer is= %d",a,b,power(a,b));
	return 0;
}
