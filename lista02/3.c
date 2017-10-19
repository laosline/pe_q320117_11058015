#include <stdio.h>
#include <math.h>

double PI(double a, double b, double t)
{
	double p;
	p=pow((a+b),2)/(4*t);
	return p;
}

double convergencia(double a, double b, double t, double p)
{
	double a1;
	int i;
	for(i=0; i<10; i++){
		a1=(a+b)/2;
		b=sqrt(a*b);
		t=t-p*pow((a-a1),2);
		p=2*p;
		a=a1;
	}
	return PI(a,b,t);
}

double main(){
	double a, b, t, p;
	a=1;
	b=1/sqrt(2);
	t=0.25;
	p=1;
	printf("%.20lf", convergencia(a,b,t,p));
	
}