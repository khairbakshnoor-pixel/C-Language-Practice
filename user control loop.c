#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf("enter a number (negative to stop)");
	scanf("%d",&num);
	while (num>=0){
		printf("you entered %d\n",num);
		printf("enter again");
		scanf("%d",&num);
	}
	printf("loop stops at %d",num);
	return 0;
}

