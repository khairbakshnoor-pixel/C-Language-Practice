#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char pass[20];
		printf("enter the password");
	scanf("%s",&pass);
	while (strcmp(pass,"1234")!=0){
		printf("enter the password again");
	scanf("%s",&pass);	
	}
	printf("login succesful ");
	return 0;
}
