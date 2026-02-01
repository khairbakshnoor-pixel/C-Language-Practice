#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	FILE *fp;
	fp=fopen("marksheet.txt","w");
	if(fp==NULL){
		printf("FILE CAN NOT BE OPENED");
		return 1;
}

	  fprintf(fp,"\t\n---------------------------------------------");
    fprintf(fp,"\t\n| # | Subject | Obtain | Total | Percentage |");
   
    int mark,i;
   
    printf("\n\tEnter marks of FOP : ");
    scanf("%d",&mark);
    fprintf(fp,"\t\n---------------------------------------------");
    fprintf(fp,"\t\n| %d|   FOP  |    %d   |  100  |     %d      |",++i,mark,((mark*100)/100));
    printf("\n\tEnter marks of ITC : ");
    scanf("%d",&mark);
    fprintf(fp,"\t\n---------------------------------------------");
    fprintf(fp,"\t\n| %d|   ITC  |    %d   |  100  |     %d      |",++i,mark,((mark*100)/100));
    printf("\n\tEnter marks of ENG : ");
    scanf("%d",&mark);
    fprintf(fp,"\t\n---------------------------------------------");
    fprintf(fp,"\t\n| %d|   ENG  |    %d   |  100  |     %d      |",++i,mark,((mark*100)/100));
    printf("\n\tEnter marks of PHY : ");
    scanf("%d",&mark);
    fprintf(fp,"\t\n---------------------------------------------");
    fprintf(fp,"\t\n| %d|   PHY  |    %d   |  100  |     %d      |",++i,mark,((mark*100)/100));
    printf("\n\tEnter marks of CAL : ");
    scanf("%d",&mark);
    fprintf(fp,"\t\n---------------------------------------------");
    fprintf(fp,"\t\n| %d|   CAL  |    %d   |  100  |     %d      |",++i,mark,((mark*100)/100));
    fprintf(fp,"\t\n---------------------------------------------");
    fclose(fp);
	return 0;
}
