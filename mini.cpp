#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char names[50][50];
	int i;
	int total=0;
	int choice;
	while(1){
		printf("\ncodecamp management system\n");
		printf("1.add students\n");
		printf("2.show all students\n");
		printf("3.search student  id\n");
		printf("4.exit\n");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			printf("enter your name  ");
			scanf("%s",names[total]);
			printf("assigned id =%d\n",total+1);
			total++;
			break;
			case 2:
				printf("\n student list\n");
				for( i=0;i<total;i++){
					printf("%d . %s\n",i+1,names[i]);
					break;
					case 3:{
						int id;
						printf("enter id to search");
						scanf("%d",&id);
						if(id>= 1 && id <=total){
						
						printf("student nme =%s \n",names[id]);
					}
						else{
						
						printf("invalid id\n");
					}
						break;
					}
					case 4:
						printf("exiting program....\n");
						return 0;
						default :
							printf("invalid program");
						
						
				}
				
		}
	}
	return 0;
}
