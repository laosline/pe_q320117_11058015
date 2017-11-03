#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void *a, const void *b)
{
	return (*(int*)a-*(int*)b);
}
float mediana(int *v, int n)
{
	int i, med=0;
	for(i=0;i<n;i++){
		med+=v[i];
	}
	return med/n;
}
int main(){
	int *vetor, n, i;
	float med;
	scanf("%d\n", &n);
	vetor=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d", &vetor[i]);
	} 
	qsort(vetor,n,sizeof(int),cmpfunc);
	med=mediana(vetor,n);
	printf("%.2lf\n", med);
}