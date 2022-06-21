#include<stdio.h>
#include<stdlib.h>

int main(){
	int qtd;
	float preco, dinheiro, result, val_final,troco;
	
	printf("Preco unitario do produto: ");
	scanf("%f",&preco);
	printf("Quantidade comprada: ");
	scanf("%d",&qtd);
	printf("Dinheiro recebido: ");
	scanf("%f",&dinheiro);
	val_final = preco * qtd;
	if(val_final <= dinheiro){
		troco = dinheiro - val_final ;
		printf("TROCO: R$ %.2f", troco);
	}else{
		troco = val_final - dinheiro;
		printf("DINHEIRO INSUFICIENTE, FALTAM R$ %.2f REAIS",troco);
	}
	return 0;
}
