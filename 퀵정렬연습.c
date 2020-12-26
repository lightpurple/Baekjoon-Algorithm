#include <stdio.h>

void quickSort(int *arr, int start, int end){
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
		}else{
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
	
	quickSort(arr,start,j-1);
	quickSort(arr,j+1,end);
}

int main(){
	int arr[10] = {5,7,2,8,4,3,1,9,6,10};
	
	quickSort(arr,0,9);
	int i;
	for(i=0; i<10; i++)
		printf("%d", arr[i]);
	
	return 0;
}
