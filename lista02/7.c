#include <stdio.h>
#include <math.h>
int Binario(float valor)
{
	int r;
	int n;
	n=valor;
	static int i=0;
	static int aux=0;
	if (n==1) return aux+n*pow(2,i);
	r=n%10;
	aux+=r*pow(2,i);
	i++;
	return Binario(n/10);
}
int Decimal(float valor)
{
	int r;
	int n;
	n=valor;
	static int aux=1;
	if (n==0) return 0;
	if (n==1) return aux;
	r=n%2;
	aux=(10*aux)+r;
	n/=2;
	return Decimal(n);
}
float Kelvin(int saida, float valor)
{
	if(saida==1) return valor-273.15;
	if(saida==2) return valor-457.87;
	if(saida==3) return valor;
}
float Fahrenheit(int saida, float valor)
{
	if(saida==1) return (valor-32)/1.8;
	if(saida==2) return valor;
	if(saida==3) return valor+457.87;
}
float Celsius(int saida, float valor)
{
	if(saida==1) return valor;
	if(saida==2) return valor*1.8+32;
	if(saida==3) return valor+273.15;
}

int numerico(int e, int s, float v)
{
	if(e==1 && s==1) return v;
	if(e==1 && s==2) return Decimal(v);
	if(e==2 && s==1) return Binario(v);
	if(e==2 && s==2) return v;

}
float temperatura(int entrada, int saida, float valor)
{
	if(entrada==1) return Celsius(saida,valor);
	if(entrada==2) return Fahrenheit(saida,valor);
	if(entrada==3) return Kelvin(saida,valor);

}

float opcao(int n, int entrada, int saida, float valor)
{
	if(n==1) return temperatura(entrada,saida,valor);
	if(n==2) return numerico(entrada,saida,valor);
	return 0;
}
float main(){
	int n, entrada, saida;
	float valor;
	scanf("%d %d %d %f", &n, &entrada, &saida, &valor);
	if (n==1){
		switch (saida){
		case 1 :
			printf("%.2f C\n", opcao(n,entrada,saida,valor));
			break;
		case 2 :
			printf("%.2f F\n", opcao(n,entrada,saida,valor));
			break;
		case 3 :
			printf("%.2f K\n", opcao(n,entrada,saida,valor));
			break;
		}
	} else if (n==2) { 
		printf("%.0f\n", opcao(n,entrada,saida,valor));
	}
		
}