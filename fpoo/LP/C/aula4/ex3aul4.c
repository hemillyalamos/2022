#include<stdio.h>
#include<locale.h>

	int main(){
	
	 setlocale(LC_ALL,"");
	 float salario, inssReal, inssPorcento;
	 
	 printf("Digite seu sal�rio:");
	 scanf("%f",&salario);
	 
	 if(salario < 1212.01){
	 	inssPorcento = 7.5 / 100;
	 	inssReal = salario + inssPorcento;
		 }else if(salario < 2427.35){
		 	inssPorcento = 9 / 100;
		 	inssReal = salario + inssPorcento;
		 }else if(salario < 3641.03){
		 	inssPorcento = 12 / 100;
		 	inssReal = salario + inssPorcento;
		 }else if (salario < 7087.22){
		 	inssPorcento = 14 * 100;
		 	inssReal = salario + inssPorcento;
		 }
	 	
	 	inssReal = salario * inssPorcento; 
	 	
	 	printf("O desconto do INSS ser� de: R$ %.2f\n", inssReal);
	 	printf("O sal�rio final ser� de R$ %2.f\n");
	 
	 
	 }
	 
