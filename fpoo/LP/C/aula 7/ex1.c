#include<stdio.h>
int main(){
	char nomes[5][20];
	float salarios[5];
	float  percentual;
	int i;
	
	///entrada
	printf("Digite os nomes dos 5 funcionarios:");
	for(i = 0; i < 5; i++){
		scanf("%s", &nomes[i]);
	}
	printf("Digite os 5 salarios respectivamente:\n");
	for(i = 0; i < 5; i++){
		do{
		scanf("%f", &salarios[i]);
		}while(salarios[i] < 0 || salarios[i]>1000000);
    }
    printf("Digite percentual(%%) de reajuste:\n");
    do{
    	scanf("%f", &percentual);
	}while(percentual < 0 || percentual>1000);
	
    
    //processamento e saida
    for(i = 0; i < 5; i++){
    	salarios[i] = salarios[i] * percentual / 100 + salarios[i];
    	printf("%s novo salario R$%.2f\n",nomes[i],salarios[i]);
	}
}                                                                                                                      
