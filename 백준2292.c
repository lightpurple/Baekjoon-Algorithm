#include <stdio.h>

int main(){
	int num=1,i=1,N;
	scanf("%d", &N);
	
	while(num+1 <= N){
		if(N == 1)
			break;
		num += i*6;
		i++;
	}
	printf("%d", i);
	return 0;
}
