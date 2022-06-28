#include<stdio.h>
#include<stdlib.h>
#define TF 4

int main(){
	int i,vet[TF],par=0;
	float media,soma=0;
//	printf("Quantos elementos vai ter o vetor? ");
//	scanf("%d",&TF);
	for(i=0; i<TF; i++){
		printf("Digite um numero\n");
		scanf("%d",&vet[i]);
		if(vet[i]%2==0)
		{
			soma = soma + vet[i];
			par++;
		}	
	}
	media = soma / par;
	if(par==0)
		printf("NENHUM NUMERO PAR");
	else
		printf("MEDIA DOS PARES = %.1f",media);
	return 0;
}
