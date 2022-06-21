#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1,n2;
	printf("Digite dois numero inteiros ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	
	if(n1%n2==0 || n2%n1==0){
		printf("Sao multiplos");
	}else
		
		printf("Nao sao multiplos!");
	
	return 0;
}
