#include<stdio.h>

float paraFahrenheit(float celsius);
int main(){
	
	float c, f;
	printf("Digite a temperatua em graus Celsius: ");
	scanf("%f",&c);
	f = paraFahrenheit(c);
	printf("Temperatura em C�%.1f em F�%.1f",c,f);
}
float paraFahrenheit(float celsius){
	return celsius * 9 / 5 + 32;
}
