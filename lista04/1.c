#include <stdio.h>
#include <math.h>
struct vetor
{
	float x;
	float y;
	float z;
};
float qd(float p1, float p2)
{
	return (p1-p2)*(p1-p2);
}
float distancia(struct vetor p1, struct vetor p2)
{
	float d;
	d=sqrt(qd(p1.x,p2.x)+qd(p1.y,p2.y)+qd(p1.z,p2.z));
	return d;
}
void main(){
	struct vetor p1, p2;
	
	scanf("%f %f %f", &(p1.x), &(p1.y), &(p1.z));
	scanf("%f %f %f", &(p2.x), &(p2.y), &(p2.z));
	
	printf("%.2f\n", distancia(p1,p2));
}