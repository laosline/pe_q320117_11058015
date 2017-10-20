#include <stdio.h>
#include <math.h>

double delta (double a, double  b, double c)
{
	return (b*b)-4*a*c;
}
double raiz1 (double a, double b, double c)
{
	return (-b+sqrt(delta(a,b,c)))/2*a;
}
double raiz2 (double a, double b, double c)
{
	return (-b-sqrt(delta(a,b,c)))/2*a;
}
double main(){
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%.2lf %.2lf\n", raiz1(a,b,c), raiz2(a,b,c));
}