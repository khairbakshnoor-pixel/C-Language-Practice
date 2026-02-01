#include <stdio.h>
#include <stdlib.h>

#define SUBJECTS 100

struct Student {
    int roll;
    char name[50];
    float marks[SUBJECTS];
    float total;
    float percentage;
    char grade;
};


void loadFromFile() {
    FILE *fp = fopen("results.txt", "r");
    if(fp == NULL)
    printf("file can not be opened");
        return;

int count;
size_t n = fread(&count, sizeof(int), 1, fp); // read 1 integer
if (n != 1) {
    // failed to read
    printf("Cannot read count!\n");
    fclose(fp);
    return;
}
if (count > 100) {
    printf("Too many students!\n");
    fclose(fp);
    return;
}

size_t read_count = fread(students, sizeof(struct Student), count, fp);
if (read_count != count) {
    printf("Failed to read student data!\n");
    fclose(fp);
    return;
}



int main(int argc, char *argv[]) {
	
	
	
	return 0;
}
