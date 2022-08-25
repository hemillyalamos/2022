#include<stdio.h>

int main(){

	int i;
	int tabulacao = 20;
	for(i = 10; i < 200; i++){
		
		if (i<100) printf ("0");
		printf("%d", i);
		if(tabulacao == i){
			printf("\n");
			tabulacao += 10;
		}else{
			printf("\t");
							
		}	
	}
}
