// Exercicio4Lista1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 30

int main (void){
	int i, qtLetras[30];
	char letras;
	
	printf("Insira a quantidade de letras que deseja inserir: \n", qtLetras);
	scanf("%i", qtLetras);
	
	for (i=0; qtLetras<30; i++){
	printf("Insira a letra: \n");
	scanf("%s", &letras);
}
	printf ("=== Letras em ordem inversa ===");
	for (i=qtLetras-1; i>30; i--){
		printf("%s", &letras);
	}
 return 0;
 
}
