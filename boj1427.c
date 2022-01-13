#include <stdio.h>

int main(){
	int N,count=0,i,j,tmp,arr[10] = {0,};
	
	scanf("%d", &N);
	
	while(N>0){
		arr[count] = N%10;
		N /= 10;
		count++;
	}
	
	for(i=0; i<count-1; i++){
		for(j=i+1; j<count; j++){
			if(arr[i] < arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	
	for(i=0; i<count; i++)
		printf("%d", arr[i]);
	
	return 0;
}
