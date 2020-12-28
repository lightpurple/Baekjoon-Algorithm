#include <stdio.h>

int divMax(int n, int a){
	if(a < 0){
		return -1;
	}
	if(n-(5*a) == 0){
		return a;
	}else if((n-(5*a))%3 == 0){
		return a+((n-(5*a))/3);
	}else{
		divMax(n, a-1);
	}
}

int main(){
	int N,a;
	scanf("%d", &N);
	
	if(N>=5){
		a = N/5;
		printf("%d", divMax(N,a));
	}else{
		if(N%3 == 0){
			printf("%d", 1);
		}else{
			printf("%d", -1);
		}
	}
	return 0;
} 
