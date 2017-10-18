#include <stdio.h>
int potencia(int x, int y)
{
	static int res=1;
	if (y==0) return res;
	res*=x;
	return potencia(x,y-1);
	
}
main(){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", potencia(x,y));
}