#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int main(){
	int i,N,sum=0,min=0;
	
	scanf("%d", &N);
	
	int *P = (int *)malloc(sizeof(int) * (N));
	
	for(i=0; i<N; i++){
		scanf("%d", &P[i]);
	}
	
	qsort(P, N, sizeof(int), compare);
	
	for(i=0; i<N; i++){
		sum += P[i];
		min += sum;
	}
	printf("%d", min);
	free(P);
	return 0;
}
