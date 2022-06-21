#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a, b, c, result, formP=0, formN=0, delta;
	printf("Coeficiente a:\n");
	scanf("%f", &a);
	printf("Coeficiente b:\n");
	scanf("%f", &b);
	printf("Coeficiente c:\n");
	scanf("%f", &c);
	delta = (b * b) - (4 * a * c);
	if (delta < 0 && a == 0)
		printf("Esta equacao nao possui raizes reais");
	else
	{
		formP = (-b + sqrt(delta)) / (2 * a);
		formN = (-b - sqrt(delta)) / (2 * a);
		printf("X1: %.4f\n", formP);
		printf("X2: %.4f\n", formN);
	}
	return 0;
}
