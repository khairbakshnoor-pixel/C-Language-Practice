#include <stdio.h>
#include <stdlib.h>
float avg(float a,float b,float c){
int	avg=(a+b+c)/3;
	return avg;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 
//. Write a program using function to find average of three numbers.
float a,b,c;
printf("enter the first   number");
scanf("%f",&a);
printf("enter the second number");
scanf("%f",&b);
printf("enter the third number");
scanf("%f",&c);
printf("the avg of these numbers is %.2f",avg(a,b,c));
	return 0;
}
