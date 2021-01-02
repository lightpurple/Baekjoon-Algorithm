#include <stdio.h>
#include <stdbool.h>

int main(){
	int i,j,k,a,b;
	bool arr[1000002] = {0,};
	arr[1] = 1;
	for(j=2; j<=500000; j++){
		for(k=2; k*j<=1000000; k++){
			if(arr[j*k] == 1){
				continue;
			}else{
				arr[j*k] = 1;
			}
		}
	}
	
	scanf("%d %d", &a, &b);
	
	for(i=a; i<=b; i++){
		if(!arr[i]){
			printf("%d\n", i);
		}
	}
	return 0;
}
