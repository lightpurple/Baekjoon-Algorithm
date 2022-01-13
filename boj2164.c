#include <stdio.h>

static int card[500001] = {0,};

int main(){
	int N,remain,i,on=1,turn=0;
	scanf("%d", &N);
	remain = N;
	for(i=1; i<=N; i++)
		card[i]++;
	
	if(N==1)
		printf("1");
	else if(N%2 == 0){
		while(1){
			for(i=1; i<=N; i++){
				if(card[i] != 0 && on == 1){
					card[i] = 0;
					on = 0;
					remain--;
				}else if(card[i] != 0 && on == 0){
					on = 1;
					if(remain == 1){
						printf("%d", i);
						goto EXIT;
					}
				}
			}
		}
	}else{
		while(1){
			if(turn == 0){
				for(i=1; i<=N; i++){
					if(card[i] != 0 && on == 1){
						card[i] = 0;
						on = 0;
						remain--;
					}else if(card[i] != 0 && on == 0){
						on = 1;
						if(remain == 1){
							printf("%d", i);
							goto EXIT;
						}
					}
				}
				turn = 1;
			}else{
				for(i=1; i<=N; i++){
					if(card[i] != 0 && on == 1){
						card[i] = 0;
						on = 0;
						remain--;
					}else if(card[i] != 0 && on == 0){
						on = 1;
						if(remain == 1){
							printf("%d", i);
							goto EXIT;
						}
					}
				}
				turn = 0;
			}
		}
	}
EXIT:
	return 0;
}
