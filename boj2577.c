#include <stdio.h>

int main(void){
	int A,B,C,i,sum;
	int one=0, two=0, thr=0, four=0, fiv=0, six=0, sev=0, eig=0, nin=0, zer=0;
	char chSum[10];
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	sum = A*B*C;
	
	sprintf(chSum, "%d", sum);
	
	for(i=0; i<10; i++){
		if(chSum[i] == '0'){
			zer++;
		}else if(chSum[i] == '1'){
			one++;
		}else if(chSum[i] == '2'){
			two++;
		}else if(chSum[i] == '3'){
			thr++;
		}else if(chSum[i] == '4'){
			four++;
		}else if(chSum[i] == '5'){
			fiv++;
		}else if(chSum[i] == '6'){
			six++;
		}else if(chSum[i] == '7'){
			sev++;
		}else if(chSum[i] == '8'){
			eig++;
		}else if(chSum[i] == '9'){
			nin++;
		}
	}
	
	printf("%d\n", zer);
	printf("%d\n", one);
	printf("%d\n", two);
	printf("%d\n", thr);
	printf("%d\n", four);
	printf("%d\n", fiv);
	printf("%d\n", six);
	printf("%d\n", sev);
	printf("%d\n", eig);
	printf("%d\n", nin);
	
	return 0;
}
