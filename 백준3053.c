#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979

int main(){
	int R;
	
	scanf("%d", &R);
	
	printf("%.6lf\n", pi*pow(R,2));
	printf("%.6lf", 2*pow(R,2));
	return 0;
} 
