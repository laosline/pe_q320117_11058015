#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;
	
ulint f1(ulint x)
{
	int r;
	static int s=0;
	r=x%2;
	s+=r;
	if(x/2>0) return f1(x/2);
	return s;
}
	
ulint f2(ulint x)
{
	static int s=0;
	s+=x&1;
	if(x>>1>0) return f2(x>>1);
	return s;
}

int main(void){
	
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma=0;
	
	tempo_init=clock();
	for(int i=0; i<BIGNUM; i++){
		soma+=f1(i);
	}
	tempo_fim=clock();
	tempo_gasto=(double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
	
	tempo_init=clock();
	for(int i=0; i<BIGNUM; i++){
		soma+=f2(i);
	}
	tempo_fim=clock();
	tempo_gasto=(double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

	return 0;
}
	
	
	