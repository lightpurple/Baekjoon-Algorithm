#include <stdio.h>

struct meet{
	int start,end;
};


int main(){
	int N,i,index,tmp; 
	scanf("%d", &N);
	struct meet m[N];
	int endIndex[N];
	
	for(i=0; i<N; i++){
		scanf("%d %d", &m[i].start, &m[i].end);
	}
	
		
	return 0;
}
