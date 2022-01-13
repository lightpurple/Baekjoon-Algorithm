#include <stdio.h>

int main(void){
	int i, j, N, tmp;
	int num[1002];
	
	scanf("%d", &N);
	for (i=0; i<N; i++){
		scanf("%d", &num[i]);
	}
	
	for(i=0; i<N; i++){
		j=i;
		while(j>0 && num[j-1]>num[j]){
			tmp = num[j-1];
			num[j-1] = num[j];
			num[j] = tmp;
			j--;
		}
	}
	
	for(i=0; i<N; i++)
		printf("%d\n", num[i]);
	
	return 0;
}
