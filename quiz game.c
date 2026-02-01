#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 15

void print_board(int board[MAX_SIZE][MAX_SIZE], int size) {
    printf("\nCurrent Board:\n");
    int i,j;
    for ( i = 0; i < size; i++) {
        for ( j = 0; j < size; j++) {
            if (board[i][j] == 1) printf("P ");
            else if (board[i][j] == -1) printf("E ");
            else printf(". ");
        }
        printf("\n");
    }
}
void get_move(int *r, int *c, int board[MAX_SIZE][MAX_SIZE], int size, char player) {
    int valid = 0;
    while (!valid) {
        printf("Enter %c move (row col): ", player);
        scanf("%d %d", r, c);
        (*r)--; // convert to 0-based index
        (*c)--;
        if (*r < 0 || *r >= size || *c < 0 || *c >= size)
            printf("Invalid position! Out of range.\n");
        else if (board[*r][*c] != 0)
            printf("Cell already occupied! Try again.\n");
        else
            valid = 1;
    }
}
int visited[MAX_SIZE][MAX_SIZE];

int passer_wins(int board[MAX_SIZE][MAX_SIZE], int size, int r, int c){
    if(r<0 || r>=size || c<0 || c>=size) return 0;
    if(board[r][c]!=1 || visited[r][c]) return 0;

    visited[r][c]=1;
    if(r==size-1) return 1; // Reached bottom row -> Passer wins

    // Check allowed directions: down, left, right, down-left, down-right
    if(passer_wins(board,size,r+1,c)) return 1;
    if(passer_wins(board,size,r,c-1)) return 1;
    if(passer_wins(board,size,r,c+1)) return 1;
    if(passer_wins(board,size,r+1,c-1)) return 1;
    if(passer_wins(board,size,r+1,c+1)) return 1;

    return 0;
}
int board_full(int board[MAX_SIZE][MAX_SIZE], int size) {
	int i,j;
    for ( i = 0; i < size; i++)
        for ( j = 0; j < size; j++)
            if (board[i][j] == 0)
                return 0; // not full
    return 1; // full
}


int main(int argc, char *argv[]) {
	
	printf("-------welcome to the game------\n");
	printf("-------This is a  two players board game------\n");
	printf("\nplayer 1 is Passer who want to connect top to bottom\n");
	printf("player 2 is the Eater who tries to block passer(player 1)\n ");
	printf("\n		---game rules-----\n ");
	printf("---passer forms a valid pattern he will win--\n");
	printf("---board is full and passer not won -> Eater wins--\n");
int size;
	 do {
        printf("Enter board size between 3 and 15: ");
        scanf("%d", &size);
    } while (size < 3 || size > 15);

    // Create a fixed-size board
    int board[15][15] = {0}; // max board size is 15x15

    printf("Board of size %d x %d created successfully.\n", size, size);
    
    print_board(board,size);
    
    
    int pr, pc, er, ec;

// Get Passer move
get_move(&pr, &pc, board, size, 'P');
  
// Get Eater move
get_move(&er, &ec, board, size, 'E');

// Apply simultaneous rule
if (pr == er && pc == ec)
    board[er][ec] = -1;  // Eater wins the cell
else {
    board[pr][pc] = 1;    // Passer move
    board[er][ec] = -1;   // Eater move
}


// Print board after moves
while (!board_full(board, size)) {
    int pr, pc, er, ec;

    // Get Passer move
    get_move(&pr, &pc, board, size, 'P');

    // Get Eater move
    get_move(&er, &ec, board, size, 'E');

    // Apply simultaneous rule
    if (pr == er && pc == ec)
        board[er][ec] = -1;  // Eater wins the cell
    else {
        board[pr][pc] = 1;    // Passer move
        board[er][ec] = -1;   // Eater 
    }

    // Print board after each turn
    print_board(board, size);
}

printf("\nBoard is full! Game over.\n");


    
    
	return 0;
}
