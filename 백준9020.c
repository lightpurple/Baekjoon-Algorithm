#include <stdio.h>
#include <math.h>

int checkDec(int num){
	int i;
	if(num < 4)
		return 0;
	for(i=2; i<=sqrt(num); i++){
		if(num%i == 0)	//num이 소수가 아니면 
			return 1;
	}
	return 0;
}

void findResult(int a, int b){ //홀수 2개를 입력받아 차이가 작은 소수를 출력 
	if(checkDec(a) == 0 && checkDec(b) == 0){
		printf("%d %d\n", a, b);
	}else{
		findResult(a-2, b+2);
	}
	return;
}

void gold(int n){
	int a = n/2;
	if(a%2 != 0){	//n을 2로 나눈 값이 홀수 일 때 
		findResult(a,a);
	}else{			//n을 2로 나눈 값이 짝수 일 때 
		if(n == 4)
			findResult(a,a); //n이 4일 때
		else{ 
			a -= 1;
			findResult(a,a+2);
		}
	}
	return;
}

int main(){
	int T,n,i;
	
	scanf("%d", &T);
	
	for(i=0; i<T; i++){
		scanf("%d", &n);
		gold(n);
	}
	return 0;
}
