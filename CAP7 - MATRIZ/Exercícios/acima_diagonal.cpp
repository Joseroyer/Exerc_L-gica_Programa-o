#include <stdio.h>
#include <stdlib.h>
#define TF 4
int main()
{
    int j, i, Matriz[TF][TF], soma = 0;
    for (i = 0; i < TF; i++)
    {
        for (j = 0; j < TF; j++)
        {
            printf("Elemento[%d,%d]:\n", i, j);
            scanf("%d", &Matriz[i][j]);
        }
    }

    for (i = 0; i < TF; i++)
    {
        j=0;
        for (j=i+1; j < TF; j++)
        {
            soma += Matriz[i][j];
        }
    }
    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL: %d\n", soma);
    return 0;
}