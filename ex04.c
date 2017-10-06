#include <stdio.h>

int Primo (int n, int i)
{	
	static int parcial;
	parcial=n%(i-1);
	if (parcial==0 && i>1){
		return 0;
	} else {
		return Primo(n,(i-1));
	}	
}

int main(){
	int n, p;
	printf("Digite um número: ");
	scanf("%d", &n);
	
	p=Primo(n,n);
	
	if (p==0){
		printf("Não primo\n");
	} else {
		printf("É primo\n");
	}
}
