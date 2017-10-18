#include <stdio.h>
double desconto(int f, int h, double s)
{
	return f*(s/20);
}
double acrescimo(int f, int h, double s)
{
	double a;
	if (h<=40){
		a=((s/160)+40)*h;
	} else {
		a=((s/160)+40)*40;
	}
	return a;
}
double contagem(int f, int h, double s)
{
	double res;
	res=s+acrescimo(f,h,s)-desconto(f,h,s);
	return res;
}

double salario (int cargo, int f, int h)
{
	switch(cargo)
	{
		case 1 :
			return contagem(f,h,10000);
			break;
		case 2 :
			return contagem(f,h,8000);
			break;
		case 3 :
			return contagem(f,h,5000);
			break;
		case 4 :
			return contagem(f,h,3000);
			break;
		case 5 :
			return contagem(f,h,2000);
			break;
	}
}
	
main(){
	int cargo, faltas, horas_extras;
	scanf("%d %d %d", &cargo, &faltas, &horas_extras);
	printf("%.0lf\n", salario(cargo,faltas,horas_extras));
}
