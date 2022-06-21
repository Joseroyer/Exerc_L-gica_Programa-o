#include<stdio.h>
#include<stdlib.h>

int main(){
	int codigo,qtd;
	float valor,preco;
	printf("Codigo do produto comprado: ");
	scanf("%d",&codigo);
	printf("Quantidade comprada: ");
	scanf("%d",&qtd);
	if(codigo == 1)
	{
		preco = 5.00;
	}else{
		if(codigo == 2){
			preco = 3.50;
		}else{
			if(codigo == 3){
				preco = 4.80;
			}else{
				if(codigo == 4){
					preco = 8.90;
				}
				else{
					preco = 7.32;
				}
			}
		}
	}
	valor = preco * qtd;
	printf("Valor a pagar: R$ %.2f",valor);
	
	return 0;
}
