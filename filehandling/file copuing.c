#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE*f1;
	f1=fopen("marksheet.txt","r");
	if(f1==NULL){
		printf("file can not be opened");
			
		return 1;
	
	}
	FILE*f2;
	int ch;
	f2=fopen("filemake.txt","a");
	if(f2==NULL){
		printf("file cant be opened");
	}
	while((ch=fgetc(f1))!=EOF){
		fputc(ch,f2);
	
	}
	fclose(f1);
	fclose(f2);
	printf("file coped");
	return 0;
}
