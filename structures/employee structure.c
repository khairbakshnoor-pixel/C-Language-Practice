#include <stdio.h>
#include <stdlib.h>

struct emp{
	int emp_code;
	char name[67];
	int date;
};
int main(int argc, char *argv[]) {
	
	struct emp array[3];
	int i,date,newdate;
	for(i=0;i<2;i++){
		printf("enter the employee code	:");
		scanf("%d",&array[i].emp_code);
		printf("enter the employee name		:");
		scanf(" %[^\n]s",array[i].name);
		printf("enter the date of joining		:");
		scanf("%d",&array[i].date);
		
	}
	printf("enter the current date			:");
	scanf("%d",&date);
	for(i=0;i<2;i++){
		newdate=date-array[i].date;
		if(newdate>=3){
			printf(" \n the person has more than three years service is == %s\n",array[i].name);
		}
		
		}
	
	return 0;
}
