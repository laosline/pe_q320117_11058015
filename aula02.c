#include <stdio.h>
#include <math.h>

int fatorial(int n)
{
   int fat = 1;
   if (n <= 1) return 1;

   while (n > 1) {
       fat = fat * n;
       --n;
   }

   return fat;
}
double somatorio(int n1, int n2, int k)
{
	double s ;
	s=((n1)*(1103+26390*k))/(pow(n2,4)*pow(396,(4*k))); 
	return s;
}
double inversao(double soma)
{
	double pi, pinv;
	pinv=soma*(2*sqrt(2))/9801;
	pi=1/pinv;
	return pi;
}
double processo(int k)
{
	double p, n1, n2;
	while ( k <= 8){
		n1=fatorial(4*k);
		n2=fatorial(k);
		p+=somatorio(n1,n2,k);
		k+=1;
	}
	return p;
}
double main(){
	double n1, n2, soma, pinv, pi;
	int k;
	soma=0;
	k=0;
	soma=processo(k);
	pi=inversao(soma);
	printf("%lf \n", pi);	
}

	
	
				
