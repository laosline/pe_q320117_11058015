#include <stdio.h>

int main (){

	int valor, resto;
	printf("Insira um numero: ");
	scanf("%d", &valor);
	
	resto=valor%2;

	if (resto == 0){
		printf("O numero inserido e par\n");
	} else {
		printf("O numero inserido e impar\n");
	}

	return 0;

}