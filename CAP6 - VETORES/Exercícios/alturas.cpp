#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define TF 5

int main()
{
    int N, i, j = 1, vetIdade[N], cont = 0;
    char vetNome[N][20];
    float altMedia, soma = 0, porc, vetAltura[N];
    printf("Quantas pessoas serao digitadas?\n");
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        printf("Dados da %d pessoa\n", j++);
        printf("Nome: \n");
    
        fflush(stdin);
        scanf("%s", &vetNome[i]);
        printf("Idade: \n");
        scanf("%d", &vetIdade[i]);
        printf("Altura: \n");
    	scanf("%f", &vetAltura[i]);
    }
    for(i=0; i<N; i++){
    	 soma = soma + vetAltura[i];
	}
	altMedia = soma / N;
	printf("Altura media %.2f\n", altMedia);
	
    for (i = 0; i < N; i++)
    {
        if (vetIdade[i] < 16)
            cont++;
    }
    porc = cont * 100/N;
    printf("Pessoas com menos de 16 anos: %.1f", porc);
    
    for (i = 0; i < N; i++)
    {
        if (vetIdade[i] < 16)
            printf("%s \n", vetNome[i]);
    }
    return 0;
}
