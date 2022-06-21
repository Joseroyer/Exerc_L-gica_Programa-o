#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, pessoas = 0;
    float media, total = 0;
    printf("Digite as idades: \n");
    scanf("%d", &idade);
    if (idade < 0)
        printf("IMPOSSIVEL CALCULAR!");
    else
    {
        while (idade > 0)
        {
            pessoas++;
            total = total + idade;
            printf("Digite as idades: \n");
            scanf("%d", &idade);
        }
        media = (total / pessoas);
        printf("MEDIA = %.2f", media);
    }
    return 0;
}