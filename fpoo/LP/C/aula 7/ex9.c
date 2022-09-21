#include<stdio.h>
#include<time.h>
int main(){

	srand(time(NULL));
	int matriz[5][5];
	int i, j, contPar = 0, contImpar = 0;
	//Processamento (Preencher a matriz com números aleatorios de 0 a 50)
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			matriz[i][j] = rand()%51;
	//Saida matriz completa
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(matriz[i][j] < 10) printf("[0%d]",matriz[i][j]);
			else printf("[%d]",matriz[i][j]);
		}
		printf("\n");
	}
	printf("Matriz completa\n");
	//Mostrar somente os pares
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(matriz[i][j] % 2 == 0){
				if(matriz[i][j] < 10) printf("[0%d]",matriz[i][j]);
				else printf("[%d]",matriz[i][j]);
				contPar++;
			}else{
				printf("[  ]");
			}
		}
		printf("\n");
	}
	printf("temos %d pares\n",contPar);
	//Mostrar somente os impares
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(matriz[i][j] % 2 == 1){
				if(matriz[i][j] < 10) printf("[0%d]",matriz[i][j]);
				else printf("[%d]",matriz[i][j]);
				contImpar++;
			}else{
				printf("[  ]");
			}
		}
		printf("\n");
	}
	printf("temos %d impares\n",contImpar);
}
