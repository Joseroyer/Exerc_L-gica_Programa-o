#include<stdio.h>
#include<stdlib.h>

int main(){
	float salario, salario_new, aumento, porc;
	
	printf("Digite o salario da pessoa: ");
	scanf("%f",&salario);
	if(salario <= 1000.00){
		aumento  = salario * 0.20;
		salario_new = salario + aumento;
		porc = 20;
	}else{
		if(salario > 1000.00 && salario <= 3000.00){
			aumento = salario * 0.15;
			salario_new = salario + aumento ;
			porc = 15;
		}else{
			if(salario > 3000.00 && salario <= 8000.00){
				aumento = salario * 0.10;
				salario_new = salario + aumento;
				porc = 10;	
			}
			else{
				aumento = salario * 0.05;
				salario_new = salario +  aumento;
				porc = 5;
			}
		}
	}
	printf("Novo salario = R$ %.2f\n",salario_new);
	printf("Aumento = R$ %.2f\n",aumento);
	printf("Porcentagem = %.0f\n",porc);
	return 0;
}
