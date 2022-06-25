#include<stdio.h>
#include<stdlib.h>

int main(){
	int x,i,aux=0,number;
	printf("Quantos numero voce vai digitar? ");
	scanf("%d",&x);
	for(i=0; i<x; i++){
		printf("Digite um numero\n");
		scanf("%d",&number);
		if(number==0){
			printf("NULO\n");
		}else{
			if(number%2==0)
			{
				if(number>0)
					printf("Par Positivo\n");
				else
					printf("Par Negativo\n");
			}else{
				if(number>0)
					printf("Impar Positivo\n");
				else
					printf("Impar Negativo\n");
			}
		} 
	}
	return 0;
}
