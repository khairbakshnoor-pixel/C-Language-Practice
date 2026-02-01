#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	int a[2][2]={
		{1,2},
		{4,5}
	};
		int b[2][2]={
		{7,9},
		{5,1}
	};
	int result[2][2];

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			result[i][j]=a[i][j]+b[i][j];
		}
	}
	    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d   ", result[i][j]);
        }
        printf("\n");
    }
	return 0;
}
