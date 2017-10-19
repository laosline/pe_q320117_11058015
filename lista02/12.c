#include <stdio.h>
unsigned int fat(int n)
{
	if (n==0) return 1;
	return n*fat(n-1);
}
int div(int x, int k)
{
	return fat(x)/(fat(k)*fat(x-k));	
}
main (){
	int x, k;
	scanf("%d %d", &x, &k);
	printf("%d\n", div(x,k));
}