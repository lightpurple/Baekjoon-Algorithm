#include <stdio.h>
#include <stdlib.h>

void setNum(int **arr, int n, int m){
	int x=-1,y=0,i=1;
	while(i<=n*m){
		while(arr[y][x+1]==0 && i<= n*m)
			arr[y][++x] = i++;
		while(arr[y+1][x]==0 && i<= n*m)
			arr[++y][x] = i++;
		while(x>0 && arr[y][x-1]==0 && i<= n*m)
			arr[y][--x] = i++;
		while(y>0 && arr[y-1][x]==0 && i<= n*m)
			arr[--y][x] = i++;
	}

}

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	int **arr = (int **)calloc(n+1,sizeof(int *));
	int i,j;
	for(i=0; i<=n; i++)
		arr[i] = (int*)calloc(m+1,sizeof(int));

	for(i=0; i<=n; i++){
		for(j=0; j<=m; j++){
			if(i==n)
				arr[i][j] = 1;
			if(j==m)
				arr[i][j] = 1;
		}
	}
	setNum(arr,n,m);

	for(i=0; i<n; i++,puts("")){
		for(j=0; j<m; j++)
			printf("%d ", arr[i][j]);
	}

	for(i=0; i<n; i++)
		free(arr[i]);
	free(arr);
	return 0;
}
