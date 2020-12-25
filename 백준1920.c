#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
	int num1 = *(int *)a;
	int num2 = *(int *)b;
	
	if(num1 < num2)
		return -1;
		
	if(num1 > num2)
		return 1;
	
	return 0;
}

void cmpNum(int *std, int start, int end, int key){
	int mid = (start+end)/2;
	
	if(start > end){
		printf("0\n");
		return;
	}
	
	if(std[mid] > key){
		cmpNum(std,start,mid-1,key);
	}else if(std[mid] < key){
		cmpNum(std,mid+1,end,key);
	}else{
		printf("1\n");
		return;
	}
}

int main(){
	int N,M,i,j,tmp;
	
	scanf("%d", &N);
	int *std = malloc(sizeof(int) * N);
	
	for(i=0; i<N; i++){
		scanf("%d", &std[i]);
	}
	
	qsort(std, sizeof(std)/sizeof(int), sizeof(int), compare);

	scanf("%d", &M);
	
	for(i=0; i<M; i++){
		scanf("%d", &tmp);
		cmpNum(std,0,N-1,tmp);
	}
	
	free(std);
	return 0;
} 
