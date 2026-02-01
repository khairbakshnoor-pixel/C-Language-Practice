#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Q4. Write a C program using a for loop to calculate and print the factorial of a number  entered by the user.
//Example: Input = 5 ->Output = 120
int i,n,fact;
printf("enter the number		:");
scanf("%d",&n);

for (i=1;i<=n;i++){
	fact=fact*i;

}
printf("%d",fact);

	return 0;
}
