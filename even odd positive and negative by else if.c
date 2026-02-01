#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Q2. Write a C program that takes an integer input from the user and use if else if else statements to determine whether the number is:
//Even & positive
//Even & negative
//Odd & positive
//Odd & negative 
//Or zero
int n;
printf("enter the number		:");
scanf("%d",&n);
if (n>0 && n%2==0){

printf("even and positive");
}
else if (n<0 && n%2==0){

printf("even and negative");
}
  else if (n>0 && n%2==1){

printf("odd and positive");
}
else if(n<0 && n%2==1){

printf("odd and negative");
}
 else if(n==0){
 
	printf("zero");
}

	return 0;
}
