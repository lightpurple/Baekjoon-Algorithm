#include <stdio.h>
#include <limits.h>

static int cmprow(const void *a, const void *b)
{
    const int * const ia = a, * const ib = b;
    if(ia[0] < ib[0])
   		return -1;
   	else if(ia[0] > ib[0])
   		return 1;
   	else{
   		if(ia[1] < ib[1])
   			return -1;
		else if(ia[1] > ib[1])
			return 1;
		else
			return 0;	
	}
}

int main(){
	int N,i;
	int m[100001][2] = {0,};
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++)
		scanf("%d %d", &m[i][1], &m[i][0]);
	
	qsort(m,N,sizeof(*m),cmprow);
				
	for(i=0; i<N; i++)
		printf("%d %d\n", m[i][1], m[i][0]);
	return 0;
}
