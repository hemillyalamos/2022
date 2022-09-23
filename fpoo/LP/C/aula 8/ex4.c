#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool valor(int n1, int n2);

int main(int argc, char *argv[]) {
	printf("Valor maior:%d", valor ("%d", "%d") );
	
	
	return 0;
}

bool valor(int n1, int n2) {
	scanf ("%d",&n1);
	scanf ("%d", &n2);
	int valor = (n1 + n2) / 2;
	return valor >= 6;
}

