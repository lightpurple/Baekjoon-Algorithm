#include <stdio.h>
#include <stdbool.h>

int main(){
	int M,N,size,i,j,sum=0,cnt=0;
	
	scanf("%d", &M);
	scanf("%d", &N);
	size = N-M+1;
	int arr[size];
	bool check[10001] = {0,};
	
	for(i=0; i<size; i++){
		arr[i] = M+i;
	}
	
	for(i=0; i<size; i++){
		for(j=2; j<=arr[i]; j++){
			if(arr[i]%j == 0 && arr[i] != j){
				break;
			}else if(arr[i] == j){
				cnt++;
				check[i] = 1;
			}
		}
	}
	
	if(cnt == 0){
		printf("%d", -1);
		return 0;
	}
	
	for(i=0; i<size; i++){
		if(check[i] == 1){
			sum += arr[i];
		}
	}
	
	printf("%d\n", sum);
	
	for(i=0; i<size; i++){
		if(check[i] ==1){
			printf("%d", arr[i]);
			break;
		}
	}
	return 0;
}
