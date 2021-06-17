//Exercicio2Lista1
#include <stdio.h>
#include <stdlib.h>	
#define LIM 50

int leValidaQtdeAlunos();

int main(){
	
	float nota[LIM];
	int i, alunos[LIM];	
	alunos = leValidaQtdeAlunos();
	return 0;
}
int leValidaQtdeAlunos(){
	int qtde;
	do{
		printf("\nInsira a quantidade de notas que deseja armazenar: \n");
		scanf("%i", &qtde);
		if(qtde<0 || qtde>LIM);
			printf("Quantidade de alunos invalida.");
	
	}while(qtde<0 || qtde>LIM);
	return qtde;
}
