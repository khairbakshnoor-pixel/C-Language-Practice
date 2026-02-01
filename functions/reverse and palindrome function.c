#include <stdio.h>
#include <stdlib.h>


void palindrome(int n){
	int original=n;
		int revers=0;
while(n!=0){
	revers=revers*10+n%10;
	n=n/10;
}
printf("\nreverse is %d ",revers);
if( original==revers){
	printf("\nit is a palindrome");
}
else{
	printf("\nit is not a palindrome");
}
}

int main(int argc, char *argv[]) {
	int n;
	printf("enter a number");
	scanf("%d",&n);
	palindrome(n);
	return 0;
}
