#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

void aleatorio (int v[SIZE])
{
	int i;
	srand((unsigned)time(NULL));
	for(i=0;i<SIZE;i++){
		v[i]=rand();
	}
}
void ascendente (int v[SIZE])
{
	int i;
	v[0]=0;
	for(i=1;i<SIZE;i++){
		v[i]=v[i-1]+1;
	}
}
void decrescente (int v[SIZE])
{
	int i;
	v[0]=SIZE;
	for(i=1;i<SIZE;i++){
		v[i]=v[i-1]-1;
	}
}
void ordena (int v[SIZE])
{
	int i, j, aux;
	
	//ordenaçao InsertionSort//	
	for(i=1; i<SIZE; i++){
		for (j=i; j>0; j--){
			while (v[j-1]>v[j]){
				aux=v[j-1];
				v[j-1]=v[j];
				v[j]=aux;
			}
		}
	}
}
int main(){
	int v[SIZE];
	decrescente(v);
	ordena(v);
	printf("%d\n", v[2]);
	return 0;
}
