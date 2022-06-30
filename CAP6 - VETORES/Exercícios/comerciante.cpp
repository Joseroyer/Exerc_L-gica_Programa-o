#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define TF 10

int main() {
    int i, cont1=0,cont2=0,cont3=0,N,j=1;
    char vetNome[TF][20];
    float vetCompra[TF], vetVenda[TF],lucro,totalCompra=0,totalVenda=0,lucroTotal,diferenca;
    printf("Serao digitados dados de quantos produtos? \n");
    scanf("%d",&N);
    for(i=0; i < N; i++){
        printf("PRODUTO %d \n",j++);
        printf("Nome: \n");
        scanf("%s",&vetNome[i]);
        printf("Preco de Compra: \n");
        scanf("%f",&vetCompra[i]);
        printf("Preco de Venda: \n");
        scanf("%f",&vetVenda[i]);
    }
    for (int i = 0; i < N; i++) {
        diferenca = vetVenda[i] - vetCompra[i];
        lucro = (diferenca * 100) / vetCompra[i];
        if(lucro < (100*0.10))
            cont1++;
        else if( lucro >= (100 * 0.10) && lucro <= ( 100 * 0.20))
            cont2++;
        else
            cont3++;
    }
    for (int i = 0; i < N; i++) {
        totalCompra= totalCompra + vetCompra[i];
        totalVenda= totalVenda + vetVenda[i];
        lucroTotal = totalVenda - totalCompra;
    }
    printf("--- RELATORIO ---\n");
    printf("Lucro abaixo de 10%: %d\n",cont1);
    printf("Lucro entre 10 e 20: %d\n",cont2);
    printf("Lucro acima de 20%: %d\n",cont3);
    printf("Valor total de compra: %.2f\n",totalCompra);
    printf("Valor total de venda: %.2f\n",totalVenda);
    printf("Lucro total: %.2f\n",lucroTotal);
    return 0;
}
