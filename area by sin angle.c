#include <stdio.h>
#include <stdlib.h>
#include<math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	(n) The area of a triangle can be computed by the sine law when 2
//sides of the triangle and the angle between them are known.
//Area = (1 / 2 ) ab sin ( angle )

double a[6]={137.4,155.2,149.3,160.0,155.6,149.7};
double b[6]={80.9,92.62,97.93,100.25,68.95,120.0};
double angle[6]={0.78,0.89,1.35,9.00,1.25,1.75};
double area[6];
int  i;
for(i=0;i<6;i++){
double rad = angle[i] * M_PI / 180.0;
	
area[i]=0.5 * a[i] * b[i] * sin(rad);
printf("\nthe area of the triangle %d  is = %.2lf\n",i,area[i]);
}


	return 0;
}
