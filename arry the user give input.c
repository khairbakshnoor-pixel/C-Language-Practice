#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//(d) Twenty-five numbers are entered from the keyboard into an array.
//Write a program to find out how many of them are positive, how
//many are negative, how many are even and how many odd.
int main(int argc, char *argv[]) {
	int i,count=0,j;
	int arr[2];
	for(i=0;i<2;i++){
		printf("enter the %d th  ",i);
		scanf("%d",&arr[i]);
		count++;
		if (arr[i]%2==0){
			printf("even%d",arr[i]);
		}
		else if (arr[i]%2==1){
		
				printf(" odd %d",arr[i]);
			
			
		}
	}
		



	
	return 0;
}
