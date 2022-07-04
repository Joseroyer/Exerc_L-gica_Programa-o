#include <stdio.h>
#include <stdlib.h>
#define M 2 // linhas
#define N 3 // colunas
int main()
{
    int j, i, MatA[M][N], MatB[M][N], MatC[M][N];
    printf("Digite o valores da Matriz A\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Elemento[%d,%d]:\n", i, j);
            scanf("%d", &MatA[i][j]);
        }
    }
    printf("Digite o valores da Matriz B\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Elemento[%d,%d]:\n", i, j);
            scanf("%d", &MatB[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            MatC[i][j] = MatA[i][j] + MatB[i][j];
        }
    }
    printf("MATRIZ SOMA: \n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Elemento[%d,%d]: %d\n", i, j, MatC[i][j]);
        }
        printf("\n");
    }
    return 0;
}