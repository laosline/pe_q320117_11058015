#include <stdio.h>

int main(){
	
	int x, y, i;
	y=1;
	i=1;
	
	printf("Insira um numero: ");
	scanf("%d", &x);
	
	while (i <= x) {
	
		y*=i;
		i+=1;

	}

	printf("O fatorial do numero e: %d", y);

}