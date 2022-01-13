#include <stdio.h>
int sosu[1000001] = {0,};
 
int main(){
	int i,j,N,T;
    for(i=2; i<=1000000; i++)
        sosu[i] = i;
    for(i=2; i<=500000; i++){
		if(sosu[i] == 0)
			continue;
		for(j=2; i*j<=1000000; j++){
			sosu[i*j] = 0;
		}
	}
 
	scanf("%d", &T);
	for(i=0; i<T; i++){
		scanf("%d", &N);
        int cnt=0;
        for(j=0; j<=N; j++){
        	if(sosu[j] == 0)
        		continue;
            if(sosu[j] + sosu[N-j] == N){
                cnt++;
                if(N-j == j)
                    cnt++;
            }
        }
		printf("%d\n", cnt/2);
	}
 
	return 0;
}
