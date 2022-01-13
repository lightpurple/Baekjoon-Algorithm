#include <stdio.h>

int main(){
	int T,i;
	int one[41],zero[41];
	scanf("%d", &T);
	
	zero[0] = 1;
	zero[1] = 0;
	one[0] = 0;
	one[1] = 1;
	
	for(i=2; i<=41; i++){
		zero[i] = zero[i-1] + zero[i-2];
		one[i] = one[i-1] + one[i-2];
	}
	
	int N;
	for(i=0; i<T; i++){
		scanf("%d", &N);
		printf("%d %d\n", zero[N], one[N]);
	}
	return 0;
}
