#include <stdio.h>

int main(){
	int N,i;
	scanf("%d", &N);
	
	while(N != 1){
		i=2;
		while(N%i != 0){
			i++;
		}
		printf("%d\n",i);
		N /= i;
	}
	return 0;
}
