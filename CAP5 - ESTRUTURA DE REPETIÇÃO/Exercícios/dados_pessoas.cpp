#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TF 10

int main(){
	int N,i,j=1,contH=0,contM=0;
	char vetGen[N][1];
	float vetAltura[TF],media,soma=0,maior = 0, menor = 99999;
	printf("Quantos pessoas serao digitados? ");
	scanf("%d",&N);
	for(i=0; i<N; i++)
	{
		printf("Altura da %da pessoa\n",j);
		scanf("%f",&vetAltura[i]);
		printf("Genero da %da pessoa\n",j++);
		fflush(stdin);
		scanf("%c",&vetGen[i]);
	}
	for(i=0; i<N; i++){
		if(strcmp(vetGen[i],"M")==0)
			contH++;
		else if(strcmp(vetGen[i],"F")==0){
			contM++;
			soma = soma + vetAltura[i];
		}
		if(vetAltura[i] > maior)
			maior = vetAltura[i];
		if(vetAltura[i] < menor)
			menor = vetAltura[i];
	}
	media = float (soma / contM);
	printf("Menor altura = %.2f\n",menor);
	printf("Maior altura = %.2f\n",maior);
	printf("Media das alturas das mulheres = %.2f\n",media);
	printf("Numero de homens = %d",contH);
	
	return 0;
}
