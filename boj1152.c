#include <stdio.h>

int main(){
	char str[1000001];
	int count=0;
	
	while(scanf("%s", str) != EOF){ 
		count++;
	}
	printf("%d", count);
	return 0;
}
