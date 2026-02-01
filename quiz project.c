/*********** Declaration*******
I hereby certify that no part of this assignment has been copied from
any other student’s work or from any other source. No part of the code
has been written/produced for me by another person or copied from any
other source.
I hold a copy of this assignment that I can produce if the original is
lost or damaged.
**************************/

#include <stdio.h>
#include <stdlib.h>

#define PASSER 1
#define EATER -1
#define EMPTY 0

void printBoard(int **board, int size) {
    printf("\n   ");
    int i,j;
    for( i = 0; i < size; i++)
        printf("%2d ", i+1);
    printf("\n");

    for(i = 0; i < size; i++) {
        printf("%2d ", i+1);
        for( j = 0; j < size; j++) {
            if(board[i][j] == PASSER)
                printf(" P ");
            else if(board[i][j] == EATER)
                printf(" E ");
            else
                printf(" . ");
        }
        printf("\n");
    }
}

int validMove(int **board, int size, int row, int col) {
    if(row < 0 || row >= size || col < 0 || col >= size) return 0;
    if(board[row][col] != EMPTY) return 0;
    return 1;
}

void getHumanMove(int **board, int size, int player, int *row, int *col) {
    while(1) {
        printf("Player %s, enter your move (row col): ", player==PASSER?"Passer":"Eater");
        scanf("%d %d", row, col);
        *row = *row - 1;
        *col = *col - 1;
        if(validMove(board, size, *row, *col))
            break;
        printf("Invalid move! Try again.\n");
    }
}

int main() {
    int size,i;
    printf("Enter board size (>=3 and <=15): ");
    scanf("%d", &size);
    if(size < 3) size = 3;
    if(size > 15) size = 15;

    int **board = (int **)malloc(size * sizeof(int *));
    for(i = 0; i < size; i++)
        board[i] = (int *)calloc(size, sizeof(int));

    int totalMoves = 0;
    int rowPass, colPass, rowEater, colEater;

    while(totalMoves < size*size) {
        printBoard(board, size);

        getHumanMove(board, size, PASSER, &rowPass, &colPass);
        getHumanMove(board, size, EATER, &rowEater, &colEater);

        if(rowPass == rowEater && colPass == colEater) {
            board[rowEater][colEater] = EATER;
            printf("Both chose same cell. Eater remains.\n");
        } else {
            board[rowPass][colPass] = PASSER;
            board[rowEater][colEater] = EATER;
        }

        totalMoves += 2;
        if(totalMoves > size*size) totalMoves = size*size; // prevent overflow
    }

    printf("\nFinal Board:\n");
    printBoard(board, size);
    printf("Board full! Game over.\n");

    for(i = 0; i < size; i++)
        free(board[i]);
    free(board);

    return 0;
}

