#include <stdio.h>

double volume (double largura, double compr, double altura)
{
	return largura*compr*altura;
}

double main(){
	double largura, compr, altura;
	scanf("%lf %lf %lf", &largura, &compr, &altura);
	printf("%.2lf\n", volume(largura,compr,altura));
}