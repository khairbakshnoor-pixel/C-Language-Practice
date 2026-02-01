#include <stdio.h>
//#include <stdlib.h>
//int swap(int* a,int* b){
//	int temp;
//	temp=*a;
//	*a=*b;
//	*b=temp;
//	return;
//}
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int main(int argc, char *argv[]) {
//	int a,b;
//	a=5;
//	b=7;
//	swap(&a,&b);
//	printf("value of a %d and b  %d is ",a,b);
//	
//Structure + Function
//
//Define a Student structure with name, roll, and marks.
//
//Write a function that takes a pointer to a student and prints its details.
//
//Create 3 students in main() and use the function to print all details
//struct Student{
//	char name[23];
//	int roll;
//	int marks;
//	
//};
//void student_fun(struct  Student s1,struct Student s2,struct Student s3){
//	printf("%s",s1.name);
//	printf("%d",s1.marks);
//	printf("%d",s1.roll);
//printf("%s",s2.name);
//	printf("%d",s2.marks);
//	printf("%d",s2.roll);
//printf("%s",s3.name);
//	printf("%d",s3.marks);
//	printf("%d",s3.roll);
//
//}
//
//int main(){
//	struct Student s1={"john",2113,90
//	};
//	struct Student s2={"don",2323,87
//	};
//		struct Student s3={"hon",23,77
//	};
//	student_fun(s1,s2,s3);
//
//	return 0;
//}

int main(){
	char ch[100];
	FILE*ptr;
	ptr=fopen("file.txt","r");
	if(ptr==NULL){
		printf("file can not be opened");
		return 1;
	}
	fprintf(ptr,"writing a string to a file");
	while(fgets(ch,sizeof(ch),ptr)!=NULL){
		
		printf("%s",ch);
	}
return 0;
	
}

//7. File Handling + String + Function
//
//Write a function to write a string to a file.
//
//Take input from the user, write it, then read the file and print all contents.
