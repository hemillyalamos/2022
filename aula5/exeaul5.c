#include<stdio.h>

int main(){
	int v1 = -1, v2 = -1;
	int i;
	
	while (v1 < 0 || v1 > 32767 ){
		printf("Digite um valor inteiro");
		scanf("%d", &v1);
	}
	
	while (v2 < 0 || v2 > 32767 ){
		printf("Digite um valor inteiro");
		scanf("%d", &v2);
	}
	if(v1 < v2){
		for(i = v1+1; i < v2; i++){
			printf("%d ",i);
		}
	}else{
		for(i = v1-1; i > v2; i--){
			printf("%d ",i);
		}
	}
		
	}	
}
