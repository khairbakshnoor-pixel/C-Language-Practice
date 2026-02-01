#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE*ptr;
	ptr=fopen("file.txt","r");
	if(ptr==NULL){
		prinf("there is a issue while opening file");
	}
	else{
		printf("file opened");
	}
	return 0;
}
