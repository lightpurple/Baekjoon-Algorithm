#include <stdio.h>
#include <stdlib.h>

struct member{
	int age,num;
	char name[101];
};

int cmpStruct(const void *a, const void *b){
	struct member ia = *(struct member *)a;
	struct member ib = *(struct member *)b;
	
	if(ia.age < ib.age)
		return -1;
	else if(ia.age > ib.age)
		return 1;
	else{
		return ia.num - ib.num;
	}
	
}

int main(){
	int N,i;
	
	scanf("%d", &N);
	
	struct member *m = (struct member *)malloc(sizeof(struct member)*N);
	
	for(i=0; i<N; i++){
		scanf("%d %s", &m[i].age, &m[i].name);
		m[i].num = i;
	}
	
	qsort(m,N,sizeof(struct member),cmpStruct);
	
	for(i=0; i<N; i++){
		printf("%d %s\n", m[i].age, m[i].name);
	}
	return 0;
}
