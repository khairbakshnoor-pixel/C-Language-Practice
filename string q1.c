#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void upper(char ch[100]){
	int i;
	for(i=0;ch[i]!='\0';i++){
		ch[i]=ch[i]-32;
	}
	printf("\nUPPER CASE  = %s ",ch);
	
}
void lower(char ch[100]){
	int i;
	for(i=0;ch[i]!='\0';i++){
		ch[i]=ch[i]+32;
	}
	printf("\nlower case is  = %s ",ch);
}
void count(char ch[100]){
	int i;
	int count=0;
	for(i=0;ch[i]!='\0';i++){
		count++;
	}
	printf("\n count is  is  = %d ",count);
	
}
void vowel(char ch[100]){
	int i;
	int count=0;
	for(i=0;ch[i]!='\0';i++){
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
			count++;
			printf("\n %c ",ch[i]);
		}
	}
	printf("\n count of vowel   is  = %d ",count);
	
}


int main(int argc, char *argv[]) {
//	Write a program that uses multiple user-defined functions to perform different operations on a string.
//
//The program should:
//
//Take a string input from the user in the main() function.
//
//Create separate functions for the following tasks:
//
//A function to convert the string to UPPERCASE
//
//A function to convert the string to lowercase
//
//A function to count total characters in the string
//
//A function to count vowels in the string
//
//Call all functions from main() and display their results
char ch[100];
printf("Enter a string");
scanf("%[^\n]",ch);
printf("STRING IS %s",ch);

upper(ch);
lower(ch);
count(ch);
vowel(ch);
	return 0;
}
