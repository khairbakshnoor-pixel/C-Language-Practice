#include <stdio.h>
#include <stdlib.h>

///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int main(int argc, char *argv[]) {
////	FILE *ptr;
////	char ch[100];
////	ptr=fopen("filemake.txt","r");
////	if(ptr==NULL){
////		printf("file cant be open");
////	
////	}
////	printf("file is opened\n");
////	while(fgets(ch,sizeof(ch),ptr)!=NULL){
////		printf("%s",ch);
////	
////	}fclose(ptr);
////	return 0;
////}
int main(){
//	char c;
//	FILE*r;
//	r=fopen("filemake.txt","r");
//	if(r==NULL){
//		printf("file can be opened");
//	}
//	printf("file  is opened ");
//	while((c=fgetc(r))!=EOF){
//		printf("%c",c);
//	}
//	fclose(r);
//}
char text[100];
FILE*r;
r=fopen("filemake.txt","r");
if(r==NULL){
	printf("file can not be opened");
}
while(fgets(text,sizeof(text),r)){

	printf("\n%s",text);
	
	}
fclose(r);

while()
return 0;
}


