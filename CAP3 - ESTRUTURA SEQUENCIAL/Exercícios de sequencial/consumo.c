#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dist,gasto, medio;
    printf("Distancia percorrida: \n");
    scanf("%f",&dist);
    printf("Combustivel gasto:\n");
    scanf("%f",&gasto);
    medio = dist / gasto;
    printf("Consumo medio %.3f\n",medio);    
    return 0;
}