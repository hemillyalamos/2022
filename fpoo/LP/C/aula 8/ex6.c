#include<stdio.h>
void retangulo(int x, int y, char c);
int main(){
	int l, a;
	char c;
	printf("Digite a largura, altura e caracter do ret�ngulo:\n");
	scanf("%d",&l);
	scanf("%d",&a);
	c = getch();
	retangulo(l, a, c);
}
//Fun��o que desenha um ret�ngulo
void retangulo(int x, int y, char c){
	int i, j;
	for(i = 0; i < y; i++){
		for(j = 0; j < y; j++)
			printf("%c",c);
		printf("\n");
	}
}
