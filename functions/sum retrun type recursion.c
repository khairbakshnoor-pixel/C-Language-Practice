#include <stdio.h>
#include <stdlib.h>
int sum(int n){
	int i;
	if(n<=1){
		return 1;
	}
	else {
		return n+sum(n-1);
	
}
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int n;
printf("enter a number ");
scanf("%d",&n);
printf("%d",sum(n));
	return 0;
}
