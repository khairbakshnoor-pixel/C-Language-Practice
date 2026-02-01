#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	(i) Write a program to add two 6 x 6 matrices.
int a[10];
int b[10];
int i,j;
printf("enter the first matrix\n");
for(i=0;i<10;i++){

		scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
	
		printf("%d",a[i]);

}
printf("enter the second matrix\n");
for(i=0;i<10;i++){
]
		scanf("%d",&b[i]);

}
printf("the second matrix is ");
for(i=0;i<6;i++){
	
		printf("%d",b[i]);
	
}
	int c[6][6]={0};
printf(" the sum of both matrix is\n  ");
for(i=0;i<6;i++){
	for(j=0;j<6;j++){
	
	 c[i][j]=a[i][j]+b[i][j];
	printf("%d ",c[i][j]);
	}
	printf("\n");
}



	return 0;
}
