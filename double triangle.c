#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char pass[20];
	
	do{
			printf("enter password");
	scanf("%s",&pass);
	if(strcmp(pass,"1234") !=0){
	
	printf("wrong password\n");
}
	}while(strcmp(pass,"1234") !=0);
	printf("corrrect password\n");
	return 0;
}
