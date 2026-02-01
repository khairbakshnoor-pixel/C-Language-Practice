 #include <stdio.h>

int main( )
{
int arr[25];
int i,j,num,count=0 ;
printf("user enter 25 arrays");
for (i=0;i<25;i++){
	scanf("%d",&arr[i]);
}
printf("enter the number to search");
scanf("%d",&num);
for(i=0;i<25;i++){
	if (arr[i]==num){
	count++;
	}
}
if(count>0){

	printf("the number which is present in the array is  %d and it is %d times",num,count);
}
else{
	printf("the number is not present in the array");
}
return 0 ;
}
