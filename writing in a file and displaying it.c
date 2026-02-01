#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	FILE *ptr;
	char ch[99];
	ptr=fopen("hello.txt","r");
	if(ptr==NULL){
		printf("file cant be opened");
	}
while(fgets(ch,sizeof(ch),ptr)!=NULL){
		printf("%s",ch);
	}
		
	
	return 0;
}
