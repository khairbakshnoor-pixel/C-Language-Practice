#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int bubble[5]={44,33,55,22,11};
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5-i;j++){
			if(bubble[j]>bubble[i+1]){
				int swap=bubble[j];
				bubble[j]=bubble[j+1];
				bubble[j+1]=swap;
				
			
			printf("%d ",swap);
		}
			
		}
	}
	return 0;
}
