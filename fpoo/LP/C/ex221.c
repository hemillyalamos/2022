#include <stdio.h>


main(){
       int n, c, l;
       printf("Digite o Tamanho: ");
       scanf("%d", &n);
   
       for (l=1;l<=n;l++) {
        for(c=1;c<=l;c++)
         printf("*");
       printf("\n");
       }
       getch();    
}
