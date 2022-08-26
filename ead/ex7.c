
#include <stdio.h>
int main()
{
    char resposta;
    int positivos = 0;

    printf("Telefonou para a vitima? (Sim ou Nao): ");
    scanf("%c", &resposta);
    if (resposta == 'Sim' || resposta == 'Sim')
        positivos++;
    printf("Esteve no local do crime? (Sim ou Nao): ");
    getchar();
    scanf("%c", &resposta);
    if (resposta == 'Sim' || resposta == 'Sim')
        positivos++;
    printf("Mora perto da vitima? (Sim ou Nao): ");
    getchar();
    scanf("%c", &resposta);
    if (resposta == 'Sim' || resposta == 'Sim')
        positivos++;
    printf("Devia para a vitima? (Sim ou Nao): ");
    getchar();
    scanf("%c", &resposta);
    if (resposta == 'Sim' || resposta == 'Sim')
        positivos++;
    printf("Ja trabalhou com a vitima? (Sim ou Nao): ");
    getchar();
    scanf("%c", &resposta);
    if (resposta == 'Sim' || resposta == 'Sim')
        positivos++;

    if (positivos < 2)
        printf("Inocente");
    else if (positivos == 2)
        printf("Suspeita");
    else if (positivos < 5)
        printf("Cumplice");
    else
        printf("Assassino");
    return 0;
}
