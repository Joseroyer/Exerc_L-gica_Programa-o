#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price, money, thing,x;
    int quantity;

    printf("Preco unitario do Produto: \n");
    scanf("%f", &price);
    printf("Quantidade comprada\n");
    scanf("%d", &quantity);
    printf("Dinheiro recebido\n");
    scanf("%f", &money);
    x = (price * quantity);
    thing =  money -  x;
    if(thing > 0)
        printf("Troco : %.2f", thing);
    else printf("Nao tem troco");
    return 0;
}