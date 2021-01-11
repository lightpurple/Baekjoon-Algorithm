#include <stdio.h>
#define findMin2(a,b) a<=b ? a : b
#define findMin3(a,b,c) a<=b ? (a<=c ? a : c) : (b<=c ? b : c)

int dp[1000001] = {0,};

int main(){
	int N,i,k;
	
	scanf("%d", &N);
	
	for(i=2; i<=N; i++)
		if(i%3 == 0 && i%2 == 0){
			dp[i] = (findMin3(dp[i/3],dp[i/2],dp[i-1]))+1;
		}else if(i%3 == 0){
			dp[i] = (findMin2(dp[i/3],dp[i-1]))+1;
		}else if(i%2 == 0){
			dp[i] = (findMin2(dp[i/2],dp[i-1]))+1;
		}else
			dp[i] = 1 + dp[i-1];
			
	printf("%d", dp[N]);
	return 0;
}
