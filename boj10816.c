#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int card2_min(int *arr, int num, int start, int end){
	int mid = (start+end)/2;
	
	if(start > end)
		return -1;
	
	if(arr[mid] < num){
		card2_min(arr,num,mid+1,end);
	}else if(arr[mid] > num){
		card2_min(arr,num,start,mid-1);
	}else{
		if(arr[mid-1] != num || end == 0)
			return mid;
		else
			card2_min(arr,num,start,mid-1);
	}
}

int card2_max(int *arr, int num, int start, int end){
	int mid = (start+end)/2;
	
	if(start > end)
		return -1;
	
	if(arr[mid] < num){
		card2_max(arr,num,mid+1,end);
	}else if(arr[mid] > num){
		card2_max(arr,num,start,mid-1);
	}else{
		if(arr[mid+1] != num || start == end)
			return mid;
		else
			card2_max(arr,num,mid+1,end);
	}
}

int main(){
	int i,N,M;
	scanf("%d", &N);
	int *arr = (int *)malloc(sizeof(int)*N);
	
	for(i=0; i<N; i++)
		scanf("%d", &arr[i]);
	
	qsort(arr,N,sizeof(int),cmp);	
	scanf("%d", &M);
	
	int tmp;
	for(i=0; i<M; i++){
		scanf("%d", &tmp);
		if((card2_max(arr,tmp,0,N-1) + card2_min(arr,tmp,0,N-1)) < 0)
			printf("0 ");
		else
			printf("%d ", (card2_max(arr,tmp,0,N-1) - card2_min(arr,tmp,0,N-1))+1);
	}
	free(arr);
	return 0;
}
