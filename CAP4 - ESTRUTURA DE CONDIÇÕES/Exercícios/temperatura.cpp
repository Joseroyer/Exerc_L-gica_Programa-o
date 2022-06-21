#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char op, escala[11];
	float c,f,res;
	printf("Voce vai digitar a temperatura e qual escala (C/F)?");
	scanf("%c",&op);
	
	switch (op){
		case 'F':
				printf("Digite a temperatura em Fahrenheit: ");
				scanf("%f",&f);
				res = (f-32) / 1.8;
				strcpy(escala,"Celsius");
				
			break;
		case 'C':
				printf("Digite a temperatura em Celsius: ");
				scanf("%f",&c);
				res = c * 1.8 + 32;
				strcpy(escala,"Fahrenheit");
			break;
	}
	printf("Temperatura equivalente em %s: %.2f", escala, res);
	
	return 0;
}
