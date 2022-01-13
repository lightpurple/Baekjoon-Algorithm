#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int main(){
	int i,N,M;
	int arr[20000];

	scanf("%d", &N);
	scanf("%d", &M);

	for(i=0; i<N; i++)
		scanf("%d", &arr[i]);

	qsort(arr,N,sizeof(int),cmp);
	int cnt=0;
	int start=0,end=N-1;
	while(1){
		end = N-1;
		while(arr[start] + arr[end] > M)
			end--;

		if(start >= end)
			break;

		if(arr[start] + arr[end] == M)
			cnt++;

		start++;
	
	}
	printf("%d", cnt);
	return 0;
}
