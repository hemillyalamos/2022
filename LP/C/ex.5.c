/*Desenvolva um programa que leia um número ”n” inteiro, positivo e diferente de zero e apresente na tela: n – 1, e também n + 1.*/
#include<stdio.h>

void negativo_print(int a);
void positivo_print(int a);

int main(int argc, char *argv[]) {

    int a, b, c;

    puts("Digite o primeiro digito:");
    scanf("%d", &a);
    puts("Digite o segundo digito:");
    scanf("%d", &b);
    puts("Digite o terceiro digito:");
    scanf("%d", &c);

    negativo_print(a);
    negativo_print(b);
    negativo_print(c);
    positivo_print(a);
    positivo_print(b);
    positivo_print(c);

    return 0;
}

void negativo_print(int a){
    if(a < 0){
        printf("Numero: %d\n", a);
    }
}
void positivo_print(int a){
    if(a > 0){
        printf("Numero: %d\n", a);
    }
}


