#include <stdio.h>

int main(){
	int x, y, i, z;
	i=1;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	
	printf("Digite o expoente inteiro ");
	scanf("%d", &y);
	
	z=x;

	while (i < y){
		
		z*=x;
		i+=1;
		
	}
	
	printf("O numero e: %d", z);
}