#include <stdio.h>

double main(){
	
	double temperatura, conversao;
	int opcao;
	
	printf("Digite a temperatura:");
	scanf("%lf", &temperatura);

	printf("Digite 1 se a temperatura for em Celsius ou 2 se for em Fahrenheit: ");
	scanf("%d", &opcao);
	
	if (opcao == 1) {
			
		conversao=temperatura*1.8+32;
		printf("A temperatura em Fahrenheit e: %.1lf", conversao);

	} else if (opcao == 2) {
		conversao=(temperatura-32)/1.8;
		printf("A temperatura em Celsius e: %.1lf", conversao);
	}
	
}