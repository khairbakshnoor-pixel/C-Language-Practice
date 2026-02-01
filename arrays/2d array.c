#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	int arr[4][2]={
		{1,2},
		{4,5},{6,7},{9,5}
	};
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){

			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
