#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Digite dois numeros: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    while (x != y)
    {
        if (x > y)
            printf("Descrecente!\n");
        else
            printf("Crescente!\n");
        printf("Digite dois numeros: \n");
        scanf("%d", &x);
        scanf("%d", &y);
    }
    printf("FIM DO PROGRAMA!");
    return 0;
}