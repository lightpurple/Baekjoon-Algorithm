#include <stdio.h>

struct dungchi{
	int w,h,num;
};

int main(){
	int N,i,j,tmp;
	
	scanf("%d", &N);
	
	struct dungchi *person = (struct dungchi*)malloc(sizeof(struct dungchi) * N);
	
	for(i=0; i<N; i++){
		scanf("%d %d",&person[i].w,&person[i].h);
		person[i].num = 0;
	}
	
	for(i=0; i<N-1; i++){
		for(j=i+1; j<N; j++){
			if(person[i].h > person[j].h && person[i].w > person[j].w){
				person[j].num++;
			}else if(person[i].h < person[j].h && person[i].w < person[j].w){
				person[i].num++;
			}
		}
	}
	
	for(i=0; i<N; i++)
		printf("%d ", person[i].num+1);
	
	free(person);
	return 0;
}
