#include <stdio.h>

int teste ( int n)
{
	int parcial;
	parcial=n%2;
	if (parcial==0) return 0;
	if (parcial>0) return 1;
}

int main (){
	int n;
	scanf("%d", &n);
	printf("%d\n", teste(n));
}