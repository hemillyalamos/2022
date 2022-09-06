#include<stdio.h>
#include<locale.h>

	int main(){
	
	 setlocale(LC_ALL,"");
	 float a,b,c;
	 
	 printf("Digite o comprimento a do triangulo: \n");
	 scanf("%f", &a);
	 printf("Digite o comprimento b do triangulo: \n");
	 scanf("%f",&b);
	 printf("Digite o comprimento c do triangulo: \n");
	 scanf("%f",&c);
	 
	 if (a == b && b == c){
	 	printf("o triangulo é equilátero");
	 	
	 }else if(a != b && b != c && a != c){
	 	printf("O triangulo é escaleno");
	 	
	 }else{
	 	printf("O triangulo é isóceles");
	 }
	 }
	 
