#include <stdio.h>

int main(){
	int i,tmp,sum=0;
	for(i=0; i<5; i++){
		scanf("%d", &tmp);
		sum += tmp*tmp;
	}
	printf("%d", sum%10);
	return 0;
}
