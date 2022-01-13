#include <stdio.h>

int hap(int k, int n){
	if(k==0 || n==1){
		return n;
	}
	return hap(k-1,n) + hap(k, n-1);
}

int main(){
	int T,k,n,i;
	
	scanf("%d", &T);
	
	for(i=0; i<T; i++){
		scanf("%d", &k);
		scanf("%d", &n);
		printf("%d\n", hap(k,n));
	}
	
	return 0;
}
