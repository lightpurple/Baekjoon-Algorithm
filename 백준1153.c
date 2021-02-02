#include <stdio.h>
#define MAX 1000000

int sosu[MAX+1]={0,};

int main(){
    int i,j,n;
    for(i=2; i<=MAX; i++)
        sosu[i] = i;
    for(i=2; i<=MAX/2; i++)
        for(j=2; i*j<=MAX; j++)
            sosu[i*j] = 0;

    scanf("%d", &n);
    if(n<8)
        printf("-1");
    else{
        if(n%2 == 0){
            printf("2 2 ");
            n-=4;
            for(i=2; i<=MAX; i++){
                if(sosu[i] == 0)
                    continue;
                for(j=2; j<=MAX; j++){
                    if(sosu[j] == 0)
                        continue;
                    if(sosu[i] + sosu[j] == n){
                        printf("%d %d", sosu[i], sosu[j]);
                        goto EXIT;
                    }
                }
            }
        }else{
            printf("2 3 ");
            n -= 5;
            for(i=0; i<=MAX; i++)
                for(j=0; j<=MAX; j++)
                    if(sosu[i] + sosu[j] == n){
                        printf("%d %d", sosu[i], sosu[j]);
                        goto EXIT;
                    }
        }
    }
EXIT:

    return 0;
}
