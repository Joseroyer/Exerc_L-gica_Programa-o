#include<stdio.h>
#include<stdlib.h>

int main(){
	int min;
	float val,consumo,base = 50.0;
	
	printf("Digite a quantidade de minutos: ");
	scanf("%d",&min);
	if(min>100){
		consumo = min - 100 ;
		val = (consumo * 2.00) + base ;
	}
	else
		val = base;
	printf("Valor a pagar: R$ %.2f",val);
	return 0;
}
