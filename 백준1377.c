#include <stdio.h>
#include <stdlib.h>
int N,i,unSort[500001],Sort[1000001] = {0,};
int cnt[1000001] = {0,};
int main(){

	scanf("%d", &N);

	for(i=1; i<=N; ++i){
		scanf("%d", &unSort[i]);
		Sort[unSort[i]]++;
	}
	cnt[0] = Sort[0];
	for(i=1; i<=1000000; ++i)
		cnt[i] = cnt[i-1]+Sort[i];
	
	int max=0;

	for(i=N; i>=0; --i){
		if(i-cnt[unSort[i]] > max){
			max = i-cnt[unSort[i]];
			cnt[unSort[i]]--;
		}
	}
	printf("%d", max+1);

	return 0;
}
