#include <stdio.h>
#include <stdlib.h>

//int sum_ofN(int n){
//	if(n<=1){
//return 1;
//}
//	return  n+sum_ofN(n-1);
//}
int print(int n){
	if(n>=1){
		return 1;
	}
	while(n!=0){
	
	return print(n-1);
}
}
int main(int argc, char *argv[]) {
	int n;
printf("Enter a number 	:");
scanf("%d",&n);
printf(" %d\n",print(n));
	return 0;
}
