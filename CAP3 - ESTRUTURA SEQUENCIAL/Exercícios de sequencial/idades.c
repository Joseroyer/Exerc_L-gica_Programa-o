#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name1[30], name2[30];
    int year1, year2;
    float m,x=2;

    printf("Dados da primeira pessoa\n");
    printf("Nome: \n");
    fflush(stdin);
    gets(name1);
    printf("Idade: \n");
    scanf("%d", &year1);
    printf("Dados da segunda pessoa\n");
    printf("Nome: \n");
    fflush(stdin);
    gets(name2);
    printf("Idade: \n");
    scanf("%d", &year2);
    m = (year1 + year2) / x;
    printf("A idade media de %s e %s e de %.1f anos", name1, name2, m);
    return 0;
}