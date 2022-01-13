#include <stdio.h>

int main(void){
	int i,N;
	char arr[5];
	
	while(1){
		scanf("%d", &N);
		if(N == 0)
			break;
		sprintf(arr, "%d", N);
		
		if(N<10){
			printf("yes\n");
		}else if(N<100){
			if(arr[0] == arr[1]){
				printf("yes\n");
			}else{
				printf("no\n");
			}
		}else if(N<1000){
			if(arr[0] == arr[2]){
				printf("yes\n");
			}else{
				printf("no\n");
			}
		}else if(N<10000){
			if(arr[0] == arr[3] && arr[1] == arr[2]){
				printf("yes\n");
			}else{
				printf("no\n");
			}
		}else{
			if(arr[0] == arr[4] && arr[1] == arr[3]){
				printf("yes\n");
			}else{
				printf("no\n");
			}
		}
	}
	return 0;
}

