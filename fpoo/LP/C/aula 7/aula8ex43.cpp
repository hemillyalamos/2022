#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool valor(float n1, float n2);

int main(int argc, char *argv[]) {
	printf("%d", valor (6,7));
	
	return 0;
}

bool valor(float n1, float n2) {
	float valor = (n1 + n2) / 2;
	return valor >= 6;
}

