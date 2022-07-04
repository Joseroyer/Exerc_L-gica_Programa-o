#include <stdio.h>
#include <stdlib.h>
#define M 2 // linhas
#define N 3 // colunas
int main()
{
    int j, i, k = 1;
    float MatA[M][N], vetLinha[M];
    for (i = 0; i < M; i++)
    {
        printf("Digite os elemento da %d da linha\n", k++);
        for (j = 0; j < N; j++)
        {
            scanf("%f", &MatA[i][j]);
        }
    }
    vetLinha[0] = 0;
    for (i = 0; i < M; i++)
    {
        vetLinha[1] = 0;
        for (j = 0; j < N; j++)
        {
            vetLinha[i] += MatA[i][j];
        }
    }
    printf("VETOR GERADO: \n");
    for (i = 0; i < M; i++)
    {
        printf("%.1f \n", vetLinha[i]);
    }

    return 0;
}