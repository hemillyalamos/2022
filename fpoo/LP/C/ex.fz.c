#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
int alqueires, caminhoes, voltas, totalalqueires, totalcaminhao;

	
	printf("Quantidade de alqueires que a fezenda possui");
	scanf("%d",&alqueires);
	
	printf("Quantidade que a fazenda possui de caminhao")
	scanf("%d", &caminhoes);
	
	totalalqueires = alqueires * 250;
	totalcaminhao = caminhao * 18;
	voltas = totalalqueires/totalcaminhao;
	
	printf("total de voltas será de %d", voltas);
}
