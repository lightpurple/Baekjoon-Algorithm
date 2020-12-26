#include <stdio.h>
#include <stdlib.h>

void quickSort(int *arr, int *check, int start, int end){
	if(start >= end){
		return;
	}
	
	int i,j,temp,key;
	key = start;
	i = start+1;
	j = end;
	
	while(i <= j){
		while(arr[i] <= arr[key] && i <= end){
			i++;
		}
		while(arr[j] >= arr[key] && j>start){
			j--;
		}
		
		if(i>j){
			temp = arr[j];
			arr[j] = arr[key];
			arr[key] = temp;
			
			temp = check[j];
			check[j] = check[key];
			check[key] = temp;
		}else{
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
			
			temp = check[j];
			check[j] = check[i];
			check[i] = temp;
		}
	}
	
	quickSort(arr,check,start,j-1);
	quickSort(arr,check,j+1,end);
}

int main(){
	int N,i,j,tmp;
	
	scanf("%d", &N);
	int **point = malloc(sizeof(int*) * N);
	int *temp = malloc(sizeof(int) * N);
	int *arr = malloc(sizeof(int) * N);
	
	for(i=0; i<N; i++){
		point[i] = malloc(sizeof(int) * 2);
		scanf("%d %d", &point[i][0], &point[i][1]);
		arr[i] = i;
		temp[i]= point[i][0];
	}
	
	quickSort(temp,arr,0,N-1);
	
	for(i=0; i<N-1; i++){
		for(j=i+1; j<N; j++){
			if(point[i][0] == point[j][0]){
				if(point[i][1] > point[j][1]){ //-1이 왜 1보다 크게 나오는거지.. 
					tmp = point[i][1];			//그보다 시간초과나옴.. 
					point[i][1] = point[j][1];
					point[j][1] = tmp;
				}
			}
		}
	}
	for(i=0; i<N; i++)
		printf("%d %d\n", point[arr[i]][0], point[arr[i]][1]);
	
	for(i=0; i<N; i++)
		free(point[i]);
	free(point);
	free(arr);
	free(temp);
	return 0;
}
