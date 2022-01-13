#include <stdio.h>

int main(){
	int N,i,j,tmp,cnt=0;;
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		scanf("%d", &tmp);
		for(j=2; j<=tmp; j++){
			if(tmp%j == 0 && tmp != j){
				break;
			}else if(tmp == j){
				cnt++;
			}
		}
	}
	
	printf("%d", cnt);
	return 0;
}
