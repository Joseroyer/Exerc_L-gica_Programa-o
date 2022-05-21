#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];
    float valor, horas, pag;
    printf("Nome:\n");
    gets(nome);
    printf("Valor por hora:\n");
    scanf("%f", &valor);
    printf("Horas trabalhadas :\n");
    scanf("%f", &horas);
    pag = valor * horas;
    printf("O pagamento para o %s deve ser %.2f\n", nome, pag);
    return 0;
}