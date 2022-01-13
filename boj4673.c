#include <stdio.h>
#include <stdbool.h> 
#define N 10001

int selfNum(int num){
	int sum = num;
	
	while(num>0){
		sum += num%10;
		num /= 10;
	}
	return sum;
}

int main(void){
	int i, num;
	bool arr[N];
	
	for(i=1; i<N; i++){
		num = selfNum(i);	
		if(num < N){
			arr[num] = 1;
		}	
	}
	
	for(i=1; i<N; i++){
		if(arr[i] == 0)
			printf("%d\n", i);
	}
	return 0;
} 
