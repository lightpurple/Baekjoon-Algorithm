#include <stdio.h>

int main(){
	int a,b,i,j;
	int arr[10];
	scanf("%d %d", &a, &b);
	
	for(i=0;i<3;i++){
		arr[i] = a%10;
		a /= 10;
		arr[i+3] = b%10;
		b /= 10;
	}
	
	for(i=0;i<3;i++){
		if(arr[i] > arr[i+3]){
			for(j=0; j<3; j++)
				printf("%d", arr[j]);
			break;
		}else if(arr[i] < arr[i+3]){
			for(j=0; j<3; j++)
				printf("%d", arr[j+3]);
			break;
		}
	}
	return 0;
}
