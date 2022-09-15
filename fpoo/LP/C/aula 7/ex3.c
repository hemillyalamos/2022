#include<stdio.h>

int main(){
	
	float precos[5];
	int i, continuar = 1;
	char mercadorias[5][15];
	while(continuar == 1){
	printf("Digite o nome das mercadorias\n");
	//entrada
		for(i = 0; i < 5; i++){
			scanf("%s",&mercadorias[i]);
		}
		printf("Digite o preco das mercadorias, respectivamente\n");
		for(i = 0; i < 5; i++){
		scanf("%f",&precos[i]);
		}
	//processamento
	
		for(i = 0; i < 5; i++){
			if(precos[i] < 1000) precos[i] = precos[i] + (precos[i] * 0.05);
			else precos[i] = precos[i] + (precos[i] * 0.07);	
		}
	//saída
		for(i = 0; i < 5; i++){
			printf("O preco do produto %s atualmente é %.2f\n",mercadorias[i],precos[i]);
		}
		printf("Deseja continuar?\n[1.Sim]\n[2.Nao]\n");
		scanf("%d",&continuar);
	}
	
}
