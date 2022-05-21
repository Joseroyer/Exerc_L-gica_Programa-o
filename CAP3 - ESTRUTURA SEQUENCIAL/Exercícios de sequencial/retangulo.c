#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float b, alt, area, per, diag;
    printf("Base do retangulo: \n");
    scanf("%f", &b);
    printf("Area do retangulo: \n");
    scanf("%f", &alt);
    area = b * alt;
    per = 2 * b + 2 * alt;
    diag=sqrt(pow(b,2)+pow(alt,2));
    printf("AREA: %.4f\n", area);
    printf("PERIMETRO: %.4f\n", per);
    printf("DIAGONAL: %.4f", diag);
    return 0;
}