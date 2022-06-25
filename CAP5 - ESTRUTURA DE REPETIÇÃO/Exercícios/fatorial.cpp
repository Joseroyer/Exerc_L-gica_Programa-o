#include<stdio.h>
#include<stdlib.h>

int main(){
	int N,i,fatorial=1;
	printf("Digite o valor de N: \n");
	scanf("%d",&N);
	if(N>15)
		printf("Ultrapassou o Valor Maximo de 15!!!\n");
	else{
		if(N==0 || N==1)
			fatorial = 1;
		else if(N>1){
				for(i=N; N>1; N--){
					fatorial = fatorial * N;
				}
			}
	printf("FATORIAL = %d\n",fatorial);	
	}
	return 0;
}
