#include <stdio.h>

int main(){
	int count=0, N;
	scanf("%d", &N);
											//5���� ū ���� ���ؼ� 
	while(N>=5 && ((N%5)%3==0 || N%5==0)){ //5�� ���� ���� 3���� ���������ų� 
		N -= 5;                            //5�� �������� �� 
		count++;
	} //11���� ����
	
	while(N>=3){
		N -= 3;
		count++;
	}
	
	if(N != 0){
		printf("%d", -1);
	}else{
		printf("%d", count);
	}
	
	return 0;
}
