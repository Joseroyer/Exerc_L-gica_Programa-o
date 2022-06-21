#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	float n1,n2,n3,maior;
	printf("Digite as tres distancias: \n");
	scanf("%f",&n1);
	scanf("%f",&n2);
	scanf("%f",&n3);
	if(n1>n2 && n1>n3)
		maior = n1;
	else{
		if(n3>n2 && n3>n1)
			maior = n3;
		else
			maior = n2;
	}
	printf("MAIOR DISTANCIA: %.2f", maior);
	return 0;
}
