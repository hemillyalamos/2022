#include<stdio.h>
#include<locale.h>

int main(){
	 setlocale(LC_ALL,"");
	 char nome[20];
	 int idade;
	 
	 //entradas//
	 printf("Digite o seu nome:")
	 scanf("%s", &nome);
	 printf("Digite a sua idade:");
	 scanf("%d", &idade);
	 
	 //processamento//
	 if(idade < 10){
	 	printf("Olá %s voce é criança \n", nome);
	 }else if (idade < 19){
	 	printf("Olá %s voce é adolecente\n", nome);
	 }else if (idade < 24){
	 	printf("Olá %s voce é jovem \n", nome);
	 }else if (idade < 45){
	 	printf("Olá % voce é adulto \n", nome);
	 }else if (idade < 60){
	 	printf("Olá %s voce é de meia idade \n",);
	 }
}
