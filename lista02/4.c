#include <stdio.h>

float soma(float x, float y)
{
	return x+y;
}
float subtracao(float x, float y)
{
	return x-y;
}
float multiplicacao(float x, float y)
{
	return x*y;
}
float divisao(float x, float y)
{
	return x/y;
}
float potenciacao(float x, float y)
{	
	if (x==0){
		return 1;
	} else if (x==1){
		return x;
	} else {
		float z;
		z=x;
		while (y!=1){
			x*=z;
			y--;
		}			
	} 	return x;
}
float operacao(int n, float x, float y)
{
	if (n==1) return soma(x,y);
	if (n==2) return subtracao(x,y);
	if (n==3) return multiplicacao(x,y);
	if (n==4) return divisao(x,y);
	if (n==5) return potenciacao(x,y);
}
float main(){
	float x, y;
	int n;
	scanf("%d %f %f", &n, &x, &y);
	printf("%.0f\n", operacao(n,x,y));
}