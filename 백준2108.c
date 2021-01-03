#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b; 
}

int main(){
	int i, N, id, count=0, large, small, big=0, index[8001] = {0,};
	double sum=0;
		
	scanf("%d", &N);
	int *arr = (int *)malloc(sizeof(int) * N);

	for(i=0; i<N; i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
		index[arr[i]+4000]++;
	}
	
	printf("%.lf\n", sum/N);	//»ê¼úÆò±Õ
	
	qsort(arr, N, sizeof(int), cmp); 
	
	printf("%d\n", arr[N/2]);		//Áß¾Ó°ª
		
	for(i=0; i<8001; i++){		//ÃÖºó°ª,ÃÖ´ñ°ª Ã£±â 
		if(index[i] > big){
			big = index[i];
		}
		
		if(index[i] > 0){
			large = i;
		}
	}
	
	for(i=0; i<8001; i++){		//ÃÖ¼Ú°ª Ã£±â  
		if(index[i] > 0){
			small = i;
			break;
		} 
	}
	
	for(i=0; i<8001; i++){
		if(big == index[i]){
			count++;
			id = i;
		}
	}
	
	if(count == 1){
		printf("%d\n", id-4000);
	}else{
		count = 0;
		for(i=0; i<8001; i++){
			if(big == index[i]){
				count++;
			}
			if(count == 2){
				printf("%d\n", i-4000);
				break;
			}
		}
	}
	
	printf("%d", large - small);
	
	free(arr);
	return 0;
}
