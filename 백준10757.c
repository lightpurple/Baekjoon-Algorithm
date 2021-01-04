#include <stdio.h>
#include <string.h>
#define MAX(a,b) a<=b ? b : a
#define MIN(a,b) a<=b ? a : b

char *makeStrrev (char *str)
{
    int i,j,num,tmp;
    num = strlen(str);
    if (0 == num)
        return 0;     
 
    j = num-1;         
    num = num/2;      
    
    for(i=0; i<num; i++,j--)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
    return str;
}

int main(){
	char a[10002]={0,}, b[10002]={0,};
	int i,len,min,sum,result[10003]={0,};
	scanf("%s %s", a, b);
	len = MAX(strlen(a), strlen(b));
	min = MIN(strlen(a), strlen(b));
	makeStrrev(a), makeStrrev(b);
	
	for(i=0; i<min; i++){
		sum = result[i] + a[i] + b[i] - 96;
		result[i] = sum%10;
		result[i+1] = sum/10;
	}
	
	if(strlen(a) == min)
		for(i=min; i<len; i++){
			sum = result[i] + b[i] - 48;
			result[i] = sum%10;
			result[i+1] = sum/10;
		}
	else
		for(i=min; i<len; i++){
			sum = result[i] + a[i] - 48;
			result[i] = sum%10;
			result[i+1] = sum/10;
		}
	
	if(result[len] == 0)
		for(i=len-1; i>=0; i--)
			printf("%d", result[i]);
	else
		for(i=len; i>=0; i--)	
			printf("%d", result[i]);	
	return 0;
}
