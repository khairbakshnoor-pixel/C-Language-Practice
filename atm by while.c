#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int balance=500;
	int withdraw;
		printf("enter the amount to withdraw ");
	scanf("%d",&withdraw);
	while(withdraw<=balance){
		balance-=withdraw;
		printf("the remaining balance is %d\n",balance);
				printf("enter the amount to withdraw 0 to stop ");
	scanf("%d",&withdraw);
	if(withdraw==0){
		break;
}
}
	printf("transaction ended");
	
	return 0;
}
