#include<stdio.h>

void decBin(int n); //Assinatura da fun��o
int main(){
	
	int num;
	printf("Digite o n�mero inteiro que ser� convertido em binario: ");
	scanf("%d",&num);
	printf("O n�mero %d em bin�rio � ",num);
	decBin(num);
}
//Fun��o que converte um n�mero inteiro em bin�rio utilizando VETOR
void decBin(int n){
	int v[50];
	int i = 0, j;
	if(n == 0) printf("0");
	while(n > 0){
		v[i] = n % 2;
		i++;
		n = n / 2;
	}
	for(j = i -1; j >= 0; j--)
		printf("%d",v[j]);
}
