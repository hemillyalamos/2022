#include<stdio.h>
#include<locale.h>
   
   int main(){
   	setlocale(LC_ALL,"");
	float preco;
	
	//Entradas
	printf("Digite o pre�o do produto:\n");
	scanf("%f",&preco);

	//Processamento
	if(preco > 1000){
		preco = preco - preco * 8 / 100;
	}
	//Sa�da
	printf("O pre�o final ser� de: R$ %.2f",preco);
} 
   
