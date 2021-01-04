#include <stdio.h>
#include <math.h>

int main(){
	double a,b;
	int i;
	
	scanf("%lf %lf", &a, &b);
	
	printf("%d.", (int)a/(int)b);

	for(i=0; i<1000; i++){
		a = fmod(a,b) * 10;
		printf("%d", (int)a/(int)b);
		if(fmod(a,b) == 0)
			break;
	}
	return 0;
}
