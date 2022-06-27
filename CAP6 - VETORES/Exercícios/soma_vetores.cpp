#include<stdio.h>
#include<stdlib.h>
#define TF 6

int main(){
	int i,vetA[TF],vetB[TF],vetC[TF];
//	printf("Quantos numeros voce vai digitar? ");
//	scanf("%d",&TF);
	for(i=0; i<TF; i++){
		printf("Digite um numero do VETOR A: Posicao = %d \n",i);
		scanf("%d",&vetA[i]);
	}
	for(i=0; i<TF; i++){
		printf("Digite um numero do VETOR B: Posicao = %d\n",i);
		scanf("%d",&vetB[i]);
	}
	printf("VETOR RESULTANTE:\n");
	for(i=0; i<TF; i++){
		vetC[i] = vetA[i] + vetB[i];
		printf("%d\n",vetC[i]);
	}
	return 0;
}
