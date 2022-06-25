#include<stdio.h>
#include<stdlib.h>

int main(){
	int x,i,aux=0;
	printf("Digite um valor: ");
	scanf("%d",&x);
	for(i=1; i<=x; i++){
		if(!(i%2==0))
			printf("%d\n",i);
	}
	return 0;
}
