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
void swap (int *v, int i, int j)
{
	int aux;
		aux=v[i];
		v[i]=v[j];
		v[j]=v[i];
}
int partition(int *v, int low, int high)
{
	int pivot=v[high];
	int j, i=low;
	for(j=low;j<high;j++){
		if (v[j]<=pivot){
			swap(v,i,j);
			i++;
		}
	}
	swap(v,i,high);
	return i;
}	
	
void ordena (int *v, int low, int high)
{
	
	int p;
	
	if (low<high){
		p=partition(v,low,high);
		ordena(v,low,p-1);
		ordena(v,p+1,high);
	}
	
}
int main(){
	int *v=(int*)malloc(sizeof(int)*SIZE);
	
	decrescente(v);
	ordena(v,v[0],v[SIZE]);
	printf("%d\n", v[2]);
	
	free(v);
	return 0;
}
