#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int main(){
	int i,n,x,arr[100001] = {0,};
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);
	qsort(arr, n,sizeof(int),cmp);

	int *fir = arr, *last = &arr[n-1];
	int count=0;
	
	while(*fir < *last){
		if((*fir) + (*last) == x){
			count++;
			fir++;
		}else if((*fir) + (*last) > x){
			last--;
		}else{
			fir++;
		}
	}
	
	printf("%d", count);
	return 0;
}
