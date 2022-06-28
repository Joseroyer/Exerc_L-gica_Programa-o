#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TF 10
int main(){
	int N,i,j=1,pos;
	char vetNome[TF][30];
	float vetNota1[TF],vetNota2[TF], media;
	printf("Quantos alunos serao digitados? ");
	scanf("%d",&N);
	for(i=0; i<N; i++)
	{
		printf("Digite nome, primeira e segunda nota do %do aluno:\n",j++);
		scanf("%s",&vetNome[i]);
		scanf("%f",&vetNota1[i]);
		scanf("%f",&vetNota2[i]);	
	}
	printf("Alunos aprovados:\n");
	for(i=0; i<N; i++){
		media = (vetNota1[i] + vetNota2[i]) / 2;
		if( media >= 6.0)
			printf("%s\n",vetNome[i]);
	}
	return 0;
}
