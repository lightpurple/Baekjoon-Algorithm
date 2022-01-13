#include <stdio.h>
#include <string.h>
static int arr[2000001] = {0,};
static int index=0, front=0;

void Queue(char *od){
	if(strcmp(od,"push") == 0){
		scanf("%d", &arr[index]);
		index++;
	}else if(strcmp(od,"pop") == 0){
		if(front == index){
			printf("-1\n");
		}else{
		printf("%d\n", arr[front]);
		arr[front]=0;
		front++;
		}
	}else if(strcmp(od,"size") == 0){
		printf("%d\n", index-front);
	}else if(strcmp(od,"empty") == 0){
		if(index == front)
			printf("1\n");
		else
			printf("0\n");
	}else if(strcmp(od,"front") == 0){
		if(front == index)
			printf("-1\n");
		else
			printf("%d\n", arr[front]);
	}else if(strcmp(od,"back") == 0){
		if(front == index)
			printf("-1\n");
		else
			printf("%d\n", arr[index-1]);		
	}else{
		return;
	}
}

int main(){
	int N,i;
	char order[10];
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		scanf("%s", order);
		Queue(order);
	}
	return 0;
}
