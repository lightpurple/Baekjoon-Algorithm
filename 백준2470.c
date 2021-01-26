#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define abs(a) a<0 ? -a : a
int min = INT_MAX;
int cmp(const void *a, const void *b){
	int ia = *(int *)a;
	int ib = *(int *)b;

	if(ia > ib)
		return 1;
	if(ia < ib)
		return -1;
	return 0;
}

void findSolutions(int solu[], int fir, int last, int *a, int *b){
	int sum = abs((solu[fir] + solu[last]));
	if(sum < min){
		*a = solu[fir];
		*b = solu[last];
		min = sum;
	}
	if(fir+1 == last)
		return;
	int sum1 = abs((solu[fir+1] + solu[last]));
	int sum2 = abs((solu[fir] + solu[last-1]));

	if(sum1 > sum2)
		findSolutions(solu, fir, last-1, a, b);
	else
		findSolutions(solu, fir+1, last, a, b);
}
int main(){
	int i,N,a,b;
	int solutions[100001] = {0,};

	scanf("%d", &N);
	for(i=0; i<N; i++)
		scanf("%d", &solutions[i]);

	qsort(solutions, N, sizeof(int), cmp);
	int fir=0, last=N-1;

	findSolutions(solutions, fir, last, &a, &b);

	printf("%d %d", a, b);
	return 0;
}
