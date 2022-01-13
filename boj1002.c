#include <stdio.h>
#include <math.h>
#define findBig(a,b) a>b ? a : b
#define findSm(a,b) a>b ? b : a

int main(){
	int i,x1,y1,r1,x2,y2,r2,T,big,small;
	double dist;
	scanf("%d", &T);
	
	for(i=0; i<T; i++){
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		dist = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		
		if(dist == r1+r2){
			printf("1\n");
		}else if(dist > r1+r2){
			printf("0\n");
		}else{
			big = findBig(r1,r2);
			small = findSm(r1,r2);
			if(big < dist || big == dist){
				printf("2\n");
			}else{
				if(big > dist + small){
					printf("0\n");
				}else if(big == dist + small){
					if(x1 == x2 && y1 == y2)
						printf("-1\n");
					else
						printf("1\n");
				}else{
					printf("2\n");
				}
			}
		}
	}
	return 0;
}
