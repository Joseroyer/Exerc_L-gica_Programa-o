#include <stdio.h>
#include <stdlib.h>
#define TF 3
int main()
{
    int N, i, j, Matriz[TF][TF], contN = 0;
    // printf("Qual a ordem da matriz?");
    // scanf("%d", &N);
    if (N > 0 && N <= 10)
    {
        for (i = 0; i < TF; i++)
            for (j = 0; j < TF; j++)
            {
                printf("Elemento[%d,%d]:\n", i, j);
                scanf("%d", &Matriz[i][j]);
            }
        for (i = 0; i < TF; i++)
            for (j = 0; j < TF; j++)
            {
                if (Matriz[i][j] < 0)
                    contN++;
            }

        printf("DIAGONAL PRINCIPAL: \n");
        for (i = 0; i < TF; i++)
        {
            printf("%d \t", Matriz[i][i]);
        }
        printf("\nQUANTIDADE DE NEGATIVOS: %d", contN);
    }
    else
        printf("Digite um valor correto!!");

    return 0;
}