#include <stdio.h>

#define TAMANHO 11

int main()
{
    char nomes[3][TAMANHO];

    for (int i = 0; i < 3; i++)
    {
        printf("Insira um nome: ");
        fflush(stdin);
        fgets(nomes[i], TAMANHO, stdin);
    }

    for (int n = 0; n < 3; n++)
    {
        printf("%s \n", nomes[n]);
    }
    return 0;
}