#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *ptr;
	char ch;
	int line=0;
	int count=0;
	char hc[100];
	ptr=fopen("hello.txt","r");
	if(ptr==NULL){
		printf("file can not be opened ");
		return 1;
	}
	while((ch=fgetc(ptr))!=EOF){
		count++;
		printf("%c",ch);
	}
	printf("%d",count);
	while((fgets(hc,sizeof(hc),ptr))!=NULL){
		printf("%s",hc);
		line++;
	}
	printf("%d",line);
	fclose(ptr);
	return 0;
}
