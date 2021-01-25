#include <stdio.h>
#define max(a,b) a>b ? a:b
int N,K;
int sum(int *arr){
	int i, sum=0;
	for(i=0; i<K; i++)
		sum += arr[i];
	return sum;
}
int main(){
	int weather[100001] = {0,};
	int i;
	scanf("%d %d", &N, &K);

	for(i=0; i<N; i++)
		scanf("%d", &weather[i]);
	int *start = weather, *end = &weather[K-1];
	int tmp = sum(weather);
	int result = tmp;

	for(i=0; i<=N-K-1; i++){
		tmp -= *(start++);
		tmp += *(1+end++);
		result = max(result, tmp);
	}
	printf("%d", result);
	return 0;
}
