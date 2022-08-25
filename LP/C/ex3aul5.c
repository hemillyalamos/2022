#include<stdio.h>
	
	int main(){
		int i, valor = -1; 
		while(valor < 0 || valor > 32767){
		
		printf("Digite o valor inteiro maior do que 0");
		scanf("%d",&valor);
		
		}
		for (i = 0; i <= valor; i++){
			printf("%d", i);
	}
	}
