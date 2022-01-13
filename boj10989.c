#include <stdio.h>

int main(){
	int N, i, tmp, arr[10001] = {0,};
	
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
		scanf("%d", &tmp);
		arr[tmp]++;
	}
	
	for(i=1; i<=10000; i++){
		while(arr[i] > 0){
			printf("%d\n", i);
			arr[i]--;
		}
	}
	return 0;
}
