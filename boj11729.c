#include <stdio.h>
#include <math.h>

void hanoi(int N, int from, int by, int to) {
	if(N == 1){
		printf("%d %d\n", from, to);
	}else{
		hanoi(N-1,from,to,by);
		printf("%d %d\n", from, to);
		hanoi(N-1,by,from,to);
	}
	
}


int main(){
	int i, N, count;
	scanf("%d", &N);
	count = pow(2, N) - 1;
	printf("%d\n", count);

	hanoi(N,1,2,3);	
	return 0;
} 
