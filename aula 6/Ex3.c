//3 - Utilizando apenas um vetor de tamanho 6, troque os valores de maneira inversa//

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int vetor[6],number,cont=0,i;	
	
	printf("Vetor 1");
	for(i = 0; i <= 5 ; i++)
{
	cont=0+i;
	printf("\t[%d] Digite um valor: ",cont);
	scanf("%d",&number);
		vetor[i] = number;
}
	printf("vetor 1:\n");
	for(i=5; i>=0;i--)
		printf("%d ", vetor[i]);
		printf("\n");

}
