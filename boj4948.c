#include <stdio.h>
#define NUM 123456

int main(){
	int i,j,k,count,tmp,n;
	int arr[300000] = {0,};
	
	for(j=2; j<=NUM; j++){
		for(k=2; k*j<=NUM*2; k++)
			arr[j*k] = 1;
	}
	
	scanf("%d", &n);
	
	do{
		count = 0;
		for(i=n+1; i<=2*n; i++){
			if(arr[i] == 0){
				count++;
			}
		}
		if(n == 1){
			printf("1\n");
		}else	
			printf("%d\n",count);
		scanf("%d", &n);
	}while(n != 0);
	
	return 0;
}
