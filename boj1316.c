#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void){
	int i,j,N,count=0;
	char word[101];
	scanf("%d", &N);
	getchar();
	for (i=0; i<N; i++){
		gets(word);
		bool apNum[26] = {0,};	 //���ĺ��� ��뿩�� üũ 
		j=0;
		
		while(word[j] != '\0'){	 
			if(word[j] == word[j+1]){ //j��° ���ڿ� j+1��° ���ڰ� ���� ��� 
				apNum[(int)word[j+1]-'a'] = 1;			
			}else{					//j��° ���ڿ� j+1��° ���ڰ� �ٸ� ���
				if(apNum[(int)word[j+1]-'a'] == 0){
					apNum[(int)word[j+1]-'a'] = 1;	
					apNum[(int)word[j]-'a'] = 1;
				}
				else{
					count++;
					break;
				}	
			}
			j++;
		}
	}
	printf("%d", N-count);
	
	return 0;
}
