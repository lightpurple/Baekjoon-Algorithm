#include <stdio.h>
#define MAX 1000000
int sosu[MAX+1];
int main(){
	int n,i,j;
	for(i=2;i<=MAX;i++)
		sosu[i] = i;

	for(i=2; i<MAX/2; i++)
		for(j=2; i*j<=1000000; j++)
			sosu[i*j] = 0;
	sosu[1] = 0;
	scanf("%d", &n);
	while(n != 0){
		for(i=3; i<=n; i++)
			if(sosu[i] + sosu[n-i] == n){
				printf("%d = %d + %d\n", n, sosu[i], sosu[n-i]);
				break;
			}
		if(i == n)
			printf("Goldbach's conjecture is wrong.\n");
		scanf("%d", &n);
	}
	return 0;
}
