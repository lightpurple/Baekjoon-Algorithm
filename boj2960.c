#include <stdio.h>

int main(){
	int N,K,arr[1001] = {0,};
	int i,j,count=0;
	scanf("%d %d", &N, &K); 
	for(i=2; i<=N; i++){
		for(j=1; j*i<=N; j++){
			if(arr[j*i] == 0){
				count++;
				arr[j*i] = 1;
			}
			if(count == K){
				printf("%d", i*j); 
				goto EXIT;
			}
		}
	}
EXIT:
	return 0;
}
