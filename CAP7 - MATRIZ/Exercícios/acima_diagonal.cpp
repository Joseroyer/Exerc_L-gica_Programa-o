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

    
    return 0;
}