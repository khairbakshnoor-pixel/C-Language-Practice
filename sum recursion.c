#include <stdio.h>
#include <stdlib.h>
void sum(int n,int s){
if(n==0) {


printf("%d",s);

return;
}
sum(n-1,s+n);

	
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int	n;
printf("enter a number");
scanf("%d",&n);
	sum(n,0);

	
	return 0;
}
