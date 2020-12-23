#include <stdio.h>
#define findMin(a,b) a < b ? a : b

int main(void){
	int N,M,i,j,a,b,cntW,cntB,min=1000;
	char arr[50][50];
	
	scanf("%d %d",&N, &M);
	
	for(i=0; i<N; i++){
		scanf("%s", arr[i]);
	}
	
	for(i=0; i<N-7; i++){
		for(j=0; j<M-7; j++){
			cntW=0, cntB=0;
			for(a=i; a<i+8; a++){
				for(b=j; b<j+8; b++){
					if((a+b)%2 == 0){
						if(arr[a][b] == 'B'){
							cntB++;
						}else{
							cntW++;
						}
					}else{
						if(arr[a][b] == 'B'){
							cntW++;
						}else{
							cntB++;
						}
					}
				}
			}
			min = findMin(cntB,min);
			min = findMin(cntW,min);
		}
	}
	printf("%d", min);
	return 0;
}
