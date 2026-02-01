#include <stdio.h>
#include <stdlib.h>

void upper(char str[60]){
	int i;
	for(i=0;str[i]!='\0';i++){
		str[i]=str[i]-32;
	
	}
		printf("the upper case is %s",str);
}
void lower(char str[60]){
	int i;
	for(i=0;str[i]!='\0';i++){
		str[i]=str[i]+32;
	
	}
		printf("\nthe lower  case is %s\n",str);
}
void len(char str[60]){
	int i;
	int count=0;
	for(i=0;str[i]!='\0';i++){
	count++;
	
	}
		printf("\nthe lower  case is %d\n",count);
}
void lent(char str[60]){
	int i;
	for(i=0;str[i]!='\0';i++){
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
	
	printf("\nthe vowels are %c\n",str[i]);
}

}		
}
int main(int argc, char *argv[]) {
	
	 char str[60];
	printf("enter a string		:");
	scanf("%[^\n]s",str);
	
	upper(str);
	lower(str);
	
	lent(str);
	return 0;
}
