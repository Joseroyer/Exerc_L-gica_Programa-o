#include<stdio.h>
#include<stdlib.h>
#define TF 4

int main(){
	int cont=0,i;
	float vet[TF],media,soma=0;
//	printf("Quantos numero voce vai digitar ");
//	scanf("%d",&TF);
	for(i=0; i<TF; i++)
	{
	 printf("Digite um numero: \n");
	 scanf("%f",&vet[i]);
	 soma = soma + vet[i];
	 cont++;
	}
	media = soma / cont;
	for(i=0; i<TF; i++){
		printf("-----------\n");
	 	printf("VALORES = %.1f\n",vet[i]);
	}
	printf("-----------\n");
 	printf("SOMA = %.2f\n",soma);
 	printf("-----------\n");
 	printf("MEDIA = %.2f\n",media);
	return 0;
}
