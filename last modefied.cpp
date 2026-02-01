#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 15
void print_board(int board[MAX_SIZE][MAX_SIZE],int size){
	int i ,j;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(board[i][j]==1){
				printf("P ");
			}
			else if(board[i][j]==-1){
				printf("E ");
			}
			else{
				printf(". ");
			}
		}
		printf("\n");
	}
}


void get_move(int *r,int *c ,int board[MAX_SIZE][MAX_SIZE],int size,char player){
	
	while(1){
	
	printf("enter %c move of the player",player);
	scanf("%d %d",r,c);
	(*r)--;
	(*c)--;
	if(*r<0 || *r>=size || *c<0 || *c>=size){
		printf("invalid position or out of range");
	}
		else if (board[*r][*c]!=0){
			printf("cell already occupied");
			
		}
		else{
			break;
		}
	}
}
int visited[MAX_SIZE][MAX_SIZE];
int passer_wins(int board[MAX_SIZE][MAX_SIZE],int r,int c,int size ){

  if(r<0 || r>=size || c<0 || c>=size){
	
	 return 0;
}
    if(board[r][c]!=1 || visited[r][c]){
    	
	return 0;
}

    visited[r][c]=1;
    if(r==size-1){
	 return 1; 
}

   
    if(passer_wins(board,r+1,c,size)) {
	
	return 1;
}
    if(passer_wins(board,r,c-1,size)) {
	
	return 1;
}
    if(passer_wins(board,r,c+1,size)) {
	
	return 1;
}
    if(passer_wins(board,r+1,c-1,size)) {
	
	return 1;
}
    if(passer_wins(board,r+1,c+1,size)) {
	
	return 1;
}

    return 0;
}
int board_full(int board[MAX_SIZE][MAX_SIZE],int size){
	int i ,j;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(board[i][j]==0){
				return 0;
			}
		}
	}
    return 1;
}
int main(){
	int size;
	  printf("-------Welcome to the  Game------\n");
    printf("Player 1: Passer (connect top to bottom)\n");
    printf("Player 2: Eater (blocks Passer)\n");
    printf("Rules:\n- Passer forms a valid path -> Passer wins\n");
    printf("- Board full and Passer has no path -> Eater wins\n");
    do{
    	printf("enter the size of the board");
    	scanf("%d",&size);
	}while(size<3||size>15);
	int board[MAX_SIZE][MAX_SIZE] = {0};
	print_board(board,size);
	
	int round=0;
	while(!board_full(board,size)){
		int pr,pc,er,ec;
		printf("\n round no %d",round);
		get_move(&pr,&pc,board,size,'p');
		
		get_move(&er,&ec,board,size,'E');
		if(pr==er &&pc==ec){
			board[er][ec]=-1;
			printf("due to same eater occupies it %d,%d",pr+1,pc+1);
		}
		else{
			board[pr][pc]=1;
			board[er][ec]=-1;
			printf("passer places at %d  %d eater places  %d  %d" ,pr+1,pc+1,er+1,ec+1);
			
		}
		print_board(board,size);
		int i,j;
		for(i=0;i<size;i++){
			for(j=0;j<size;j++){
				visited[i][j]=0;
			}
		}
		int col;
		int win=0;
		for(col=0;col<size;col++){
			if(passer_wins(board,0,col,size)){
				win=1;
				break;
			}
		}
		if(win){
			printf("passer wins");
			break;
		}
		if(board_full(board,size)){
			printf("board is full eater wins");
			break;
		}
		
	}
	
	
	return 0;
}

