#include <stdio.h>
#include <math.h>
int opcao_1(int n)
{
	int r;
	static int aux=1;
	if (n==0) return 0;
	if (n==1) return aux;
	r=n%2;
	aux=(10*aux)+r;
	n/=2;
	return opcao_1(n);
}
int opcao_2(int n)
{
	int r;
	static int i=0;
	static int aux=0;
	if (n==1) return aux+n*pow(2,i);
	r=n%10;
	aux+=r*pow(2,i);
	i++;
	return opcao_2(n/10);
	
	
}
int conversao(int n, int opcao)
{
	if (opcao==1) return opcao_1(n);
	if (opcao==2) return opcao_2(n);
	return 0;
}
main(){
	int opcao, n;
	scanf("%d %d", &n, &opcao);
	printf("%d\n", conversao(n,opcao));
}