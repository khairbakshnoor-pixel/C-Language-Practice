#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int a[10];
int b[10];
int i,j;
int distance=0;

printf("enter the x cordinate \n");
for(i=0;i<10;i++){

		scanf("%d",&a[i]);
}
printf("\nthe x coordinates are\n  ");
for(i=0;i<10;i++){
	
		printf("%d",a[i]);

}
printf("\nenter the y corrdinate\n");
for(i=0;i<10;i++){

		scanf("%d",&b[i]);

}
printf("\nthe y coordiantes are\n ");
for(i=0;i<10;i++){
	
		printf("%d",b[i]);
	
}
for(i = 0; i < 9; i++) {
        int dx = a[i+1] - a[i];
        int dy = b[i+1] - b[i];
        distance += sqrt(dx*dx + dy*dy);
    }

    printf("\nTotal distance from first to last point (via all points): %d\n", distance);
return 0;
}
