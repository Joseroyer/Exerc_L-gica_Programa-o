#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 2
int main()
{
    int i, j, Matriz[N][M];
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
        {
            printf("Elemento[%d,%d]:\n", i, j);
            scanf("%d", &Matriz[i][j]);
        }
    printf("VALORES NEGATIVOS:\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
        {
            if (Matriz[i][j] < 0)
                printf("%d \n", Matriz[i][j]);
        }
    return 0;
}