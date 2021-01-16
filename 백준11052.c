#include <stdio.h>
#include <stdlib.h>

int main(){
	int N,i,j;
	scanf("%d", &N);
	
	int *arr = (int *)malloc(sizeof(int) * N);
	int *max = (int *)malloc(sizeof(int) * N);
	for(i=0; i<N; i++){
		scanf("%d", &arr[i]);
		max[i] = arr[i];
	}
	
	for(i=1; i<N; i++){
		for(j=0; j<i; j++){
			int cmp = max[i-j-1] + arr[j];
			if(max[i] < cmp)
				max[i] = cmp;
		}
	}
	
	printf("%d", max[N-1]);
	
	free(arr);
	free(max);
	return 0;
}
