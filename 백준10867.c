#include <stdio.h>
#include <stdbool.h>

int main(){
	bool check[2001] = {0,};
	int tmp,i,N;
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		scanf("%d", &tmp);
		check[tmp+1000] = 1;
	}
	
	for(i=0; i<=2000; i++)
		if(check[i])
			printf("%d ", i-1000);
	
	return 0;
}
