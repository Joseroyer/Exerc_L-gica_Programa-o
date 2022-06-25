#include<stdio.h>
#include<stdlib.h>

int main(){
	int TF,i;
	float n1,n2,n3,media;
	printf("Quantos casos voce vai digitar? ");
	scanf("%d",&TF);
	for(i=0; i<TF; i++){
		printf("digite tres numeros:\n");
		scanf("%f",&n1);
		scanf("%f",&n2);
		scanf("%f",&n3);
		media = (n1 * 2 + n2 * 3 + n3 * 5)/(2+3+5);
		printf("MEDIA = %.1f \n", media);
	}
	return 0;
}
