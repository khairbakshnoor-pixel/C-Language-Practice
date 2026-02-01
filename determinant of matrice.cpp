#include <stdio.h>
#include <stdlib.h>

int main() {
//	(i) Write a program to add two 6 x 6 matrices.
    int a[6][6];
    int b[6][6];
    int i, j;

    printf("Enter the first matrix:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The first matrix is:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

  

    // ------------------------------
    // DETERMINANT OF MATRIX a (6x6)
    // ------------------------------

    double det = 1.0;
    int n = 6;

    // Convert matrix a into upper triangular form
    for (i = 0; i < n; i++) {

        // If pivot is zero ? swap with a row below
        if (a[i][i] == 0) {
            int swap_row = -1;

            for (int k = i + 1; k < n; k++) {
                if (a[k][i] != 0) {
                    swap_row = k;
                    break;
                }
            }

            if (swap_row == -1) {  // no pivot available
                det = 0;
                break;
            }

            // swap rows in matrix a
            for (int c = 0; c < n; c++) {
                double t = a[i][c];
                a[i][c] = a[swap_row][c];
                a[swap_row][c] = t;
            }

            det = -det;  // row swap flips sign
        }

        // Eliminate rows below i
        for (int r = i + 1; r < n; r++) {
            double factor = (double)a[r][i] / a[i][i];
            for (int c = i; c < n; c++) {
                a[r][c] -= factor * a[i][c];
            }
        }
    }

    // determinant = product of diagonal
    for (i = 0; i < n; i++) {
        det *= a[i][i];
    }

    printf("Determinant of the first matrix = %lf\n", det);

    return 0;
}

