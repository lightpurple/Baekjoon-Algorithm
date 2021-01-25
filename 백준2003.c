#include <stdio.h>
int target,N;

int find(int *, int, int, int, int);

int main(){
	int arr[10001] ={0,};
	int i;

	scanf("%d %d", &N, &target);

	for(i=0; i<N; i++)
		scanf("%d", &arr[i]);

	printf("%d\n", find(arr, 0, 0, 0, 0));
	return 0;
}

int find(int *arr, int fir, int last, int sum, int cnt){
	if(last > N-1)
		return cnt;
	sum += arr[last];
	if(sum > target){
		sum -= arr[fir];
		sum -= arr[last];
		find(arr, fir+1, last, sum, cnt);
	}else if(sum == target){
		sum -= arr[fir];
		find(arr, fir+1, last+1, sum, cnt+1);	
	}else{
		find(arr, fir, last+1, sum, cnt);
	}
}
