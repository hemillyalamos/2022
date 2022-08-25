#include<stdio.h>
#include<locale.h>

	int main(){
	
	 setlocale(LC_ALL,"");
	 float salario,filho,final;
	 
	 //entradas
	 printf("Digite o salário do funcionário: \n");
	 scanf ("%f", &salario);
	
	printf("Digite o número de filhos do funcionário: \n");
	scanf("%f", &filho);

	
	if(salario < 1655){
		final = filho * 57; 
	}
	printf("Seu salario final é de: \n%.2f", final);
	
	}
