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
	 	printf("Ol� %s voce � crian�a \n", nome);
	 }else if (idade < 19){
	 	printf("Ol� %s voce � adolecente\n", nome);
	 }else if (idade < 24){
	 	printf("Ol� %s voce � jovem \n", nome);
	 }else if (idade < 45){
	 	printf("Ol� % voce � adulto \n", nome);
	 }else if (idade < 60){
	 	printf("Ol� %s voce � de meia idade \n",);
	 }
}
