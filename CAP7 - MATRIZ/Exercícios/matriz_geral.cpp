#include <stdio.h>
#include <stdlib.h>
#define TF 3
int main()
{
    int j, i, linha, coluna;
    float Matriz[TF][TF], soma = 0;

    for (i = 0; i < TF; i++)
    {
        for (j = 0; j < TF; j++)
        {
            printf("Elemento[%d,%d]:\n", i, j);
            scanf("%f", &Matriz[i][j]);
        }
    }
    for (i = 0; i < TF; i++)
    {
        for (j = 0; j < TF; j++)
        {
            if (Matriz[i][j] > 0)
                soma += Matriz[i][j];
        }
    }
    printf("SOMA DOS POSITIVOS %.1f \n",soma);
    printf("Escolha uma linha:\n");
    scanf("%d", &linha);
    for (j = 0; j < TF; j++)
    {
        printf("%.1f \t", Matriz[linha][j]);
    }
    printf("\n");
    printf("Escolha uma coluna:\n");
    scanf("%d", &coluna);
    for (j = 0; j < TF; j++)
    {
        printf("%.1f \t", Matriz[j][coluna]);
    }
	printf("\n");
    printf("DIAGONAL PRINCIPAL: \n");
    for (i = 0; i < TF; i++)
    {
        printf("%.2f \t", Matriz[i][i]);
    }
    printf("\n");
}
