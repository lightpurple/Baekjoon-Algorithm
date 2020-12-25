#include <stdio.h>
#include <math.h>

int main(){
	int N,i,idx=0,end=665;
	
	scanf("%d", &N);
	
	while(1){
		if(idx == N){
		printf("%d\n", end);
			break;
		}
		end++;
		for(i=0; i<10; i++){
			if(end / (int)pow(10,i) % 1000 == 666){
				idx++;
				break;
			}
		}
	}
	return 0;
}
