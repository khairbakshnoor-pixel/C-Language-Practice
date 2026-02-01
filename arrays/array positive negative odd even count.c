#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[25],i,count=0,positive=0,negative=0,odd=0,even=0;
	for(i=0;i<25;i++){
		printf("enter the array at %d index		:	",i);
		scanf("%d",&arr[i]);
	
		if(arr[i]>0)
		
			positive++;
			   if(arr[i]<0)
			negative++;
			
			 if(arr[i]%2==0)
			
				even++;
			
			else 
		
			
				odd++;		
	
}
	printf("\nthe total positive arrays are 		: %d\n",positive);
	printf(" the total negative arrays are 		:%d\n",negative);
	printf(" the total even arrays are 		:%d\n",even);
	printf(" the total odd arrays are 		:%d\n",odd);


	return 0;
}
