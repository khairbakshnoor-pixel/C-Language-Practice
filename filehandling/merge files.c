#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3;
    char line1[200], line2[200];

    
    f1 = fopen("file.txt", "r");
    f2 = fopen("dest.txt", "r");

    f3 = fopen("merged.txt", "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("File open nahi ho saki\n");
        return 1;
    }

    while (fgets(line1, sizeof(line1), f1) != NULL &&
           fgets(line2, sizeof(line2), f2) != NULL) {

        fputs(line1, f3); 
        fputs(line2, f3);   
    }

  
    while (fgets(line1, sizeof(line1), f1) != NULL) {
        fputs(line1, f3);
    }
    while (fgets(line2, sizeof(line2), f2) != NULL) {
        fputs(line2, f3);
    }

    printf("Files successfully merged alternately.\n");

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}

