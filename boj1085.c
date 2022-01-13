#include <stdio.h>
#include <math.h>
#define minFinder(a,b) a<b ? a : b

int main(void){
	int x,y,w,h,min;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	min = minFinder(x, abs(w-x));
	min = minFinder(min,y);
	min = minFinder(min,abs(h-y));
	
	printf("%d", min);
	
	return 0;
}
