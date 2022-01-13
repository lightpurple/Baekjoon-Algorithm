#include <stdio.h>

int main(){
	int A,B,C,point=0,i;
	
	scanf("%d %d %d", &A, &B, &C);
	
	point = (A/(C-B))+1;
	
	if(B>=C){
		printf("-1");
	}else
		printf("%d", point);	
	return 0;
}
