//Exercicio5Lista1
#include <stdio.h>
#include <stdlib.h>
#define LIMITE 80

int leValidaQtElementos();

int main(){
	
	float elementos[LIMITE];
	int i, qtdeElementos;
	
	qtdeElementos = leValidaQtElementos();
	for(i=0; i<qtdeElementos; i++){
		int leValidaQtELementos(){

	int qt;	
	do{
		printf("Insira a quantidade de valores que deseja: \n");
		scanf("%i", &qt);
		if(qt<0 || qt>LIMITE){
			printf("Quantidade de valores não permitida. \n");
		}
	}while(qt<0 || qt>LIMITE);
return 0;	
}
}
}
