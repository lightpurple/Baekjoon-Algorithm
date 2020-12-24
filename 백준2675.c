#include <stdio.h>
#include <string.h>

int main(){
	int T,R,i,j,k;
	char word[20];
	
	scanf("%d", &T);
	
	for(i=0; i<T; i++){
		scanf("%d %s", &R, word);
		for(j=0; j<strlen(word); j++){
			for(k=0; k<R; k++){
				printf("%c", word[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
