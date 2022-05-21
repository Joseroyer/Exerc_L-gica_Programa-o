#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas,min,seg,rest,s;
    printf("Digite a duracao em segundos: \n");
    scanf("%d",&seg);
    horas = seg/3600;
    rest = seg % 3600;
    min = rest / 60;
    s = rest % 60; 
    printf("%d:%d:%d",horas,min,s);
    return 0;
}