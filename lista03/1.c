#include <stdio.h>
int contador(char e[255])
{
	int i=0;
	while(e[i]!='\0'){
		i++;
	}
	return i;	
}
int main()
{
	char entrada[255];
	scanf("%s", entrada);
	
	printf("%d\n", contador(entrada));
	
	return 0;
}