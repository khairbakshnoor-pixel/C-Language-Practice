#include <stdio.h>
int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("file.txt", "r");
    dest = fopen("dest.txt", "a");

    if(src == NULL || dest == NULL) {
        printf("File nahi khul saki\n");
        return 1;
    }

    while((ch = fgetc(src)) != EOF) {
    
        fputc(ch, dest);
        	
    }
    printf("files work are coppied succesfuly");

    fclose(src);
    fclose(dest);
    
    
    return 0;
}

