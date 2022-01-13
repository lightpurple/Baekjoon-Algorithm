#include <stdio.h>

void hanoi(int n, int from, int by, int to){
	if(n==1){
		printf("%d %d\n", from, to);
	}else{
		hanoi(n-1, from, to, by);
		printf("%d %d\n", from, to);
		hanoi(n-1, by, from, to);
	}
}

int main(){
	int N;
	int number[101]={0,};
	number[0] = 1;
	scanf("%d", &N);
	int i,j,p;
	for(i=1; i<=N; i++){
		j=0;
		p=0;
		while(j<i){
			int tmp = number[j];
			if(tmp + tmp + p > 9){
				number[j] = (tmp*2 + p)%10;
				p=1;
			}else{
				number[j] = (tmp*2 + p)%10;
				p=0;
			}
			j++;
		}
	}
	for(i=N-1; i>=0; i--)
		if(number[i] != 0)
			while(i>=0){
				if(i==0)
					printf("%d", number[i]-1);
				else
					printf("%d", number[i]);
				i--;
			}
	puts("");
	if(N<=20)
		hanoi(N,1,2,3);
	return 0;
}
