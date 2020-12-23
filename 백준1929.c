#include <stdio.h>
#define SIZE 1000001

int arr[SIZE] = {0,};	

int main(){
	int M,N,i,j,tmp;
	scanf("%d %d", &M, &N);
	
	arr[1] = 1;
	
	for(i=2; i<=N; i++){
		tmp = i;
		while(tmp<=N){
			tmp += i;
			if(arr[tmp] == 0){
				arr[tmp] = 1;
			}
		}
	}
	
	for(i=M;i<=N;i++){
		if(arr[i]==0){
			printf("%d\n", i);
		}else
			continue;
	}
	return 0;
}
