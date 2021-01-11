#include <stdio.h>

int lastData(int a, int b){
	int one = a % 10;
	
	if(one == 0){
		return 10;
	}else if(one == 1 || one == 5 || one == 6){
		return one;
	}else if(one == 4 || one == 9){
		if(b % 2 == 0)
			return one*one%10;
		else
			return one;
	}else{
		if(b % 4 == 0){
			return one*one*one*one%10;
		}else if(b % 4 == 1){
			return one;
		}else if(b % 4 == 2){
			return one*one%10;
		}else{
			return one*one*one%10;
		}
	}
}

int main(){
	int T,a,b,i,tmp;
	scanf("%d", &T);
	
	for(i=0; i<T; i++){
		scanf("%d %d", &a, &b);
		printf("%d\n", lastData(a,b));
	}
	return 0;
}
