#include <stdio.h>
#define REMAIN 42

int main(void){
	int i, j, count=0, arr[10];
	for(i=0; i<10; i++){
		scanf("%d", &arr[i]);
		arr[i] %= REMAIN;
	}
	
	for(i=0; i<10; i++){
		for(j=i+1; j<10; j++){
			if(arr[i] == arr[j])
			arr[j] = 2000;
		}
	}
	
	for(i=0; i<10; i++)
		if(arr[i] != 2000)
			count++;
	
	printf("%d", count);		
	
	return 0;
}
