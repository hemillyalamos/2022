#include<stdio.h>
int main(){
	srand(time(NULL)); //ultiliza o relogio do pc para gerar pseudo aleatorios 
	int v[100]; //vetor a ser classificado
	int i, j; // contadores
	int aux; //auxiliar para fazer trocas
	
	
	
	//gera 100 numeros de 0 a 100
	for(i = 0; i < 100; i++){
		v[i] = rand()%100;
	}
	
	//processamento - algoritimo de classificação e troca
	for(i = 0; i < 100; i++){
		for(j = i + 1; j < 10; j++){
			if(v[i] > v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}	
		}
	}
	//saida
		for(i = 0; i < 100; i++){
			printf("[%d]:%d\n", i+1,v[i]);	
	}
}


