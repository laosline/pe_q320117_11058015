#include <stdio.h>

int teste ( int n)
{
	int parcial;
	parcial=n%2;
	if (parcial==0) return 0;
	if (parcial>0) return 1;
}

int main (){
	int n, x;
	printf("Digite um valor inteiro: \n");
	scanf("%d", &n);
	
	x=teste(n);
	printf("%d \n", x);
}