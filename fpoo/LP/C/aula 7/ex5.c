#include<stdio.h>

int main(){
	
	float precos[10],precofinal[10],porcento,desconto[10];
	int i,continuar = 1;
	char mercadorias[10][20];
	printf("Digite o nome das mercadorias\n");
	for(i = 0; i < 10; i++){
		scanf("%s",&mercadorias[i]);
	}
	printf("Digite o pre�o das mercadorias\n");
	for(i = 0; i < 10; i++){
		scanf("%f",&precos[i]);
	}
	printf("Digite o indice percentual (%%) para a mercadoria\n");
	scanf("%f",&porcento);
	for(i = 0; i < 10; i++){
		desconto[i] = precos[i] * (porcento / 100);
		precofinal[i] = precos[i] - desconto[i];
	}
	//sa�da
	for(i = 0; i < 10; i++){
		printf("%s: o preco original � de %.2f, o valor do desconto e %.2f e o pre�o final corresponde a: %.2f\n",mercadorias[i],precos[i], desconto[i], precofinal[i]);
	}
}
