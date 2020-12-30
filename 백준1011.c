#include <stdio.h>

int min_Trans(int d){
	int i=1, j, count=0;
	
	while(1){
		for (j=0; j<2; j++){
			d -= i;
			count++;
			if(d <= 0){
				return count;
			}
		}
		i++;		
	}
}

int main(){
	int T, x, y, i;
	scanf("%d", &T);
	
	for(i=0; i<T; i++){
		scanf("%d %d", &x, &y);
		printf("%d\n", min_Trans(y-x));
	}
	return 0;
}
