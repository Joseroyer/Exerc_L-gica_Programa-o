#include<stdio.h>
#include<stdlib.h>
#define TF 2
int main(){
    int i,j,vetMatriz[TF][TF];
    for(i=0; i<TF; i++)
        for(j=0; j<TF; j++)
        {
            printf("Elemento[%d],[%d]\n",i,j);
            scanf("%d",&vetMatriz[i][j]);
        }
     for(i=0; i<TF; i++)
        for(j=0; j<TF; j++){
            printf("Elemento[%d][%d] = %d\n",i,j,vetMatriz[i][j]);
        }
        // printf("\n");
    for(i=0; i<TF; i++)
        for(j=0; j<TF; j++){
            printf("%d ",i,j,vetMatriz[i][j]);
        }
        printf("\n");
    return 0;
}