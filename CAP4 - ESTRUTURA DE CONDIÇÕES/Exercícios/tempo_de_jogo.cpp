#include <stdio.h>
#include <stdlib.h>

int main()
{

    int inicio, fim, duracao;
    printf("Hora inicial: ");
    scanf("%d", &inicio);
    printf("Hora final: ");
    scanf("%d", &fim);

    if (fim > inicio)
        duracao = fim - inicio;
    else
    {
        duracao = (24 - inicio) + fim;
    }
    if (duracao >= 1 && duracao <= 24)
    {
        printf("O JOGO DUROU %d HORAS(S)", duracao);
    }
    else
        printf("NAO HOUVE A DURACAO MINIMA DE 1 HORA E MAXIMA DE 24");
    return 0;
}