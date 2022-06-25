#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,d,i,TF;
	float divisao;
	printf("Quantos casos voce vai digitar? ");
	scanf("%d",&TF);
	for(i=0; i<TF; i++)
	{
		printf("Entre com numerador: \n");
		scanf("%d",&n);
		printf("Entre com denonimador: \n");
		scanf("%d",&d);
		if(d==0)
			printf("DIVISAO IMPOSSIVEL!\n");
		else{
			divisao = float (n)/d;
			printf("DIVISAO = %.2f\n",divisao);
		}
	}
	return 0;
}
