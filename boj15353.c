#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* revers_str(char str[]){
	int i,size = strlen(str);
	char *arr = (char *)malloc(sizeof(char)*size);
	for(i=0; i<size; i++){
		arr[i] = str[size-i-1];
	}
	arr[i] = '\0';
	return arr;
}

int main(){
	char a[10001]={0,},b[10001]={0,};
	int c[10002]={0,};
	scanf("%s %s", a, b);
	
	char *ar = revers_str(a);
	char *br = revers_str(b);
	
	int i=0;
	while(ar[i] != '\0' && br[i] != '\0'){
		int anum = ar[i]-'0';
		int bnum = br[i]-'0';
		if(anum + bnum + c[i] >= 10){
			c[i] = (anum+bnum+c[i])%10;
			c[i+1]++;
		}else{
			c[i] = (anum+bnum+c[i])%10;
		}
		i++;
	}
	
	if(ar[i] == '\0'){
		while(br[i] != '\0'){
			int bnum = br[i] - '0';
			if(bnum + c[i] >= 10){
				c[i] = (bnum+c[i])%10;
				c[i+1]++;
			}else{
				c[i] = (bnum+c[i])%10;
			}
			i++;
		}
	}else if(br[i] == '\0'){
		while(ar[i] != '\0'){
			int anum = ar[i] - '0';
			if(anum + c[i] >= 10){
				c[i] = (anum+c[i])%10;
				c[i+1]++;
			}else{
				c[i] = (anum+c[i])%10;
			}
			i++;
		}
	}
	
	int k;
	if(c[i] == 0){
		for(k=i-1; k>=0; k--)
			printf("%d", c[k]);
	}else{
		for(k=i; k>=0; k--)
			printf("%d", c[k]);
	}
	
	free(ar);
	free(br);
	return 0;
}
