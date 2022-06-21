#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1,n2,n3,menor=0;
	printf("PRIMEIRO VALOR:\n");
	scanf("%d",&n1);
	printf("SEGUNDO VALOR:\n");
	scanf("%d",&n2);
	printf("TERCEIRO VALOR:\n");
	scanf("%d",&n3);
	
	if(n1<n2 && n1<n3)
		menor = n1;
	else if (n2<n1 && n2<n3)
			menor = n2;
		else{
			menor = n3;	
	}
	printf("MENOR = %d", menor);
	return 0;
}
