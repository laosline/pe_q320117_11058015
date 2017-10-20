#include <stdio.h>
#include <stdlib.h>
int len (char * s)
{
	int i;
	while (s[i]!='\0') i++;
	return i;
}
char * concat(char * s1, char * s2)
{
	int l1, l2, i;
	char * s3;
	
	l1=len(s1);
	l2=len(s2);
	s3= malloc(sizeof(char)*(l1+l2));
	
	for(i=0;i<l1;i++){
		s3[i] = s1[i];
	}
	for(i=0;i<l2;i++){
		s3[l1+i] = s2[i];
	}
	return s3;
	
}
int main(){
	int i;
        char s1[255];
        char s2[255];
        char * s3;

	scanf("%s", s1);
	scanf("%s", s2);
	
	s3 = concat(s1, s2);
        printf("%s\n", s3);
	free(s3);
	return 0;
}
