#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

int main()
{
    float r,a;
    printf("Digite o valor do raio do circulo:\n");
    scanf("%f",&r);
    a = pow(r,2) * PI ;
    printf("AREA %.3f ",a);
    return 0;
}