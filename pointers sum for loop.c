#include <stdio.h>
#include <stdlib.h>
#define N 5
int a;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[N]={50,85,96,85,63},*p,sum=0,max=a[0],min=a[0],avg;
	for(p=&a[0];p<&a[N];p++){
		sum+=*p;
	}
	printf(" \nthe sum %d",sum);
	for(p=&a[0];p<&a[N];p++){
	if(max<*p){
		max=*p;
	}
	}
	printf("\n the max %d",max);
	for(p=&a[0];p<&a[N];p++){
	if(min>*p){
		min=*p;
	}
	}
	printf(" \nthe min %d",min);
	avg=sum/N;
	printf(" \nthe avg is %d",avg);
	
	return 0;
}
