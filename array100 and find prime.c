#include <stdio.h>

int main() {
    int num[100];
int i,j;
    // Step 1: Fill array with numbers 1 to 100
    for ( i = 0; i < 100; i++) {
        num[i] = i + 1;
    }

 
    for (i = 1; i < 100; i++) {   
        if (num[i] != 0) {           
            for ( j = i + num[i]; j < 100; j += num[i]) {
                num[j] = 0;         
            }
        }
    }

    
    printf("Prime numbers from 1 to 100:\n");
    for ( i = 1; i < 100; i++) {
        if (num[i] != 0) {
            printf("%d ", num[i]);
        }
    }

    return 0;
}

