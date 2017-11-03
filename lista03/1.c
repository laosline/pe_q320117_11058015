#include <stdio.h>
int contador(char e[255], int i, int c)
{
	if (e[i]=='a') return contador(e,i+1,c+1);	
	if (e[i]=='e') return contador(e,i+1,c+1);	
	if (e[i]=='i') return contador(e,i+1,c+1);	
	if (e[i]=='o') return contador(e,i+1,c+1);	
	if (e[i]=='u') return contador(e,i+1,c+1);
	if (e[i]!='\0') return contador(e,i+1,c);
	return c;
}
int main()
{
	char entrada[255];
	scanf("%s", entrada);
	
	printf("%d\n", contador(entrada,0,0));
	
	return 0;
}