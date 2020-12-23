#include <stdio.h>
#include <string.h>

int top = -1;

void stack(char order[], int arr[]){
	int i,tmp,count=0;
	
	if(!strcmp(order,"push")){
		scanf("%d", &tmp);
		top++;
		arr[top] = tmp;
	}else if(!strcmp(order,"pop")){
		if(arr[0] == 0){
			printf("%d\n", -1);
		}else{
			printf("%d\n", arr[top]);
			arr[top] = 0;
			top--;
		}
	}else if(!strcmp(order,"size")){
		if(top >= 0){
			printf("%d\n", top+1);
		}else{
			printf("%d\n", 0);
		}
	}else if(!strcmp(order,"empty")){
		if(arr[0] == 0){
			printf("%d\n", 1);
		}else{
			printf("%d\n", 0);
		}
	}else if(!strcmp(order,"top")){
		if(top == -1){
			printf("%d\n", -1);
		}else
			printf("%d\n", arr[top]);
	}
}

int main(){
	int N,i;
	char order[10];
	int arr[10001]={0,};
	
	scanf("%d", &N);
	getchar();
	for(i=0; i<N; i++){
		scanf("%s", order);
		stack(order,arr);
	}	
	return 0;
}
