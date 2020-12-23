#include <stdio.h>
#include <math.h>

struct point{
	int x,y;
};

struct sqr{
	struct point p1,p2,p3;
};

int cmp(int a, int b, int c){
	int dif;
	dif = a != b ?	(a != c ? a : b) : c;
	return dif;
}

int main(){
	int i;
	struct sqr m;
	scanf("%d %d", &m.p1.x,&m.p1.y);
	scanf("%d %d", &m.p2.x,&m.p2.y);
	scanf("%d %d", &m.p3.x,&m.p3.y);
	
	printf("%d %d", cmp(m.p1.x,m.p2.x,m.p3.x),cmp(m.p1.y,m.p2.y,m.p3.y));
	return 0;
}
