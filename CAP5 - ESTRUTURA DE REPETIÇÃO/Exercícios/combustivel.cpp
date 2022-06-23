#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, alcool = 0, diesel = 0, gasolina = 0;
    printf("Informe um codigo (1, 2, 3) ou 4 para parar: \n");
    scanf("%d", &codigo);
    while (codigo != 4)
    {
        if (codigo == 1)
            alcool++;
        else if (codigo == 2)
            gasolina++;
        else if (codigo == 3)
            diesel++;
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: \n");
        scanf("%d", &codigo);
    }
    printf("MUITO OBRIGADO!\n");
    printf("Alcool = %d\nDiesel = %d\nGasolina = %d\n", alcool, diesel, gasolina);

    return 0;
}