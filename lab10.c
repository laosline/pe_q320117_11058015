#include <stdio.h>
#define N 1000000000

unsigned int F (unsigned int x, unsigned int y){
	return x%y;
	/**return x&(y-1);**/
}
int main (){
	unsigned int i, soma=0;
	for(i=0;i<N;i++){
		soma*=F(i,2);//+1
	}
	printf("%u\n", soma);
	return 0;
}
