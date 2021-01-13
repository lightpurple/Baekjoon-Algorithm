#include <stdio.h>
#include <string.h>

int main(){
	char sick[52],numArr[6];
	char *tok;
	int i=0,j,result[52] = {0,},k=0,tmpSum;
	
	gets(sick);
	tok = strtok(sick,"-");
	while(tok != '\0'){
		i=0,j=0,tmpSum=0;
		while(1){			
			while(tok[i] >= '0'){		
				numArr[j++] = tok[i++];	
			}
			numArr[j] = '\0';
			tmpSum += atoi(numArr);
			if(tok[i] == '\0')
				break;
			i++;
			j=0;
		}
		result[k++] = tmpSum;
		tok = strtok(NULL,"-");
	}
	
	int sum=result[0];
	for(i=1; i<k; i++)
		sum -= result[i];
	
	printf("%d", sum); 
	return 0;
}
