#include<stdio.h>
#include<locale.h>

int main (){ 
 setlocale(LC_ALL, "");
 float raio, altura, at, volume;
 const float PI = 3.14;
 
 printf("Para descobrir a área e o valor do cilindro, digite:/n");
 printf("Raio do cilindro (cm):");
 scanf("%f", &raio);
 prinf("altura do cilindro");
 scanf("%f", &altura);
  
  at = (2 * PI * raio * altura) + 2 * PI * (raio * raio);
  volume = PI * (raio * raio) * altura;

 printf("\nUm cilindro com raio %.1f cm e altura %.1f cm é aproximadamente:\n%.1f cm", raio, altura, at);
 printf("\nO volume de um cilindro com raio %.1f cm é de aproximadamente:\n%.1f cm", raio, altura, volume);
  	
}
