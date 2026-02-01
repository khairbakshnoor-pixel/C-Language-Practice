#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int marks[10]={50,30,40,60,90,48,34,23,23,11};
	int i;
	for(i=0;i<10;i++){
		if(marks[i]<40){
			
			printf("%d\n",marks[i]);
		}
	}
	return 0;
}
