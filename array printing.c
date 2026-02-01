#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Find Maximum and Minimum in an Array
//Write a C program that:
////? Inputs 5 numbers from the user into an array.
//? Finds and prints the maximum and minimum values from the array.
//Hint: Use a loop to traverse the array and compare each element.
int main(int argc, char *argv[]) {
	int arr[5]={1,2,3,4,5};
	int i ,max=INT_MIN,secmax=INT_MIN,min=INT_MAX,secmin=INT_MAX;
	for(i=0;i<5;i++){
	if(arr[i]>max){
	secmax=max;	
		max=arr[i];
		 
	}
	
	else if(arr[i]>secmax && arr[i]!=max){
	
	secmax=arr[i];
}
		printf(" %d",arr[i]);
	}
	printf("\nthe max is %d\n",max);
	printf("the second max is %d",secmax);
	for(i=0;i<5;i++){
	if(arr[i]<min){
	secmin=min;	
		min=arr[i];
		 
	}
	
	else if(arr[i]<secmin && arr[i]!=min){
	
	secmin=arr[i];
}
		
	}
	printf("\nthe min is %d\n",min);
	printf("the second min is %d",secmin);
	return 0;
}
