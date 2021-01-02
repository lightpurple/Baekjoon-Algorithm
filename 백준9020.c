#include <stdio.h>
#include <math.h>

int checkDec(int num){
	int i;
	if(num < 4)
		return 0;
	for(i=2; i<=sqrt(num); i++){
		if(num%i == 0)	//num�� �Ҽ��� �ƴϸ� 
			return 1;
	}
	return 0;
}

void findResult(int a, int b){ //Ȧ�� 2���� �Է¹޾� ���̰� ���� �Ҽ��� ��� 
	if(checkDec(a) == 0 && checkDec(b) == 0){
		printf("%d %d\n", a, b);
	}else{
		findResult(a-2, b+2);
	}
	return;
}

void gold(int n){
	int a = n/2;
	if(a%2 != 0){	//n�� 2�� ���� ���� Ȧ�� �� �� 
		findResult(a,a);
	}else{			//n�� 2�� ���� ���� ¦�� �� �� 
		if(n == 4)
			findResult(a,a); //n�� 4�� ��
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
