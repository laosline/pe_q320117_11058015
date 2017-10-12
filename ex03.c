#include <stdio.h>

int SomaD (int n)
{
	int s=0;
	if (n<10){
		return n;
	} else {
		s+=(n%10);
		return s+SomaD(n/10);
	}
}

int main(){
	int n;
	printf("Digite um número: ");
	scanf("%d", &n);
	
	printf("A soma dos digitos é: %d \n", SomaD(n));
}
