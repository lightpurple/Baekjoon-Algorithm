#include <stdio.h>

int main(){
	int dp[100001]={0,};
	int N,i,j;
	scanf("%d",&N);

	for(i=1; i<=N; i++){
		for(j=1; j*j <= i; j++){
			if(dp[i]>dp[i-j*j]+1 || dp[i] == 0){
				dp[i] = dp[i-j*j] + 1;
			}
		}
	}
	printf("%d\n",dp[N]);
	return 0;
}
