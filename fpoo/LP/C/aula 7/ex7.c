#include<stdio.h>

#include<time.h>
int main(){
	
	srand(time(NULL));
	int v[9],pares[9],impares[9];
	int i,par,impar,num[9];
	int maior = 0;
	for(i = 0; i < 9; i++){
	num[i] = rand() % 10;
	}
	for(i = 1; i <= 9; i++){
		printf("[%d]: %d\t",i,num[i]);
		if(i % 3 == 0) printf("\n\n");
	}
	printf("\n\n");
	int posicao;
	for(i = 0; i < 9; i++){
		if(num[i] > maior){
			maior = num[i];
			posicao = i;
		}
	}
	printf("O maior numero e %d na posi��o [%d]",maior,posicao);
