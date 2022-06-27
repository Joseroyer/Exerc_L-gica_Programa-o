#include<stdio.h>
#include<stdlib.h>

int main(){
	int TF,vet[TF],i=0,par=0;
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d",&TF);
	while(i<TF){
		printf("Digite um numero\n");
		scanf("%d",&vet[i]);
		if(vet[i]%2==0)
			par++;
		i++;
	}
	printf("NUMERO PARES: \n");
	for(i=0; i<TF; i++)
	{
		if(vet[i]%2==0)
			printf("%d \t",vet[i]);
	}
	printf("\nQUANTIDADE DE PARES  = %d",par);
	
	
	return 0;
}
