#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	do{
		printf("\n ===menu====\n");
		printf("\n 1. check ststus\n");
		printf("\n 2. about \n");
		printf("\n 3.exit  \n");
			printf("enter a number");
	        scanf("%d",&choice);
	
	switch(choice) {
		case 1:printf("status ok\n");break;
		case 2:printf("system\n");break;
		case 3:printf("exiting\n");break;
		default : printf("invalid \n");
	}
}
	while(choice!=3);
	
	return 0;
}
