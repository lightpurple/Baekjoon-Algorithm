#include <stdio.h>

int main(){
	int up,down,height,day=0;
	
	scanf("%d %d %d", &up, &down, &height);
	
	height -= up;
	if(height%(up-down)!=0){
		day = height/(up-down)+1;	
	}else{
		day = height/(up-down);
	}
	printf("%d", day+1);
	return 0;
}
