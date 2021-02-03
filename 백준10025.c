#include <stdio.h>

int arr[1000001] = {0,};

int main(){
	int i,N,K,end=0;
	scanf("%d %d", &N, &K);

	for(i=0; i<N; i++){
		int g,x;
		scanf("%d %d", &g, &x);
		arr[x]=g;
		if(x > end)
			end = x;
	}

	int start=0, last=-1;
	int sum=0, max=0;
	while(1){
		if(last - start < 2*K){
			sum += arr[++last];
		}else{
			sum -= arr[start++];
			sum += arr[++last];
		}

		if(sum > max)
			max = sum;

		if(last == end)
			break;
	}
	printf("%d", max);

	return 0;
}
