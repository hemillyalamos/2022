#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	float peso = -1, excesso = 0, multa = 0;
	
	while(peso < 0 || peso > 10000){
		printf("Jo�o,digite quantos quilos de peixe pescou hoje:");
		scanf("%f",&peso);
	
	}
	
	if(peso > 50){
		excesso= peso - 50;
		multa = excesso *4;
		printf("Jo�o,voc� pescou %.1fkg em execsso , deve pagar uma multa de %.2f",excesso,multa);
	}else{
		printf("hoje sua pesca est� dentro do regulamento,menos de 50 kg");
	}

}
