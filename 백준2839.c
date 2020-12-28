#include <stdio.h>

int main(){
	int count=0, N;
	scanf("%d", &N);
											//5보다 큰 수에 한해서 
	while(N>=5 && ((N%5)%3==0 || N%5==0)){ //5로 나눈 값이 3으로 나누어지거나 
		N -= 5;                            //5로 나누어질 때 
		count++;
	} //11에서 막힘
	
	while(N>=3){
		N -= 3;
		count++;
	}
	
	if(N != 0){
		printf("%d", -1);
	}else{
		printf("%d", count);
	}
	
	return 0;
}
