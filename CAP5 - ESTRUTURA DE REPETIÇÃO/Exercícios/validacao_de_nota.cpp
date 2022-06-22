#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media;
    int flag = 0;
    printf("Digite a 1 Nota: ");
    scanf("%f", &n1);
    while (n1 < 0 || n1 > 10)
    {
        printf("Valor invalido! Tente novamente: ");
        scanf("%f", &n1);
    }
    printf("Digite a 2 nota : ");
    scanf("%f", &n2);
    while (n2 < 0 || n2 > 10)
    {
        printf("Valor invalido! Tente novamente: ");
        scanf("%f", &n2);
    }
    media = (n1 + n2) / 2;
    printf("Media: %.2f ", media);
    return 0;
}