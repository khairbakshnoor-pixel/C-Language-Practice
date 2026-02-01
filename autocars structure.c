#include <stdio.h>
#include <string.h>

#define MAX_PARTS 100

struct part {
    char serial[4];    
    int year;
    char material[50];
    int quantity;
};

int main() {
    struct part parts[MAX_PARTS];
    int n, i;

    printf("Enter the number of parts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of part %d\n", i+1);

        printf("Serial number (3 chars, e.g., AA0): ");
        scanf(" %3s", parts[i].serial);

        printf("Year of manufacture: ");
        scanf("%d", &parts[i].year);

        printf("Material: ");
        scanf(" %[^\n]", parts[i].material);

        printf("Quantity manufactured: ");
        scanf("%d", &parts[i].quantity);
    }

    printf("\nParts with serial numbers between BB1 and CC6:\n");
    for(i = 0; i < n; i++) {
        if(strcmp(parts[i].serial, "BB1") >= 0 && strcmp(parts[i].serial, "CC6") <= 0) {
            printf("\nSerial: %s\n", parts[i].serial);
            printf("Year: %d\n", parts[i].year);
            printf("Material: %s\n", parts[i].material);
            printf("Quantity: %d\n", parts[i].quantity);
        }
    }

    return 0;
}

