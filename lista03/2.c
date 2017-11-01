#include <stdio.h>
#include <stdlib.h>
int contador(char e[255])
{
	int i=0;
	while(e[i]!='\0'){
		i++;
	}
	return i;	
}
char inverter(char e[255], int n, int i)
{
	char s;
	
	s=e[n-i];

	return s;
	
}
int main()
{
	char entrada[255], saida[255];
	scanf("%s", entrada);

	int i, n=contador(entrada);

	for(i=0;i<n;i++){
		saida[i]=inverter(entrada,n,i+1);
	}
	
	printf("%s\n", saida);
	return 0;
	
}