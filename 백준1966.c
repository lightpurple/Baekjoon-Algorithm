#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	return *(int *)b - *(int *)a;
}

int printerQ(int *q,int *arr,int M,int N){
	int i=0,count=0;
	
	while(1){
		while(arr[count] != q[i]){
			i++;
			if(i == N)
				i=0;
		}
		q[i] = -1;
		count++;
		if(q[M] == -1)
			return count;
	}
}

int main(){
	int T,N,M,i;
	
	scanf("%d", &T);
	
	for(i=0; i<T; i++){
		scanf("%d %d", &N, &M);
		int *queue = (int *)malloc(sizeof(int)*N);
		int *arr = (int *)malloc(sizeof(int)*N);
		int k;
		for(k=0; k<N; k++){
			scanf("%d", &queue[k]);
			arr[k] = queue[k];
		}
		qsort(arr,N,sizeof(int),cmp);
		printf("%d\n", printerQ(queue,arr,M,N));	
		free(queue);
		free(arr);
	}
	
	return 0;
}
