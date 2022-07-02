#include <stdio.h>
#include <stdlib.h>
#define TF 4
int main()
{
    int j, i, Matriz[TF][TF], maior = 0;
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
        for (j = 0; j < TF; j++)
        {
            printf("%d ",Matriz[i][j]);
        }
        printf("\n");
    }

    printf("MAIOR ELEMENTO DE CADA LINHA: \n");
    for (i = 0; i < TF; i++)
    {
        maior=0;
        for (j = 0; j < TF; j++)
        {
            if (Matriz[i][j] > maior)
                maior = Matriz[i][j];
        }
        printf("%d\n",maior);
    }
    return 0;
}