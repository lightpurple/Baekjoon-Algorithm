#include <stdio.h>
#include <math.h>
#define findBig(a, b, c) a>b ? (a>c ? a : c) : (b>c ? b : c)

int main(){
	int a,b,c,big;
	scanf("%d %d %d", &a, &b, &c);
	
	do{
		big = findBig(a,b,c);
		if(big == sqrt(a*a + b*b) || big == sqrt(c*c + b*b) || big == sqrt(a*a + c*c))
			printf("right\n");
		else
			printf("wrong\n");
		scanf("%d %d %d", &a, &b, &c);
	}while(a!=0 && b!=0 && c!=0);
	return 0;
}
