#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score=0;
//	create a menu driven program having three Math based quiz option
//e.g.. quiz 1(algebra), quiz2(arithmetic operation) etc.
//ask user to enter which quiz he/she want to attempt .
//give 1 marks for each correct answer
//Display the total score at the end.
while(1){

printf("\nMENU\n");
printf("\nWelcome to the quiz");
printf("\n1.algebra");
printf("\n2.arithmetic");
printf("\n 3. exit\n");
printf("your score is %d\n",score);
int choice;
printf("Enter your choice ");
scanf("%d",&choice);

switch(choice){
	case 1:
		
		printf("2+7");
		int ans;
		scanf("%d",&ans);
		if(ans==9){
			printf("correct answer ");
			score++;
		}
			else{
				printf("wrong answer");
			}
		
		break;
		case 2:
		printf("2+6");
		scanf("%d",&ans);
		if(ans==8){
			printf("correct answer ");
			score++;
		}
			else{
				printf("wrong answer");
			}
		
		break;
			case 3:
				return 0;
			default:
				printf("invalid choice");
}

}

	return 0;
}
