#include <stdio.h>
#include <string.h>

int main(){
	char word[101];
	int apNum[26];
	int tmp,i=0;
	memset(apNum, -1, sizeof(apNum));			 
	gets(word);
	
	while(word[i] != '\0'){
		if(apNum[word[i]-97] == -1){
			apNum[word[i]-97] = i;
		}
		i++;
	}
	for(i=0; i<26; i++)
		printf("%d ", apNum[i]);
	
	return 0;
}
