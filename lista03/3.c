#include <stdio.h>
int soma(int v1[5], int v2[5], int i)
{
	int v3[5];
	v3[i] = v1[i]+v2[i];	
	return v3[i];
}
void ler_vetor(int v[5])
{
	int i;
	for(i=0;i<=4;i++){
		scanf("%d ", &v[i]);	
	}
	
}
void imprimir(int v1[5], int v2[5])
{
	int i;
	for(i=0;i<=4;i++){
		printf("%d ", soma(v1,v2,i));	
	}
}
int main(){
	int v1[5], v2[5];

	ler_vetor(v1);
	ler_vetor(v2);

	imprimir(v1,v2);
	
	return 0;
}