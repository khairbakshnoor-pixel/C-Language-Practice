#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
//    int a[2][2];
//    a[0][0] = 10;
//    a[0][1] = 12;
//    a[1][0] = 13;
//    a[1][1] = 14;    
//    printf(" %d %d \n %d %d",a[0][0],a[0][1],a[1][0],a[1][1]);
//    return 0;
//}
  int a[2][2]={{1,8},{2,4}};
  int i,j;
  int sum=0;
  int max={0};
  int min={0};
  for(i=0;i<2;i++){
  	for(j=0;j<2;j++){
  	if(a[i][j]>max)
  	max=a[i][j];
  		printf("%d  ",a[i][j]);
	  }
	  printf("\n");
  }
    for(i=0;i<2;i++){
  	for(j=0;j<2;j++){
  	if(a[i][j]<min)
  	min=a[i][j];
	  }
	  printf("\n");
  }
  
  printf("%d\n",max);
  printf("%d",min);
    return 0;
}
