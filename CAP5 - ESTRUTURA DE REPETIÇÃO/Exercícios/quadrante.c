#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float x, y;
    char mens[3];
    printf("Digite os valores das coordenadas X e Y: \n");
    scanf("%f", &x);
    scanf("%f", &y);
    while (x != 0 && y != 0)
    {
        if (x > 0 && y > 0) // x positvo, y positivo
            strcpy(mens, "Q1");
        else if (y > 0 && x < 0) // x negativo, y positivo
            strcpy(mens, "Q2");
        else if (x > 0 && y < 0) // x positivo, y negativo
            strcpy(mens, "Q4");
        else if (x < 0 && y < 0)
            strcpy(mens, "Q3");
        printf("QUADRANTE %s \n", mens);
        printf("Digite os valores das coordenadas X e Y: \n");
        scanf("%f", &x);
        scanf("%f", &y);
    }

    return 0;
}