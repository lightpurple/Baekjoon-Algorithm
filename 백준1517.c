#include <stdio.h>

int tmp[500001];
long long cnt=0;
void merge(int arr[], int start, int end){
	int idx=start;
	int i=start;
	int j=(start+end)/2;
	int k=j+1;
	
	while(i<=j || k<=end){
		if(i<=j && (k>end || arr[i] <= arr[k])){
			tmp[idx++] = arr[i++];
		}else{
			tmp[idx++] = arr[k++];
			cnt += (long long)(j-i+1);
		}
	}
	for(i=start; i<=end; i++)
		arr[i] = tmp[i];
}

int mergeSort(int arr[], int start, int end){
	if(start < end){
		int mid = (start+end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,end);
	}
}
int main(){
	int N,i;
	scanf("%d", &N);
	int arr[500001];
	for(i=0; i<N; i++)
		scanf("%d", &arr[i]);
	mergeSort(arr,0,N-1);
	printf("%lld", cnt);
	return 0;
}
