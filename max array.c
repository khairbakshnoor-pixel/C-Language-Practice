#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int	arr[6]={1,5,3,4,18,10};
int	max=arr[0],i;
	for(i=0;i<6;i++){
	if(max<arr[i]){
		max=arr[i];
	}
	}
	printf("  the max is %d",max);
	return 0;
}
