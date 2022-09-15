#include<stdio.h>

int main (){
	
	int v[5],i = -1,aux,j;
	for(i = 0; i < 5; i++){
		v[i] = -1;
	}
	printf("Digite um numero entre 0 e 1.000.000 para preencher os indices:\n");
	for(i = 0; i <= 5; i++){
			while(v[i] < 0 || v[i] > 1000000){
				printf("[%d]: ",i);
				scanf("%d",&v[i]);
			}
		}
	//condição (se um numero e maior que o outro)
	for(i = 0; i < 5; i++){
		for(j = i + 1; j < 5; j++){
			if(v[i] > v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;	
			}
		}
		printf("%d\n",v[i]);
	}
}
