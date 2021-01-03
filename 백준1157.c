#include <stdio.h>

int main(){
	char word[1000000];
	int i=0,j,count=0,big = 0,index, arr[26] = {0,};
	scanf("%s", word);
	
	while(word[i] != '\0'){
		for(j=0; j<26; j++){
			if(word[i] == 65+j || word[i] == 97+j)
				arr[j]++;
		}
		i++;
	}
	
	for(i=0; i<26; i++){
		if(big < arr[i]){
			big = arr[i];
			index = i;
		}
	}
	
	for(i=0; i<26; i++){
		if(big == arr[i])
			count++;
	}
	
	if(count != 1){
		printf("?");
	}else{
		printf("%c", index+65);
	}
	return 0;
}
