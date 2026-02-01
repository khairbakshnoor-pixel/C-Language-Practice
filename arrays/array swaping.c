#include <stdio.h>

int main() {
    int arr[5], i, swap;

  
    for(i = 0; i < 5; i++) {
        printf("Enter value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

   
    for(i = 0; i < 5 - 1; i += 2) {
        swap = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = swap;
    }

   
    printf("\nArray after interchanging odd and even positions:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
