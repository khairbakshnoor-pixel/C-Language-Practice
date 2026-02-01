#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE*ptr;
	char ch[100]="programing is a head ache in c";
	ptr=fopen("file.txt","w");
	if(ptr==NULL){
		printf("there is a issue while opening file");
	}
	else{
		printf("file opened");
	}
	// for file writing
	fputc('a',ptr);
	fputc('b',ptr);
	fputc('c',ptr);
	int i;
	while(ch[i]!='\0'){
		fputc(ch[i],ptr);
		i++;
		
	}
	fclose(ptr);
	return 0;
}
