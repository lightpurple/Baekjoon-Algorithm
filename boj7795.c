#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int main(){
	int T,N,M,i;
	scanf("%d", &T);

	for(i=0; i<T; i++){
		scanf("%d %d", &N, &M);
		int *a = (int *)malloc(sizeof(int) * N);
		int *b = (int *)malloc(sizeof(int )* M);
		int k;
		for(k=0; k<N; k++)
			scanf("%d", &a[k]);
		for(k=0; k<M; k++)
			scanf("%d", &b[k]);
		qsort(b,M,sizeof(int),cmp);

		int p,cnt=0;
		for(k=0; k<N; k++)
			for(p=0; p<M; p++){
				if(a[k] <= b[p])
					break;
				cnt++;
			}
		printf("%d\n", cnt);
		free(a);
		free(b);
	}
	return 0;
}
