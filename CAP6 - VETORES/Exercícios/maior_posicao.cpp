#include<stdio.h>
#include<stdlib.h>

int main(){
	int TF,vet[TF],i=0,maior=0,pos;
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d",&TF);
	while(i<TF){
		printf("Digite um numero\n");
		scanf("%d",&vet[i]);
		if(vet[i]>maior){
			maior = vet[i];
			pos = i;
		}
		i++;
	}
	printf("MAIOR VALOR = %d\n",maior);
	printf("POSICAO DO MAIOR VALOR = %d\n", pos);
	return 0;
}
