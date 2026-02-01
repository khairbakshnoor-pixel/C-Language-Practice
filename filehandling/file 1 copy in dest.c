#include <stdio.h>
#include<ctype.h>
int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("file.txt", "r");
    dest = fopen("dest.txt", "a");

    if(src == NULL || dest == NULL) {
        printf("File can be opend\n");
        return 1;
    }

    while((ch = fgetc(src)) != EOF) {
    	if(islower(ch)){
    		ch=toupper(ch);
		}
    
        fputc(ch, dest);
        	
    }
    printf("files work are changed uppercase succesfully succesfuly");

    fclose(src);
    fclose(dest);
    
    
    return 0;
}

