#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r,c,i,j;
	i=0;
	j=0;
	printf("enter the number of rows	:	");
	scanf("%d",&r);
		printf("enter the number of coloumns	:	");
	scanf("%d",&c);
	int arr[r][c];
	for (i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter the array at %d %d index",i,j);
			scanf(" %d",&arr[i][j]);
		}
		printf("\n");
	}
	//  1  2
	//  3  4
		printf("the matrix is \n");
			for (i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("the matrix after transpose is \n");
	//   1   3
	///  2   4
	
	
	
		for (i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
	
	
	return 0;
}
