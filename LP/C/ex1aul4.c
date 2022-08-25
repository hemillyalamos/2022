#include<stdio.h>
#include<locale.h>
   
   int main(){
   	setlocale(LC_ALL,"");
	float preco;
	
	//Entradas
	printf("Digite o preço do produto:\n");
	scanf("%f",&preco);

	//Processamento
	if(preco > 1000){
		preco = preco - preco * 8 / 100;
	}
	//Saída
	printf("O preço final será de: R$ %.2f",preco);
} 
   
