#include <stdio.h>

int main(){
	int N,i,j,tmp;
	long long arr[101] = {0,};
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 1;
	scanf("%d", &N);
	for(i=0; i<N; i++){
		scanf("%d", &tmp);
		for(j=3; j<tmp; j++){
			arr[j] = arr[j-2] + arr[j-3];
		}
		printf("%lld\n", arr[tmp-1]);
	}
	return 0;
}
