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
//
//Display a message indicating whether the strings are equal or not.
//
//Write a C program to count the number of characters in a string entered by the user without using any built in string length function.
//
//
//Write a C program to input a string and count the total number of vowels present in the string.
//Write a C program that takes a string as input and converts all lowercase letters into uppercase letters.
char ch[100];
printf("Enter a string ");
scanf("%[^\n]",ch);
int i=strlen(ch);
printf("THE Lenghth of the string is %d ",i);
char str2;
strcp(ch,str2);
prinf("After copying %s",str2);
	return 0;
}
