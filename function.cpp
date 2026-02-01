#include <stdio.h>
#include <stdlib.h>
int add(int a, int b){
	return a+b;
}
int main(){
	int sum=add(5,10);
	printf("%d\n",sum);
	sum=add(10,20);
	printf("%d\n",sum);
	return 0;
}
