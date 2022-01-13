#include <stdio.h>

int main(){
	char word[16];
	int i=0,sum=0;
	scanf("%s", word);
	
	while(word[i] != '\0'){
		if(word[i] <= 'C'){
			sum += 3;
		}else if(word[i] <= 'F'){
			sum += 4;
		}else if(word[i] <= 'I'){
			sum += 5;
		}else if(word[i] <= 'L'){
			sum += 6;
		}else if(word[i] <= 'O'){
			sum += 7;
		}else if(word[i] <= 'S'){
			sum += 8;
		}else if(word[i] <= 'V'){
			sum += 9;
		}else if(word[i] <= 'Z'){
			sum += 10;
		}
		i++;			
	}	
	printf("%d", sum);
	return 0;
}
