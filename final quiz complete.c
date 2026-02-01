#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 15

void print_board(int board[MAX_SIZE][MAX_SIZE], int size) {
    printf("\nCurrent Board:\n");
    int i,j;
    for ( i = 0; i < size; i++) {
        for ( j = 0; j < size; j++) {
            if (board[i][j] == 1){
			
			 printf("P ");
		}
            else if (board[i][j] == -1) {
			
			printf("E ");
		}
            else{
			
			 printf("* ");
		}
        }
        printf("\n");
    }
}

void get_move(int *r, int *c, int board[MAX_SIZE][MAX_SIZE], int size, char player) {
    
    while (1) {
        printf("Enter %c move (row col): ", player);
        scanf("%d %d", r, c);
		      (*r)--; 
	(*c)--; 
        if (*r < 0 || *r >= size || *c < 0 || *c >= size){
		
            printf("Invalid position Out of range.\n");
        }
        else if (board[*r][*c] != 0){
		
            printf("Cell already occupied Try again.\n");
        }
        else{
		
            break;
        }
    }
}

int visited[MAX_SIZE][MAX_SIZE];

int passer_wins(int board[MAX_SIZE][MAX_SIZE], int size, int r, int c){
    if(r<0 || r>=size || c<0 || c>=size){
	
	 return 0;
}
    if(board[r][c]!=1 || visited[r][c]){
    	
	return 0;
}

    visited[r][c]=1;
    if(r==size-1) return 1; 

   
    if(passer_wins(board,size,r+1,c)) {
	
	return 1;
}
    if(passer_wins(board,size,r,c-1)) {
	
	return 1;
}
    if(passer_wins(board,size,r,c+1)) {
	
	return 1;
}
    if(passer_wins(board,size,r+1,c-1)) {
	
	return 1;
}
    if(passer_wins(board,size,r+1,c+1)) {
	
	return 1;
}

    return 0;
}

int board_full(int board[MAX_SIZE][MAX_SIZE], int size) {
	int i,j;
    for ( i = 0; i < size; i++){
	
        for ( j = 0; j < size; j++){
		
            if (board[i][j] == 0){
			
                return 0; 
				}
		}
	}
		
    return 1; 
}
int main(int argc, char *argv[]) {

    printf("-------Welcome to the  Game------\n");
    printf("Player 1: Passer (connect top to bottom)\n");
    printf("Player 2: Eater (blocks Passer)\n");
    printf("Rules:\n- Passer forms a valid path -> Passer wins\n");
    printf("- Board full and Passer has no path -> Eater wins\n");

    int size;
    do {
        printf("Enter board size between 3 and 15: ");
        scanf("%d", &size);
    } while (size < 3 || size > 15);

    int board[MAX_SIZE][MAX_SIZE] = {0}; 
    print_board(board, size);

    int round = 1;

    while (!board_full(board, size)) {
        int pr, pc, er, ec;
        printf("\n--- Round %d ---\n", round);

 
        get_move(&pr, &pc, board, size, 'P');

        
        get_move(&er, &ec, board, size, 'E');
        if (pr == er && pc == ec) {
            board[er][ec] = -1;  
            printf(" Both chose same  (%d,%d). Eater occupies it.\n", pr+1, pc+1);
        } 
		else {
            board[pr][pc] = 1;    
            board[er][ec] = -1;   
            printf("Passer placed at (%d,%d), Eater placed at (%d,%d)\n", pr+1, pc+1, er+1, ec+1);
        }
        print_board(board, size);
        int i,j;
        for ( i=0; i<size; i++){
		
            for ( j=0; j<size; j++){
			
                visited[i][j] = 0; 
				}
				}
int col;
        int win = 0;
        for (col = 0; col < size; col++) {
            if (passer_wins(board, size, 0, col)) {
                win = 1;
                break;
            }
        }

        if(win){
            printf("\nPasser wins!\n");
            break;
        }

        if(board_full(board,size)){
            printf("\nBoard is full! Eater wins!\n");
            break;
        }

        round++;
    }

    return 0;
}

