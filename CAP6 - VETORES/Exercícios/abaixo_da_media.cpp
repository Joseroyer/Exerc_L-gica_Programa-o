#include<stdio.h>
#include<stdlib.h>
//#define TF 4

int main(){
	int TF,i;
	float vet[TF],media,soma;
	printf("Quantos elementos vai ter o vetor? ");
	scanf("%d",&TF);
	for(i=0; i<TF; i++){
		printf("Digite um numero: ");
		scanf("%f",&vet[i]);
		soma+=vet[i];
	}
	media = soma / TF;
	printf("MEDIA DO VETOR %.3f\n",media);
	printf("ELEMENTOS ABAIXO DA MEDIA:\n");
	for(i=0; i<TF; i++){
		if(vet[i] < media)
			printf("%.1f\n",vet[i]);
	}
	return 0;
}
