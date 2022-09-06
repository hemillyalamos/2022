#include<stdio.h>
int main(){
	int v[10];
	int i, j;
	int aux;
	
	//entrada
	for(i = 0; i < 10; i++){
		printf("digite o %d°valor inteiro",i+1);
		scanf("%d",&v[i]);
	}
	
	//processamento - algoritimo de classificação e troca
	for(i = 0; i < 10; i++){
		for(j = i + 1; j < 10; j++){
			if(v[i] > v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}	
		}
	}
	//saida
		for(i = 0; i < 10; i++){
			printf("[%d]:%d\n", i+1,v[i]);	
	}
}

