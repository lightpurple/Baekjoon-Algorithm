#include <stdio.h>

int arr[100002] = {0,};
static int index=1;

void change(int a,int b){
	int tmp;
	tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
}

void min_Heap(int parant){
	int child = parant*2;
	
	if(parant * 2 >= index)
		return;
	
	if(child >= index)
		return;
	
	if(arr[child] > arr[child+1] && arr[child+1] != 0)	
		child++;
		
	if(arr[parant] > arr[child])
		change(parant,child);
	
	min_Heap(child);
}

void min_Heap_Invers(int parant){
	int child = parant*2;
	
	if(parant < 1)
		return;
	
	if(child >= index)
		return;
	
	if(arr[child] > arr[child+1] && arr[child+1] != 0)	
		child++;
		
	if(arr[parant] > arr[child])
		change(parant,child);
	
	min_Heap_Invers(parant/2);
}

void addNum(int num){
	if(num==0){
		if(index == 1){
			printf("0\n");
		}else{
			printf("%d\n", arr[1]);
			arr[1] = 0;
			change(1,index-1);
			index--;
			min_Heap(1);
		}
	}else{
		arr[index++] = num;
		min_Heap_Invers((index-1)/2);
	}
}

int main(){
	int N,order,i;
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		scanf("%d", &order);
		addNum(order);
	}
	return 0;
}
