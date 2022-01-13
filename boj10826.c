#include <stdio.h>
#include <string.h>
#define itoc(X) X == 0 ? X : X-'0'

int main(){
	int i,n;
	scanf("%d", &n);

	char *fibo[10001];
	fibo[0] = "0";
	fibo[1] = "1";
	
	for(i=2; i<=n; i++){
		char tmp[10000] = {0,};
		int a = strlen(fibo[i-1]);
		int b = strlen(fibo[i-2]);
		
		if(a>b){
			int k;
			for(k=0; k<b; k++){
				if((itoc(fibo[i-1][k])) + (itoc(fibo[i-2][k])) + (itoc(tmp[k])) > 9)
					tmp[k+1] = '1';
				tmp[k] = (((itoc(fibo[i-1][k])) + (itoc(fibo[i-2][k])) + (itoc(tmp[k]))) % 10) + '0';
			}
			for(;k<a;k++){
				if((itoc(fibo[i-1][k])) + (itoc(tmp[k])) > 9)
					tmp[k+1] = '1';
				tmp[k] = (((itoc(fibo[i-1][k])) + (itoc(tmp[k]))) % 10) + '0';
			}
			fibo[i] = strdup(tmp);			
		}else if(a<b){
			int k;
			for(k=0; k<a; k++){
				if((itoc(fibo[i-1][k])) + (itoc(fibo[i-2][k])) + (itoc(tmp[k])) > 9)
					tmp[k+1] = '1';
				tmp[k] = (((itoc(fibo[i-1][k])) + (itoc(fibo[i-2][k])) + (itoc(tmp[k]))) % 10) + '0';
			}
			for(;k<b;k++){
				if((itoc(fibo[i-2][k])) + (itoc(tmp[k])) > 9)
					tmp[k+1] = '1';
				tmp[k] = (((itoc(fibo[i-2][k])) + (itoc(tmp[k]))) % 10) + '0';
			}
			fibo[i] = strdup(tmp);	
		}else{
			int k;
			for(k=0; k<b; k++){
				if((itoc(fibo[i-1][k])) + (itoc(fibo[i-2][k])) + (itoc(tmp[k])) > 9)
					tmp[k+1] = '1';
				tmp[k] = (((itoc(fibo[i-1][k])) + (itoc(fibo[i-2][k])) + (itoc(tmp[k]))) % 10) + '0';
			}
			fibo[i] = strdup(tmp);		
		}
	}
	
	for(i=strlen(fibo[n])-1; i>=0; i--)
		printf("%c", fibo[n][i]);
	
	return 0;
}

