#include <stdio.h>

int main(void){
	int num, i, j, index, count, sum;
	char oxarr[81];
	
	scanf("%d", &num);
	getchar();
	for(i=0; i<num; i++){
		j = 0;
		sum = 0;
		count = 1;
		
		do{
		scanf("%c", &oxarr[j]);
		j++;
		}while(oxarr[j-1] != '\n');
		index = j;
		
		for(j=0; j<index; j++){
			if(oxarr[j] == 'O'){
				sum += count;
				count ++;
			}else if(oxarr[j] == 'X'){
				count = 1;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
} 
