#include <stdio.h>
struct tempo{
	int m;
	int s;
	int d;
};
int dif (int t1, int t2)
{
	return t2-t1;
}
void main(){
	struct tempo t1, t2;
	
	scanf("%dm %ds %d", &(t1.m), &(t1.s), &(t1.d));
	scanf("%dm %ds %d", &(t2.m), &(t2.s), &(t2.d));
	
	printf("%dm %ds %d\n", dif(t1.m,t2.m), dif(t1.s,t2.s), dif(t1.d,t2.d));
}