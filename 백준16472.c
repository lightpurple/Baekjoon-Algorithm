#include <stdio.h>

int alpa[26] = {0,};
int num=0,N,max=0;

int minNum(char str[], int start){
	int i=start;
	while(num != N){
		int cur = str[i++] - 'a';
		alpa[cur]--;
		if(alpa[cur] == 0)
			num--;
	}
	return i;
}

void maxLen(char str[], int start, int end){
	if(str[end] == '\0')
		return;
	int cur = str[end] - 'a';

	if(num <= N){
		if(alpa[cur] == 0)
			num++;
		alpa[cur]++;
		if(max<end-start+1 && num <= N)
			max = end-start+1;
		maxLen(str, start, end+1);
	}else{
		start = minNum(str, start);
		maxLen(str, start, end);
	}
}

int main(){
	int i;
	char str[100001];

	scanf("%d", &N);
	getchar();
	scanf("%s", str);
	maxLen(str,0,0);
	printf("%d", max);
	return 0;
}
