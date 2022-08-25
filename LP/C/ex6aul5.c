#include<stdio.h>

int main(){
	int i;
	int acumulado = 0;
	for(i = 0; i < 100; i++){
		acumulado += i;
	}
	printf("A soma dos valores entre 100 en %d", acumulado);
}

