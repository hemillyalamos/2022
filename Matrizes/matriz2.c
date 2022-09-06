#include <stdio.h>

int main(){
	srand(time(NULL));
	int matriz[5][5];//matriz
	int i, j; //contadores para percorrer a mtriz
	
	//prencher a matriz com numeros aleatorios de 0 a 100
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			matriz[i][j] = rand() % 100;
			
	//mostrar a matriz preenchida com as posições
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++)
			if(matriz[i][j]<10) printf("[%d,%d]:0%d\t", i, j, matriz[i][j]);
			else printf("[%d,%d]:%d\t", i, j, matriz[i][j]);
		printf("\n");
	}
	
	
}
	
	
