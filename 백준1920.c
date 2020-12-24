#include <stdio.h>
#include <stdlib.h>

void quickSort(int *arr, int start, int end){
	if(start >= end){
		return;
	}
	
	int i,j,temp,key;
	key = start;
	i = start+1;
	j = end;
	
	while(i <= j){
		while(arr[i] <= arr[key]){
			i++;
		}
		while(arr[j] >= arr[key] && j>start){
			j--;
		}
		
		if(i>j){
			temp = arr[j];
			arr[j] = arr[key];
			arr[key] = temp;
		}else{
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
	
	quickSort(arr,start,j-1);
	quickSort(arr,j+1,end);
}

void cmpNum(int *std, int start, int end, int key){
	int mid = (start+end)/2;
	
	if(start > end){
		printf("0\n");
		return;
	}
	
	if(std[mid] > key){
		cmpNum(std,start,mid-1,key);
	}else if(std[mid]< key){
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
	
	quickSort(std,0,N-1);

	scanf("%d", &M);
	
	for(i=0; i<M; i++){
		scanf("%d", &tmp);
		cmpNum(std,0,N,tmp);
	}
	free(std);
	return 0;
} 
