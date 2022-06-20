#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=1;
	float n1,n2,result;
	
	printf("Digite a nota do %d Bimestre\n",i++);
	scanf("%f",&n1);
	printf("Digite a nota do %d Bimestre\n",i++);
	scanf("%f",&n2);
	result= n1 + n2;
	printf("NOTA FINAL: %.1f\n",result);
	if(result < 60.0)
		printf("Reprovado!");
	return 0;
}
