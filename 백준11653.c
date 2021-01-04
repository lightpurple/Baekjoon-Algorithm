#include <stdio.h>

void bunhae(int num){
	if(num == 1)
		return;
	int i=2;
	
	while(num % i != 0){
		i++;
	}
	printf("%d\n", i);
	bunhae(num/i);
}

int main(){
	int N;
	scanf("%d", &N);
	bunhae(N);
	return 0;
}
