#include <stdio.h>

int main(){
	int i, u, a, b, c;

	printf("Digite um valor inteiro: ");
	scanf("%d", &i);
	u=1;
	a=0;
	b=a+1;
	
	printf("%d ", a);

	if (i == 2) {
		
		printf("%d ", b);
	
	} else if (i >= 3) {
			
		printf("%d ", b);

		while (u < i) {		
		
			c=a+b;
			a=b;
			b=c;
			u+=1;
			
			printf("%d ", c);
		}

	}
}