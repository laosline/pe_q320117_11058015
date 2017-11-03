#include <stdio.h>
void imprimir(int m[3][3])
{
	int i, j;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}
void transposta(int m[3][3])
{
	int i, j, mT[3][3];
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			mT[j][i]=m[i][j];
		}
	}
	imprimir(mT);
}
void ler_matriz(int m[3][3])
{
	int i, j;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d ", &m[i][j]);
		}
	}
	printf("\n");
}
int main(void)
{
	int m[3][3];
	
	ler_matriz(m);
	
	transposta(m);

	return 0;
}