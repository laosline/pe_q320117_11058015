#include <stdio.h>

double main(){
	
	double temperatura, conversao;
	int opcao;
	
	printf("Digite a temperatura:");
	scanf("%lf", &temperatura);

	printf("Digite 1 se a temperatura for em Celsius ou 2 se for em Kelvin: ");
	scanf("%d", &opcao);
	
	if (opcao == 1) {
			
		conversao=temperatura+273.15;
		printf("A temperatura em Kelvin e: %.2lf", conversao);

	} else if (opcao == 2) {
		conversao=temperatura-273.15;
		printf("A temperatura em Celsius e: %.2lf", conversao);
	}
	
}