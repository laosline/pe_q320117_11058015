#include <stdio.h>



int main()
{

		int valor, opcao, r, aux, soma, i;


		r=1;
  
		i=0;
		soma=0;
  

	
		printf("Digite um valor decimal ou binario que sera convertido: ");
	
		scanf("%d", &valor);


		printf("Digite 1 para converter decimal para binario ou 2 para converter binário para decimal: ");
	
		scanf("%d", &opcao);

	

		if ( opcao == 1 ) {
		
			soma=1;
		
			if ( valor == 0 ) {
			
				printf("0");
		
			} 
			else if ( valor == 1 ) {

				printf("1");

			} else {

				while ( valor > 1 ) {
					r=valor%2;
		
					valor=valor/2;		
					soma=r+(soma*10);
				}
			
			printf("%d", soma);
		
			}

	
		} else if ( opcao == 2 ) {
		
		
		
			while ( valor > 1 ) {
		
				r=valor%10;
			
				valor=valor/10;
			
				(r*(2^i))+soma;
			
			
				i=i+1;
		
			}
		
	
			aux=soma+(valor*(2^i));
		
			printf("%d ", valor);
	
 			printf("O valor em decimal e: %d", aux);

		} else {
	
			printf("Opcao invalida");

		}

}

