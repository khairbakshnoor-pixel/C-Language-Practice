#include <stdio.h>

// Function to print prime factors of n
void primeFactors(int n) {
    int i;

    printf("Prime factors: ");

    // Print all the 2s that divide n
    while (n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }

    // n must be odd now, so check odd factors from 3 onwards
    for (i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        printf("%d", n);
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        primeFactors(num);
    }

    return 0;
}

