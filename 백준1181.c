#include <stdio.h>
#include <string.h>

static int cmpWd(const void *a, const void *b)
{
    if(strlen((char *)a) > strlen((char *)b))
   		return 1;
   	else if(strlen((char *)a) < strlen((char *)b))
   		return -1;
   	else
		return strcmp((char *)a,(char *)b);	
}

int main(){
	char tmp[51], wrong[20] = {"ignorethis"}, word[20001][51] = {0,};
	int N,i,j,check;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		check=0;
		scanf("%s", tmp);
		for(j=0; j<i; j++){
			if(strcmp(word[j],tmp) == 0){
				strcpy(word[i], wrong);
				check++;
				break;
			}
		}
		if(check==0)
			strcpy(word[i], tmp);
	}
	
	qsort(word, N, sizeof(word[0]), cmpWd);
	
	for(i=0; i<N; i++)
		if(strcmp(word[i],wrong) != 0)
			printf("%s\n", word[i]);
	
	return 0;
}
