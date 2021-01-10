#include <stdio.h>
#include <string.h>

int main(){
	char token[] = " ";
	char str[1000001];
	char *tok;
	int count=0;
	
	gets(str);
	tok = strtok(str,token);
	while(tok != NULL){
		count++;
		tok = strtok(NULL,token);
	}
	printf("%d", count); 
	return 0;
}
