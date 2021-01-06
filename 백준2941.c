#include <stdio.h>
#include <string.h>

int croaAlpb(char word[]){
	int index=0,count=0;

	while(index < strlen(word)) 
		switch(word[index]){
		case 'c':
			if(word[index+1] == '-' || word[index+1] == '='){
				count++;
				index += 2;
			}else
				count++,index++;
			break;
		case 'd':
			if(word[index+1] == '-'){
				count++;
				index += 2;
			}else if(word[index+1] == 'z' && word[index+2] == '='){
				count++;
				index += 3;
			}else
				count++,index++;
			break;
		case 'l':
			if(word[index+1] == 'j'){
				count++;
				index += 2;
			}else
				count++,index++;
			break;
		case 'n':
			if(word[index+1] == 'j'){
				count++;
				index += 2;
			}else
				count++,index++;
			break;
		case 's':
			if(word[index+1] == '='){
				count++;
				index += 2;
			}else
				count++,index++;
			break;
		case 'z':
			if(word[index+1] == '='){
				count++;
				index += 2;
			}else
				count++,index++;
			break;
		default:
			count++,index++;
	}
	
	return count;
}

int main(){
	char word[101];
	scanf("%s", word);
	printf("%d", croaAlpb(word));
	return 0;
}
