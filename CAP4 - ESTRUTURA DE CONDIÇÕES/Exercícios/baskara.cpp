#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a,b,c,x1,x2,result,formP,formN,discriminante;
	printf("Coeficiente a:\n");
	scanf("%f",&a);
	printf("Coeficiente b:\n");
	scanf("%f",&b);
	printf("Coeficiente c:\n");
	scanf("%f",&c);
	discriminante = (b*b) - (4*a*c);
	if(discriminante < 0 )
		printf("Esta equacao nao possui raizes reais");
	else{
		formP = (-b + sqrt(discriminante)) / (2*a);
		formN = (-b - sqrt(discriminante)) / (2*a);
		printf("X1: %.4f\n",formP);
		printf("X2: %.4f\n",formN);
	}
	return 0;
}
