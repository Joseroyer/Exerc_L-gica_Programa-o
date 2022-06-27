#include<stdio.h>
#include<stdlib.h>

int main(){
	int TF, i, vet[TF];
	printf("Quantos numero voce vai digitar? ");
	scanf("%d",&TF);
	if(TF > 0 && TF < 10)
	{
		for(i=0; i<TF; i++){
			printf("Digite um numero: \n");
			scanf("%d",&vet[i]);
		}
		printf("NUMERO NEGATIVOS: \n");
		for(i=0; i<TF; i++){
			if(vet[i]<0)
				printf("%d \n", vet[i]);	
		}
	}else
		printf("VALOR INVALIDO!");		
	return 0;
}
