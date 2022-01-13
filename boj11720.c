#include <stdio.h>
#include <string.h>

int main(void){
	char num[102];
	int N,i,sum=0;
	
	scanf("%d", &N);
	getchar();
	gets(num);
	
	for(i=0; i<N; i++)
		sum += num[i]-48;
	
	printf("%d", sum);
	return 0;
}
