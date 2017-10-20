#include <stdio.h>
#include <stdlib.h>
int calc(int i)
{
	if (i%2==0 || i%3==0) return 0;
	return 1;
}	
int preencha(int * primo, int N)
{	
	int i, soma=0;
	primo = malloc(sizeof(char)*(N));
	
	for(i=0; i<N; i++){
		primo[i]=calc(i);
		soma+=primo[i];
	}
	return soma;
}
int main(){
	int * primo;
	int N;

	scanf("%d", &N);

	printf("%d\n", preencha(primo, N));

	free(primo);
	return 0;
}

