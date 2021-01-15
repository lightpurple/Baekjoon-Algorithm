#include <stdio.h>

int note1[1000001] = {0,};

int cmp(const void *a, const void *b){
	int ia = *(int *)a, ib = *(int *)b;
	if(ia < ib)
		return -1;
	if(ia > ib)
		return 1;
	return 0;
}

void findNum(int arr[], int a, int b, int c);

int main(){
	int T,i,N,M;
	scanf("%d", &T);
	for(i=0; i<T; i++){
		scanf("%d", &N);
		
		int j;
		for(j=0; j<N; j++)
			scanf("%d", &note1[j]);
		
		qsort(note1,N,sizeof(int), cmp);
		
		int tmp;
		scanf("%d", &M);
		
		for(j=0; j<M; j++){
			scanf("%d", &tmp);
			findNum(note1,0,N-1,tmp);
		}
	}
	return 0;
} 

void findNum(int arr[], int start, int end, int target){
	int mid = (start+end)/2;
	
	if(start>end){
		printf("0\n");
		return;
	}
		
	if(arr[mid] > target){
		findNum(arr,start,mid-1,target);
	}else if(arr[mid] < target){
		findNum(arr,mid+1,end,target);
	}else{
		printf("1\n");
		return;
	}
}
