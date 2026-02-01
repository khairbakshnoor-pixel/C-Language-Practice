#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("-------welcome to the game------\n");
	printf("-------This is a  two players board game------\n");
	printf("\nplayer 1 is Passer who want to connect top to bottom\n");
	printf("player 2 is the Eater who tries to block passer(player 1)\n ");
	printf("\n		---game rules-----\n ");
	printf("---passer forms a valid pattern he will win--\n");
	printf("---board is full and passer not won -> Eater wins--\n");
	int board_size;
	printf("\nEnter board size between  (3 and 15) 			:");
	scanf("%d",&board_size);
	while(board_size<3  || board_size>15){
	printf("\n Again Enter board size between  (3 and 15) 			:");
	scanf("%d",&board_size);
	}
int board[15][15];
int i ,j;
for(i=0;i<board_size;i++){
	
	for(j=0;j<board_size;j++){
		board[i][j]=0;
	
	}

}
for(i=0;i<board_size;i++){
	for(j=0;j<board_size;j++){
		if(board[i][j]==0){
		
			printf(".");
		}
			else if (board[i][j]==1){
				printf("P");
			}
				else if(board[i][j]==-1){
					printf("E");
				
					
				
			
	}

		printf(" ");
	}
	printf("\n");
}
int passer_row,passer_col;
int eater_row,eater_col;
int empty_cells = board_size * board_size;

while(empty_cells > 0) {
 do {
        printf("Passer: Enter row and column %d: ", board_size);
        scanf("%d %d", &passer_row, &passer_col);
        passer_row--; 
        passer_col--;
    } 
	while(passer_row<0 || passer_row>=board_size || passer_col<0 || passer_col>=board_size || board[passer_row][passer_col]!=0);

    do {
        printf("Eater: Enter row and column %d: ", board_size);
        scanf("%d %d", &eater_row, &eater_col);
        eater_row--;
        eater_col--;
    } while(eater_row<0 || eater_row>=board_size || eater_col<0 || eater_col>=board_size || board[eater_row][eater_col]!=0);

   
    if(passer_row == eater_row && passer_col == eater_col) {
        board[passer_row][passer_col] = -1;  // Eater wins the cell
    } else {
        board[passer_row][passer_col] = 1;   // Passer
        board[eater_row][eater_col] = -1;    // Eater
    }

  
    printf("\nBoard after this turn:\n");
    for(i=0;i<board_size;i++){
        for(j=0;j<board_size;j++){
            if(board[i][j]==0) printf(". ");
            else if(board[i][j]==1) printf("P ");
            else if(board[i][j]==-1) printf("E ");
        }
        printf("\n");
    }
}
	return 0;
}
