#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];
    fp = fopen("file.txt", "w");
    if (fp == NULL) return 1;
    printf("Enter text: ");
    fgets(str, sizeof(str), stdin);
    fputs(str, fp);
    fclose(fp);
    printf("Text saved to file.\n");
    return 0;
}

