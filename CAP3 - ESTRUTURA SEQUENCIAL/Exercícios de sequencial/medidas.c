#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Digite a medida A: \n");
    scanf("%f", &a);
    printf("Digite a medida B: \n");
    scanf("%f", &b);
    printf("Digite a medida C: \n");
    scanf("%f", &c);

    printf("AREA DO QUADRADO : %.4f \n", pow(a, 2));
    printf("AREA DO TRIANGULO : %.4f \n", (a * b) / 2);
    printf("AREA DO TRAPEZIO : %.4f \n", (a + b)/2 * c );

    return 0;
}