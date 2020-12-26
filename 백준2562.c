#include <stdio.h>

int main(void){
	int i, index, max=0, arr[9];
	for(i=0; i<9; i++){
		scanf("%d", &arr[i]);
		if(max<arr[i]){
			max = arr[i];
			index = i;
		}
	}
	printf("%d\n", max);
	printf("%d\n", index+1);
	
	return 0;
}
