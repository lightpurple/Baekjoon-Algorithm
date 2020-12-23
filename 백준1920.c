#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,N,M,tmp;
	int *std = NULL,*arr = NULL;
	
	scanf("%d", &N);
	std = (int*)malloc(sizeof(int)*N);
	
	for(i=0; i<N; i++){
		scanf("%d", &std[i]);
	}
	
	scanf("%d", &M);
	arr = (int*)calloc(M, sizeof(int));
	
	for(i=0; i<M; i++){
		scanf("%d", &tmp);
		for(j=0; j<N; j++){
			if(std[j] == tmp){
				arr[i] = 1;
			}
		}
		printf("%d\n", arr[i]);
	}
	free(std);
	free(arr);
	return 0;
}
