#include<stdio.h>
#include<locale.h>

	int main(){
	
	 setlocale(LC_ALL,"");
	 float salario,filho,final;
	 
	 //entradas
	 printf("Digite o sal�rio do funcion�rio: \n");
	 scanf ("%f", &salario);
	
	printf("Digite o n�mero de filhos do funcion�rio: \n");
	scanf("%f", &filho);

	
	if(salario < 1655){
		final = filho * 57; 
	}
	printf("Seu salario final � de: \n%.2f", final);
	
	}
