#include <stdio.h>

int cmpArr(int arr[], int i){
	return (arr[i]-arr[i+1]);	
}

int hanSoo(int arr[], int N){
	int i=0;
	while(N>0){
		arr[i] = N%10;
		N /= 10;
		i++;
	}
	i=0;
	if(cmpArr(arr, i) == cmpArr(arr, i+1) ){
		return 1;
	}else{
		return 0;
	}
}

int main(void){
	int i=0, N, count=0, num[4];
	scanf("%d", &N);
	
	if(N>=100){
		for(i=100; i<=N; i++){
			if (N == 1000)		//N이 1000일경우 계산하기 귀찮아서 그냥 제외시킴 
				N--;
			count += hanSoo(num, i);			
		}
		printf("%d", count + 99);
	}else{
		printf("%d", N);
	}
	return 0;
}
