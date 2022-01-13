#include <stdio.h>

int main(){
	int i, j, k, N, M, sum=0;
	scanf("%d %d", &N, &M);
	int card[N];
	for(i=0; i<N; i++){
		scanf("%d", &card[i]);
	}
	
	for(i=0; i<N-2; i++){
		for(j=i+1; j<N-1; j++){
			for(k=j+1; k<N; k++){
				if(card[i]+card[j]+card[k] < M && card[i]+card[j]+card[k]>sum){
					sum = card[i]+card[j]+card[k];
				}else if(card[i]+card[j]+card[k] == M){
					sum = card[i]+card[j]+card[k];
					goto EXIT;
				}
			}
		}
	}
	
EXIT:
	printf("%d", sum);
	
	return 0;
}
