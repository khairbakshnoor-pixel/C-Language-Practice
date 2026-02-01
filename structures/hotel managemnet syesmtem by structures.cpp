#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
# define MAX_SIZE 25
////Define a structure named Task to store information
// about a task, including task title (string), task
////description (string), task priority (integer), and task status (boolean).
struct task{
	char title[50];
	char disc[50];
	int priority;
	bool status;
};
//
//Declare an array of 25 Task structures to represent the task list.

//
//Implement a function loadTasks that reads task information 
//from a file named "tasks.txt" into the array of
//structures or from the structures (Filing is optional).
void loadtask(struct task list[], int n){
    FILE *fp = fopen("tasks.txt", "r");
    if(fp == NULL){
        printf("FILE CANNOT BE OPENED\n");
        return;
    }
int i;
    for(i=0; i<n; i++){
        fgets(list[i].title, 50, fp);
  

        fgets(list[i].disc, 50, fp);
       

        fscanf(fp, "%d\n", &list[i].priority);
        fscanf(fp, "%d\n", &list[i].status);
    }

    fclose(fp);
    printf("File read successfully\n");
}
void loadtask(struct task list[]){
	FILE *fp;
	fp=fopen("tasks.txt","r");
		if(fp==NULL){
			printf("FILE CAN NOT BE OPEND");
		}
		printf("file readed succesfulyy");
	
}
int main(){
	int n=3;
	struct task list[MAX_SIZE];
	loadtask(list,n);
	
	return 0;
}

