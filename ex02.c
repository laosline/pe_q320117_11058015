#include <stdio.h>

int D (int n)
{
	if (n<10){
		return 1;
	} else {
		return 1+D(n/10);
	}
}

int main(){
	int n;
	printf("Digite um número: ");
	scanf("%d", &n);
	
	printf("A quantidade de digitos é: %d \n", D(n));
}
