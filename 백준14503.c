#include <stdio.h>
#include <stdlib.h>

void clean(int **,int *,int*,int,int);

int main(){
	int N,M,i,j,r,c,d,count=0;
	scanf("%d %d", &N, &M);
	scanf("%d %d %d", &r, &c, &d);
	
	int **arr = (int **)malloc(sizeof(int *) * N);
	for(i=0; i<N; i++)
		arr[i] = (int *)malloc(sizeof(int) * M);
	
	for(i=0; i<N; i++)
		for(j=0; j<M; j++)
			scanf("%d", &arr[i][j]);
	
	int *dir = &d,*cnt = &count;
	
	clean(arr,dir,cnt,r,c);
	
	printf("%d", count);/*
	puts("");
	for(i=0; i<N; i++,puts(""))
		for(j=0; j<M; j++)
			printf("%d ", arr[i][j]);
	*/
	for(i=0; i<N; i++)
		free(arr[i]);
	free(arr);
	return 0;
}

void clean(int **arr, int *dir, int *cnt, int y, int x){
	
	if(arr[y+1][x] != 0 && arr[y-1][x] != 0 && arr[y][x+1] != 0 && arr[y][x-1] != 0){
		if(*dir == 0){
			if(arr[y][x] == 0){
				arr[y][x] = 2;
				(*cnt)++;	
			}
			
			if(arr[y+1][x] != 1){
				clean(arr,dir,cnt,y+1,x);
			}else{
				return;
			}
		}else if(*dir == 1){
			if(arr[y][x] == 0){
				arr[y][x] = 2;
				(*cnt)++;	
			}
			
			if(arr[y][x-1] != 1){
				clean(arr,dir,cnt,y,x-1);
			}else{
				return;
			}
		}else if(*dir == 2){
			if(arr[y][x] == 0){
				arr[y][x] = 2;
				(*cnt)++;	
			}
			
			if(arr[y-1][x] != 1){
				clean(arr,dir,cnt,y-1,x);
			}else{
				return;
			}
		}else if(*dir == 3){
			if(arr[y][x] == 0){
				arr[y][x] = 2;
				(*cnt)++;	
			}
			
			if(arr[y][x+1] != 1){
				clean(arr,dir,cnt,y,x+1);
			}else{
				return;
			}
		}
	}else{
		if(*dir == 0){
			*dir = 3;
			if(arr[y][x-1] == 0){
				if(arr[y][x] == 0)
					(*cnt)++;
				arr[y][x] = 2;
				clean(arr,dir,cnt,y,x-1);
			}else{
				clean(arr,dir,cnt,y,x);
			}
		}else if(*dir == 1){
			*dir = 0;
			if(arr[y-1][x] == 0){
				if(arr[y][x] == 0)
					(*cnt)++;
				arr[y][x] = 2;
				clean(arr,dir,cnt,y-1,x);
			}else{
				clean(arr,dir,cnt,y,x);
			}
		}else if(*dir == 2){
			*dir = 1;
			if(arr[y][x+1] == 0){
				if(arr[y][x] == 0)
					(*cnt)++;
				arr[y][x] = 2;
				clean(arr,dir,cnt,y,x+1);
			}else{
				clean(arr,dir,cnt,y,x);
			}
		}else if(*dir == 3){
			*dir = 2;
			if(arr[y+1][x] == 0){
				if(arr[y][x] == 0)
					(*cnt)++;
				arr[y][x] = 2;
				clean(arr,dir,cnt,y+1,x);
			}else{
				clean(arr,dir,cnt,y,x);
			}
		}
	}
} 
