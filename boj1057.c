#include <stdio.h>
#define half(a) a%2 == 0 ? a/2 : a/2+1

int main(){
	int N,k,h;
	scanf("%d %d %d", &N, &k, &h);
	int cnt=1;
	while(1){
		if(k%2 == 0){
			if(k-1 == h){
				printf("%d", cnt);
				break;
			}
		}else{
			if(k+1 == h){
				printf("%d", cnt);
				break;
			}
		}
		if(k != 1)
			k = half(k);
		if(h != 1)
			h = half(h);
		N = half(N);
		if(N == 1){
			printf("-1\n");
			break;
		}
		cnt++;
	}

	return 0;
}
