#include <stdio.h>
#include <string.h>
static char arr[600001];
static int index=0;

void order(char a){
	if(a == 'L'){
		if(index != 0)
			index--;
	}else if(a=='D'){
		if(index != strlen(arr)+1)
			index++;
	}else if(a == 'B'){
		if(index != 0)
			arr[index-1] = NULL;
	}else if(a == 'P'){
		scanf("%c", arr[index-1]);
	}
}

int main(){
	int i,M;
	char tmp;
	scanf("%s", arr);
	scanf("%d", &M);
	getchar();
	for(i=0; i<M; i++){
		scanf("%c", &tmp);
		getchar();
		order(tmp);
	}
	printf("%s", arr);
	return 0;
}
