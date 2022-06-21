#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	float gli;
	char clas [10];
	printf("Digite a medida da glicose: ");
	scanf("%f",&gli);
	if(gli<=100)
		strcpy(clas,"Normal");
	else
		if(gli > 100 && gli <= 140)
			strcpy(clas, "Elevado");
		else
			strcpy(clas,"Diabetes"); 
	puts(clas);
	return 0;
}
