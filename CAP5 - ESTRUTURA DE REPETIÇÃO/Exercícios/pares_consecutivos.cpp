#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, soma = 0, i = 0, tot = 0;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &x);
    while (x != 0)
    {
        if (x % 2 == 0)
        {
            soma = x;
            while (i < 5)
            {
                tot = tot + soma;
                soma = x + 2;
                x += 2;
                i++;
            }
        }
        else
        {
            soma = x + 1;
            while (i < 5)
            {
                tot = tot + soma;
                soma = (x + 1) + 2;
                x += 2;
                i++;
            }
        }
        printf("SOMA %d\n", tot);
        i=0, tot=0, soma=0;
        printf("Digite um numero inteiro: \n");
        scanf("%d", &x);
    }

    return 0;
}