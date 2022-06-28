#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TF 2

int main(){
	int i,vetIdade[10], maior=0,pos=0,j=1;
	char vetNome[10][30];
//	printf("Quantas pessoas voce vai digitar?");
//	scanf("%d",&TF);
	for(i=0; i<TF; i++){
		printf("Dados %d a Pessoa:\n",j++);
		printf("Nome: \n");
		fflush(stdin);
		scanf("%s",&vetNome[i]);
		printf("Idade: \n");
		scanf("%d",&vetIdade[i]);
	}
	for(i=0; i<TF; i++){
		if(vetIdade[i]>maior){
			maior = vetIdade[i];
			pos = i;
		}	
	}
	printf("PESSOA MAIS VELHA: %s",vetNome[pos]);

	
	
	
	return 0;
}
