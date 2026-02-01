#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	Check if Number 10 Exists in an Array
//Write a C program that:
//? Inputs 5 integers into an array.
//? Checks whether the number 10 is present in the array.

//? Prints "10 exists in the array" or "10 does not exist in the array" accordingly.
int arr[5]={1,2,3,4,1};
int i;
for(i=0;i<5;i++){
	if(arr[i]==10){
		printf("this number exist in the array");
	}
}
	return 0;
}
