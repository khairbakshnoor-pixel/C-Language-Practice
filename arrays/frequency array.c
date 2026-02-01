#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*	int arr[5]={1,2,3,4,5};
	int i,count=1;
	for(i=1;i<6;i++){
		
		
		count++;
		
		printf("%d occur %d times\n",i,count);
		
	}
	printf("%d",count);
	*/
//	Copy Elements into Another Array
//Write a C program that:
//? Inputs 5 integers into an array.
//? Copies all elements into a new array.
//? Prints both arrays to verify that the copy was successful.
int a[5]={1,2,3,4,5};
int b[5]={6,7,8,9,10};
int c[10]={0};
int i;
for (i=0;i<5;i++){
	c[i]=a[i];
	
}
for (i=0;i<5;i++){
	c[i+5]=b[i];
	
}
for(i=0;i<10;i++){
	printf("%d",c[i]);
}

	return 0;
}
