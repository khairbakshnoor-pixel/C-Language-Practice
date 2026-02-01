#include <stdio.h>

int algebraQuiz() {
    int answer;
    printf("\nAlgebra Quiz:\n");
    printf("Question: Solve for x, if 2x + 3 = 11, what is x? ");
    scanf("%d", &answer);
    if(answer == 4) {
        printf("Correct answer!\n");
        return 1;  // 1 mark
    } else {
        printf("Wrong answer.\n");
        return 0;
    }
}

int arithmeticQuiz() {
    int answer;
    printf("\nArithmetic Quiz:\n");
    printf("Question: What is 5 * 6 - 4? ");
    scanf("%d", &answer);
    if(answer == 26) {
        printf("Correct answer!\n");
        return 1;
    } else {
        printf("Wrong answer.\n");
        return 0;
    }
}

int geometryQuiz() {
    int answer;
    printf("\nGeometry Quiz:\n");
    printf("Question: Area of a rectangle with length 5 and width 3? ");
    scanf("%d", &answer);
    if(answer == 15) {
        printf("Correct answer!\n");
        return 1;
    } else {
        printf("Wrong answer.\n");
        return 0;
    }
}

int main() {
    int totalMarks = 0;

    while(1) {
        int choice;
        printf("\nWelcome to the Math Quiz\n");
        printf("1. Algebra Quiz\n");
        printf("2. Arithmetic Quiz\n");
        printf("3. Geometry Quiz\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                totalMarks += algebraQuiz();
                break;
            case 2:
                totalMarks += arithmeticQuiz();
                break;
            case 3:
                totalMarks += geometryQuiz();
                break;
            case 4:
                printf("\nExiting the quiz.\n");
                printf("Your total score is: %d\n", totalMarks);
                return 0;
            default:
                printf("Invalid choice. Please select 1, 2, 3, or 4.\n");
        }
    }

    return 0;
}

