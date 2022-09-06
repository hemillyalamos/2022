//Desenvolva um programa que leia o nome de 5 times de futebol, o número de vitórias e o número de 
//empates de cada time. O programa deverá calcular e apresentar na tela, o nome dos times e o total de 
//pontos de cada um e a ordem de classificação crescente. Lembrando que a vitória vale 3 pontos e o 
//empate vale 1 ponto.
#include<stdio.h>
int main (){
	
	char times[5][20];
	int i,vitorias[5], empates[5],pont[5];
	 
	//entradas
	printf("Digite os nomes dos times:\n");
	for(i = 0; i <= 5; i++){
		scanf("%s",&times);
}
	printf("\n\n");
	printf("Digite a quantidade de vitorias, respectivamente dos times:\n");
	for(i = 0; i < 5; i++){
		do{
			scanf("%d",&vitorias[i]);
		}while(vitorias[i] < 0 || vitorias[i] > 35);
}
		printf("Digite a quantidade de empates, respectivamente dos times:\n");
	for(i = 0; i < 5; i++){
		do{
			scanf("%d",&empates[i]);
		}while(empates[i] < 0 || empates[i] > 20);
}
	for(i = 0; i < 5; i++){
		vitorias[i] = vitorias[i] * 3;
}
	for(i = 0; i < 5; i++){
	pont[i] = vitorias[i] + empates[i];
	}
	int aux,j;
	for (i=0;i<5;i++){
		for(j = i + 1;j < 5; j++){
			if(pont[i] < pont[j]){
				aux = pont[i];
				pont[i] = pont[j];
				pont[j] = aux;
			}
		}
	}
	for(i = 0;i<5;i++)
	printf("[%d]:%d\n", i+1, pont[i]);
}
	
