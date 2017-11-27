#include <stdio.h>
#include <stdlib.h>

float M(float p1, float p2, float p3)
{	
	float media;
	media=(p1+p2+p3)/3;
	return media;
}
void main(){
		
	FILE * fa, * fb;
	int i=0; 
	
	struct lista
	{
		char nome[100];
		int RA;
		float p1;
		float p2;
		float p3;
		float media;
	};
	
	struct lista *alunos=(struct lista*)malloc(sizeof(struct lista)*50);

	fa=fopen("lista_alunos.txt", "r");
	fb=fopen("media_alunos.txt", "w");

	while (!feof(fa)){
		fscanf(fa,"%s %d %f %f %f", alunos[i].nome, &alunos[i].RA, 
		&alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
		alunos[i].media=M(alunos[i].p1,alunos[i].p2,alunos[i].p3);
		fprintf(fb,"%s %d %.2f %.2f %.2f %.2f\n", alunos[i].nome, alunos[i].RA, 
		alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media); 
		i++;
	}
		
	fclose(fa);
	free(alunos);
}