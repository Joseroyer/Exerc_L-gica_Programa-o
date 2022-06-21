#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char mens[6];
    float x, y;
    printf("Valor de X: ");
    scanf("%f", &x);
    printf("Valor de Y: ");
    scanf("%f", &y);
    if (x == 0 && y == 0)
        strcpy(mens, "Origem");
    else
    {
        if (x != 0 && y == 0)
            strcpy(mens, "Eixo X");
        else if (x == 0 && y != 0)
            strcpy(mens, "Eixo Y");
        if (x > 0 && y > 0) // x positvo, y positivo
            strcpy(mens, "Q1");
        else if (y > 0 && x < 0) // x negativo, y positivo
            strcpy(mens, "Q2");
        else if (x > 0 && y < 0) // x positivo, y negativo
            strcpy(mens, "Q4");
        else if (x < 0 && y < 0)
            strcpy(mens, "Q3");
    }
    printf("%s", mens);
    return 0;
}
