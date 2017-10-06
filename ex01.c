#include <stdio.h>

int somatoria (int n)
{
	if (n==1){
		return 1;
	} else {
		return n+somatoria(n-1);
	}
}

int main(){
	int n;
	printf("Digite um número: ");
	scanf("%d", &n);
	
	printf("A soma é: %d \n", somatoria(n));
}
