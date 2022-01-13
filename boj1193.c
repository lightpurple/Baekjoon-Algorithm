#include <stdio.h>

int main(){
	int count=1,a=1,b=1,i,X;
	
	scanf("%d", &X);
	
	while(1){
		if(count == X)
			goto ONE;
		if(a==1){
			b++;
			count++;
			if(count == X)
				goto ONE;
			for(i=b; i>1; i--){
				a++;
				b--;
				count++;
				if(count == X)
					goto ONE;
			}
		}else if(b==1){
			a++;
			count++;
			if(count == X)
				goto ONE;
			for(i=a; i>1; i--){
				a--;
				b++;
				count++;
				if(count == X)
					goto ONE;
			}
		}
	}
ONE:
	printf("%d/%d", a, b);	
	return 0;
}
