#include <stdio.h>

int main(){
	int N,K,i,sum=1;
	
	scanf("%d %d", &N, &K);
	
	if(N==K || K==0){
		printf("%d", 1);
	}else{
		for(i=N; i>N-K; i--){
			sum *= i;
		}
		for(i=K; i>0; i--){
			sum /= i;
		}
		printf("%d", sum);	
	}
	return 0;
}
