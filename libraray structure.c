#include <stdio.h>
#include <string.h>

struct library {
    int accession_number;
    char book_title[60];
    char book_author[89];
    float price;
    int issued; 
};

int main() {
    struct library input[5];
    int count = 0;
    int i,j,choice;

    while(1) {
        printf("\n!-----Welcome to Library----!\n");
        printf("------MENU----------\n");
        printf("1. Add book information\n");
        printf("2. Display all book information\n");
        printf("3. List all books by given author\n");
        printf("4. Display details of specified book\n");
        printf("5. Count of all books in library\n");
        printf("6. List books in order of accession number\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        int i;

        switch(choice) {
            case 1:
                if(count < 5) {
                    printf("Enter accession number: ");
                    scanf("%d", &input[count].accession_number);
                    printf("Enter book title: ");
                    scanf(" %[^\n]s", input[count].book_title);
                    printf("Enter author: ");
                    scanf(" %[^\n]s", input[count].book_author);
                    printf("Enter price: ");
                    scanf("%f", &input[count].price);
                    printf("Is the book issued? (1 = yes, 0 = no): ");
                    scanf("%d", &input[count].issued);
                    count++;
                } else {
                    printf("Library is full!\n");
                }
                break;

            case 2:
                for(i = 0; i < count; i++) {
                    printf("\nAccession Number: %d\n", input[i].accession_number);
                    printf("Title: %s\n", input[i].book_title);
                    printf("Author: %s\n", input[i].book_author);
                    printf("Price: %.2f\n", input[i].price);
                    printf("Issued: %s\n", input[i].issued ? "Yes" : "No");
                }
                break;

            case 3: {
                char author[89];
                printf("Enter author name: ");
                scanf(" %[^\n]s", author);
                for(i = 0; i < count; i++) {
                    if(strcmp(input[i].book_author, author) == 0) {
                        printf("Book: %s\n", input[i].book_title);
                    }
                }
                break;
            }

            case 4: {
                char title[60];
                printf("Enter book title: ");
                scanf(" %[^\n]s", title);
                for(i = 0; i < count; i++) {
                    if(strcmp(input[i].book_title, title) == 0) {
                        printf("Accession Number: %d\n", input[i].accession_number);
                        printf("Author: %s\n", input[i].book_author);
                        printf("Price: %.2f\n", input[i].price);
                        printf("Issued: %s\n", input[i].issued ? "Yes" : "No");
                    }
                }
                break;
            }

            case 5:
                printf("Total books in library: %d\n", count);
                break;

            case 6:
                
                for(i = 0; i < count - 1; i++) {
                    for( j = i + 1; j < count; j++) {
                        if(input[i].accession_number > input[j].accession_number) {
                            struct library temp = input[i];
                            input[i] = input[j];
                            input[j] = temp;
                        }
                    }
                }
                printf("Books sorted by accession number:\n");
                for(i = 0; i < count; i++) {
                    printf("%d - %s\n", input[i].accession_number, input[i].book_title);
                }
                break;

            case 7:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

