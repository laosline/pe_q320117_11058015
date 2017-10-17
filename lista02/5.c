#include <stdio.h>
	
int fatorial(int n)
{
	int fat=1;
	if (n<=1) return 1;
	while (n>1){
		fat*=n;
		n--;
	} return fat;
}
int coeficiente(int n, int k)
{
	return fatorial(n)/(fatorial(k)*fatorial(n-k));
}
int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d\n", coeficiente(n,k));
}