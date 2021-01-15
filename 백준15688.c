#include <stdio.h>

int arr[1000001] = {0,};

int cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int main(){
	int N,i;
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	
	qsort(arr,N,sizeof(int),cmp);
	
	for(i=0; i<N; i++)
		printf("%d\n", arr[i]);
	
	return 0;
}
