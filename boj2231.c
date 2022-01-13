#include <stdio.h>

int main(){
	int i,tmp,N,result=0;
	
	scanf("%d", &N);
	
	for(i=1; i<N; i++){
		tmp = i;
		while(tmp != 0){
			result += tmp%10;
			tmp /= 10;
		}
		result += i;
		if(result == N){
			printf("%d", i);
			break;
		}else{
			result = 0;
		}
	}
	
	if(result == 0){
		printf("0");
	}
	return 0;
}
