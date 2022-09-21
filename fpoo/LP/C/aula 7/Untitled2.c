#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <mem.h>

void main()
{
	char numero[10];
   char tecla;
   int chute;
   int i = 0;

   // preenche o array numero com zeros
   memset(numero, 0, sizeof(numero));

   tecla = 0;
   printf("Digite um numero e pressione <ENTER> para finalizar\n");
   while (tecla != '\r')
   	{
      tecla = getch();
      if (isdigit(tecla))	// verifica se a tecla digitada é um numero (0 a 9)
      	numero[i++] = tecla; // salva o valor digitado em numero na posicao indicada por i eincrementa i
      }
   printf("Digite um valor: ");
   scanf("%d", &chute);
   if (chute == atoi(numero))   // atoi converte uma string para int
   	printf("Confere\n");
   else
   	printf("não Confere\n");

	getch();
}

