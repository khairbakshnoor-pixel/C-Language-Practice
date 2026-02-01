#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	int arr[5][5]={
		{1,2,3,4,6},
		{4,5,6,7,10},{6,7,8,9,10},{9,5,6,7,10},{10,15,19,20,10}
	};
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
	
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
