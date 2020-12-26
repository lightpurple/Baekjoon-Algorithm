#include <stdio.h>

int main(){
	int i,count=0,N,K;
	scanf("%d %d", &N, &K);
	
	int coin[N];
	for(i=0; i<N; i++){
		scanf("%d", &coin[i]);
	}
	
	i=N-1;
	while(K > 0){
		while(1){
			if(coin[i]<=K){
				K -= coin[i];
				count++;
			}else{
				break;
			}
		}
		i--;
	}
	
	printf("%d", count);
	
	return 0;
}
