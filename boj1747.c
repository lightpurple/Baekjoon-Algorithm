#include <stdio.h>
int sosu[1004000]={0,};

int pd(int num){
	int cnt=0, tmp = num, i;
	int arr[8];
	while(tmp>0){
		cnt++;
		arr[cnt] = tmp % 10;
		tmp /= 10;
	}

	for(i=1; i<=cnt; i++){
		if(arr[i] != arr[cnt+1-i])
			return 0;
	}
	return 1;
}

int main(){
	int N,i,j;
	sosu[1] = 1;
	for(i=2; i<=1004000; i++){
		if(sosu[i] == 1)
			continue;
		for(j=2; i*j<=1004000; j++)
			sosu[i*j] = 1;
	}

	scanf("%d", &N);

	for(i=N; i<=1004000; i++){
		if(sosu[i] == 1)
			continue;
		else{
			if(pd(i) == 0)
				continue;
			else{
				printf("%d", i);
				break;
			}
		}
	}
	return 0;
}
