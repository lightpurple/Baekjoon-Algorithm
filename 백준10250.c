#include <stdio.h>

int main(){
	int T,H,W,N,i,j,k,ten,count;
	
	scanf("%d", &T);
	
	for(i=0; i<T; i++){
		scanf("%d %d %d", &H, &W, &N);
		count=0;
		for(j=1; j<=W; j++){
			ten = j/10;
			for(k=1; k<=H; k++){
				count++;
				if(count == N){
					printf("%d%d%d\n", k, ten, j%10);
				}
			}
		}
	}
	return 0;
}
