#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int i;
	for(i = 10; i <= 200; i++){
		printf("%d", i);	
	}
}
