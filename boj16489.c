#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	double s = pow(a,2)*pow(b,2)/4*(1-(pow((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b),2)));
	double rOut = pow((a*b*c),2)/(16*s);
	double rIn = 4*s/pow((a+b+c),2);
	double curry = rOut-(2*sqrt(rOut)*sqrt(rIn));
	double sooseons_hap = sqrt(rOut)+sqrt(rIn);
	
	if(a==b && b==c)
		curry = 0.0f;
	
	printf("%.13lf\n", sqrt(s));
	printf("%.13lf\n", sqrt(rOut));
	printf("%.13lf\n", sqrt(rIn));
	printf("%.13lf\n", sqrt(curry));
	printf("%.13lf\n", sooseons_hap);
	return 0;
}
