#include<stdio.h>
#include<stdbool.h>
bool eIgual(int n1, int n2); //Assinatura da fun��o
int main(){
	int n1, n2;
	printf("Digite dois n�meros inteiros: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	if(eIgual(n1,n2))
		printf("Os n�meros s�o iguais.");
	else
		printf("Os n�meros s�o diferentes.");
}
//Fun��o que compara se dois n�meros s�o iguais
bool eIgual(int n1, int n2){
	if(n1 == n2)
		return true;
	else
		return false;
}
