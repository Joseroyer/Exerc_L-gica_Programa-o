#include<stdio.h>
#include<stdlib.h>

int main(){
	char tipo;
	int i, TF,contCoelhos=0,contRatos=0,contSapos=0,total=0,qtd;
	float perC,perR,perS;
	printf("Quantos casos de teste serao digitados? ");
	scanf("%d",&TF);
	for(i=0; i<TF; i++){
		printf("Quantidade de cobais: \n");
		scanf("%d",&qtd);
		printf("Tipo de cobaia: \n");
		fflush(stdin);
		scanf("%c",&tipo);
		switch (tipo){
			case 'C': contCoelhos+=qtd;
				break;
			case 'R': contRatos+=qtd;
				break;
			case 'S': contSapos+=qtd;
				break;
		}
		total+=qtd;
	}
	perC = (float(contCoelhos)/total)*100;
	perR = (float(contRatos)/total)*100;
	perS = (float(contSapos)/total)*100;
	printf("RELATORIO FINAL: \n");
	printf("Total: %d cobais \n",total);
	printf("Total de coelhos: %d \n",contCoelhos);
	printf("Total de ratos: %d \n",contRatos);
	printf("Total de sapos: %d \n",contSapos);
	printf("Percentual de coelhos: %.2f\n",perC);
	printf("Percentual de ratos: %.2f\n",perR);
	printf("Percentual de sapos: %.2f\n",perS);
	return 0;
}
