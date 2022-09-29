#include<stdio.h>
#include<time.h>
int main (){
	srand(time(NULL));
	char nomes [15][10];
	int i,aux;
	for(i = 0; i < 10; i++){
		scanf("%s",&nomes[i]);
	}
	printf("\n\n");
	aux = rand () % 10;
	printf ("sorteado e:%s", nomes [aux]);
	
}
