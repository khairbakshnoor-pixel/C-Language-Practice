#include <stdio.h>
#include <stdlib.h>
#include<limits.h>


// array printing and sum and count
int main(int argc, char *argv[]) {
////	int arr[10]={1,2,3,4,5,6,7,8,9,10};
////	int i,sum=0;
////	int count=0;
////	for(i=0;i<10;i++){
////		sum+=arr[i];
////		count++;
////		
////	}
////	printf(" the sum of the array is %d\n",sum);
////	printf("the count of the array is %d",count);
	
	
	//arrayfrom user and min and max
//	int arr[5];
//	int i,max=INT_MIN,min=INT_MAX;
//	for(i=0;i<5;i++){
//		printf("Enter array at %d index ",i);
//		scanf("%d",&arr[i]);
//		if(arr[i]>max){
//			max=arr[i];
//		
//		
//	}    
//		
//	}
//	for(i=0;i<5;i++){
//	if(arr[i]<min)min=arr[i];
//}
//	
//	printf("the max is %d\n",max);
//	printf("the min is %d",min);
//	
	//sum of 2 arrays
//	int a[6]={1,2,3,4,5,4};
//	int b[6]={2,4,6,8,1,4};
//	int c[6]={0};
//	int i;
//	for(i=0;i<6;i++){
//		c[i]=a[i]+b[i];
//	
//	printf("%d",c[i]);
//}

// reverse an array
//
//    int a[6] = {1, 2, 3, 1, 5, 4};
//    int c[6] = {0};
//    int i;
//
//    for(i = 0; i < 6; i++) {
//        c[i] = a[5 - i]; 
//		printf("%d ", c[i]);
// // reverse index calculation
//    }
    //copying one array to another
    
//         int b[6] = {1, 2, 3, 1, 5, 4};
//         int copy[6]={0};
//         int i;
//         for(i=0;i<6;i++){
//         	copy[i]=b[i];
//         	printf("%d",copy[i]);
//		 }
// 2 d arrays
int n[4];
int i,j;
for(i=0;i<n;i++){
	for(j=0;j<=i;j++){
		printf("* ");
	}
	printf("\n");
}



    return 0;
}

