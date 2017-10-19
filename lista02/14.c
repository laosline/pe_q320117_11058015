#include <stdio.h>
int compare(int n, int m)
{
	if (n==m) return 1;
	return 0;
}
int inversao(int n)
{
	static int m=0;
	if (n==0) return m;
	m=m*10+n%10;
	return inversao(n/10);
}
main(){
	int n, m, l;
	scanf("%d", &n);
	m=inversao(n);
	l=compare(n,m);
	if (l==1){
		printf("sim\n");
	} else if (l==0) {
		printf("nao\n");
	}
}
	