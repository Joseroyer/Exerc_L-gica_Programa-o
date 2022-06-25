#include<stdio.h>
#include<stdlib.h>

int main(){
	int x,numero,contDentro=0,contFora=0,i;
	printf("Quantos numero voce vai digitar? ");
	scanf("%d",&x);
	for(i=0; i<x; i++){
		printf("Digite um numero: \n");
		scanf("%d",&numero);
		if(numero>=10 && numero <=20)
			contDentro++;
		else
			contFora++;
	}
	printf("%d DENTRO\n",contDentro);
	printf("%d FORA\n",contFora);
	return 0;
}
