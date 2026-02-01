#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 450

struct Student {
    int roll_number;
    char name[100];
    char department[50];
    char course[50];
    int year_of_joining;
};

void printByYear(struct Student students[], int n, int year) {
    int found = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (students[i].year_of_joining == year) {
            printf("%s\n", students[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("No students joined in this year.\n");
    }
}

void printByRollNumber(struct Student students[], int n, int roll) {
    int i;
    for (i = 0; i < n; i++) {
        if (students[i].roll_number == roll) {
            printf("Roll Number: %d\n", students[i].roll_number);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].year_of_joining);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", roll);
}

int main() {
    struct Student students[MAX_STUDENTS];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);

        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);

        printf("Department: ");
        scanf(" %[^\n]s", students[i].department);

        printf("Course: ");
        scanf(" %[^\n]s", students[i].course);

        printf("Year of Joining: ");
        scanf("%d", &students[i].year_of_joining);
    }

    int year;
    printf("\nEnter year to search: ");
    scanf("%d", &year);
    printByYear(students, n, year);

    int roll;
    printf("\nEnter roll number to search: ");
    scanf("%d", &roll);
    printByRollNumber(students, n, roll);

    return 0;
}

