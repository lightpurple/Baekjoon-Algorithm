#include <stdio.h>
#include <string.h>

void queue(int *arr, char *order, int *first, int *last){
	if(strcmp(order,"push")==0){
		int tmp;
		scanf("%d\n", &tmp);
		arr[*last] = tmp;
		(*last)++;
		if(*last > 100000)
			*last = 0;
	}else if(strcmp(order, "pop") == 0){
		if(*first == *last){
			printf("-1\n");
			return;
		}else{
			printf("%d\n", arr[*first]);
			arr[*first] = 0;
			(*first)++;
			if(*first > 100000)
				*first = 0;
		}
	}else if(strcmp(order, "size") == 0){
		if(*last >= *first){
			int size = *last - *first;
			printf("%d\n", size);
		}else{
			int size = *last + 100000 - *first;
			printf("%d\n",size);
		}
	}else if(strcmp(order, "empty") == 0){
		if(*first == *last)
			printf("1\n");
		else
			printf("0\n");
	}else if(strcmp(order, "front") == 0){
		if(*first == *last)
			printf("-1\n");
		else
			printf("%d\n", arr[*first]);
	}else if(strcmp(order, "back") == 0){
		if(*first == *last)
			printf("-1\n");
		else
			printf("%d\n", arr[*last-1]);
	}

}

int main(){
	int i,N,arr[100001] = {0,};
	char order[10];
	int first = 0, last = 0;
	
	scanf("%d", &N);
	getchar();
	
	for(i=0; i<N; i++){
		int tmp;
		scanf("%s", order);
		queue(arr, order, &first, &last);
	}
	return 0;
}

