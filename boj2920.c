#include <stdio.h>

int main(){
	int i,arr[8];
	for(i=0; i<8; i++)
		scanf("%d", &arr[i]);
	int as=0,des=0;
	for(i=0; i<7; i++){
		if(arr[i]+1 == arr[i+1])
			as++;
		if(arr[i]-1 == arr[i+1])
			des++;
	}
	if(as == 7)
		printf("ascending");
	else if(des == 7)
		printf("descending");
	else
		printf("mixed");
	return 0;
}
