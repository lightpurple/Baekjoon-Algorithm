#include <stdio.h>

void countArr(int **start, int **last, int *count, int S, int sum){
	int size = (*last - *start)+1;
	
	if(sum >= S && size < *count)
		*count = size;
	
	if(**last == -1 || *count == 1)
		return;
	
	if(sum < S){
		(*last)++;
		sum += **last;
		countArr(start,last,count,S,sum);
	}else{
		sum -= **start;
		(*start)++;
		countArr(start,last,count,S,sum);
	}
}

int main(){
	int N,S,arr[100002] = {0,};
	
	scanf("%d %d", &N, &S);
	
	int i;
	for(i=0; i<N; i++)
		scanf("%d", &arr[i]);
	
	arr[N] = -1;
	
	int *start = arr, *last = &arr[1];
	int count=1000000000, sum = (*start + *last);
	
	countArr(&start, &last, &count, S, sum);
	
	if(count == 1000000000)
		printf("%d", 0);
	else
		printf("%d", count);
	return 0;
}
