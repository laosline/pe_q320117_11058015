#include <stdio.h>
#include <stdlib.h>
int repete(int *v, int i, int t)
{
	int j;
	int c=0;
	for(j=0;j<t;j++){
		if(v[i]==v[j]) c++;
	}
	return c;		
}	
void contagem (int *v, int t)
{
	int i, aux;
	for(i=0;i<t;i++){
		aux=repete(v,i,t);
		printf("%d-%d ", v[i], aux);
	}
}

int main(){
	int *v, tamanho, i;

	scanf("%d\n", &tamanho);

	v=malloc(tamanho*sizeof(int));
	for(i=0;i<tamanho;i++){
		scanf("%d", &v[i]);
	}
	contagem(v,tamanho);

	free(v);
	return 0;
}