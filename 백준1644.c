#include <stdio.h>
#include <stdbool.h>
bool sosu[4000001] = {0,};
int N;

void findSosu(int *n){
	while(sosu[++(*n)] != 0);
}

int findSum(int start, int end, int sum, int cnt){
	if(end > N)
		return cnt;

	if(sum == N){
		cnt++;
		sum -= start;
		findSosu(&start);
		findSosu(&end);
		sum += end;
		findSum(start, end, sum, cnt);
	}else if(sum > N){
		sum -= start;
		findSosu(&start);
		findSum(start, end, sum, cnt);
	}else{
		findSosu(&end);
		sum += end;
		findSum(start, end, sum, cnt);
	}
}

int main(){
	int i,j;
	sosu[1] = 1;
	for(i=2; i<=4000000; i++)
		for(j=2; i*j<=4000000; j++)
			sosu[i*j] = 1;

	scanf("%d", &N);

	if(N==1)
		printf("0");
	else{
		printf("%d", findSum(2, 2, 2, 0));
	}
	
	return 0;
}
