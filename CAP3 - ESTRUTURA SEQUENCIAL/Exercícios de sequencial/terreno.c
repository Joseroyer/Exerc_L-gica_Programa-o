#include <stdio.h>
#include <stdlib.h>

int main()
{
    float larg,comp,val,area,preco;
    printf("Digite a largura do Terreno: \n");
    scanf("%f",&larg);
    printf("Digite o comprimento do Terreno: \n");
    scanf("%f",&comp);
    printf("Digite o Valor do Terreno: \n");
    scanf("%f",&val);
    area = larg * comp;
    printf("Area do Terreno: %.2f \n", area);
    printf("Preco do Terreno: %.2f ", val * area);
    return 0;
}