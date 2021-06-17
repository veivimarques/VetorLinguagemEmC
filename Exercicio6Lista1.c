//Exercicio6ListaVetores

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void maiorSalario (float salario,int i);
void menorSalario (float salario,int i);

int main(){
	
	int matricula,i=0;
	float salario;
	char continuar='S';
	
	printf("------ DADOS-----");
	
	while(continuar == 'S' || continuar == 's'){
		printf("Matrícula: %d: \n", i+1);
		scanf("%d", &matricula[i]);
		printf("Salário%d: \n", i+1);
		scanf("%f", &salario[i]);	
		
		printf("Deseja inserir mais algum dado? [S/N]\n");
		continuar = getch();
		continuar = toupper(continuar);
		i++;		
	}
	maiorSalario(salario, i);
	menorSalario(salario, i);
		
	return 0;
}

void maiorSalario (float salario[],int i){
	float Msalario =salario[0];
	int k;
	
	for(k=1;k <=i;k++){
		if(Msalario<salario[k]){
			Msalario=salario[k];
		}
	}
	printf("\nMaior Salario: R$ %.2f\n", Msalario);
}

void menorSalario (float salario[],int i){
	float menorSal = salario[0];
	int k;
	
	for(k=1;k < i;k++){
		if(menorSal>salario[k]){
			menorSal=salario[k];
		}
	}
	printf("\Menor Salario: R$ %.2f\n", menorSal);

