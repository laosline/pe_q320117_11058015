#include <stdio.h>
int  mdc(int m, int n)
{
	if (!m) return n;
	if (!n) return m;
	return mdc(n,(m%n));
}
int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d\n", mdc(m,n));
}
	