#include <stdio.h>

int main(){
	int n,i,j,k=1;
	int price[100001]={0,}, dist[100001] = {0,};
	long long money = 0,curry;
	
	scanf("%d", &n);
	
	for(i=1; i<=n-1; i++)
		scanf("%d", &dist[i]);
	for(i=1; i<=n; i++)
		scanf("%d", &price[i]);
		
	i=1,j=1;
	
	while(1){
		curry=0;
		while(1){
			if(j==n)
				break;
			if(price[i] > price[j])
				break;
			j++;
		}
		for(k=i;k<=j-1;k++)
			curry += dist[k];
		money += (long long)price[i] * curry;
		if(j==n)
			break;
		i = j;
		j++;
	}
	printf("%lld", money);
	return 0;
}
