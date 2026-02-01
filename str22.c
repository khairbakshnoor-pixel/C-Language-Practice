#include<stdio.h>
#include<string.h>
int main(){
	
//Write a C program to input a string from the user and find the length of the string using a built in string function.
//
//Write a C program that inputs a string from the user and copies it into another string variable. Display the copied string.
//
//Write a C program that takes two strings as input from the user and concatenates the second string to the first string.
//
//Display the resulting string.
//Write a C program that inputs two strings from the user and compares them.
//char ch[100];
//printf("Enter a string ");
//gets(ch);
//char str2[100];
//printf("Enter a string ");
//gets(str2);
//if(strcmp(ch,str2)==0){
//	printf("EQUAL");
//}
//else{
//	printf("UNEQUAL");
//}
//
//Display a message indicating whether the strings are equal or not.
//
//Write a C program to count the number of characters in a string entered by the user without using any built in string length function.
//
//
//Write a C program to input a string and count the total number of vowels present in the string.
//Write a C program that takes a string as input and converts all lowercase letters into uppercase letters.
//char ch[100];
//printf("Enter a string ");
//gets(ch);
//char str2[100];
//printf("Enter a string ");
//gets(str2);
//int  con=strcat(ch,str2);
//printf("after concatenation %s",con);

//int i=strlen(ch);
//printf("THE Lenghth of the string is %d ",i);
//char str2[100];
//strcpy(str2,ch);
//printf("\nAfter copying %s",str2);
//for(i=0;i<2;i++){
//	for(j=0;j<2;j++){
//		printf("%d ",a[i][j]);
//	}
//	printf("\n");
//}
//for(i=0;i<2;i++){
//	for(j=0;j<2;j++){
//		printf("%d ",b[i][j]);
//	}
//	printf("\n");
//}
int a[2][2]={
{2,3},
{3,4}
};
int b[2][2]={
{3,4},
{2,1}
};
int c[2][2]={0},k;
int i,j;

for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		a[i][j]=a[j][i];

		printf("%d ",a[i][j]);
	}
	printf("\n");
}
//printf("\n");
//for(i=0;i<2;i++){
//	for(j=0;j<2;j++){
//		printf("%d ",b[i][j]);
//	}
//	printf("\n");
//}
//for(i=0;i<2;i++){
//	for(j=0;j<2;j++){
//		for(k=0;k<2;k++){
//			c[i][j]+=a[i][k]*b[k][j];
//		}
//		printf("\n");
//	
//}
//}
//for(i=0;i<2;i++){
//	for(j=0;j<2;j++){
//		printf("%d ",c[i][j]);
//	}
//	printf("\n");
//}
//char str1[100];
//printf("Enter a string");
//gets(str1);
//int n=strlen(str1);
//printf("THE LENGHT OF THE STRING IS %d\n",n);
//int i;
//for(i=n-1;i>=0;i--){
//	printf("%c",str1[i]);
//}


	return 0;
}
