#include <stdio.h>

#define TAMANHO_NOME 11

int main()
{
    char nomes[2][2][TAMANHO_NOME];
    int linhas, colunas;
    for (linhas = 0; linhas < 2; linhas++)
    {
        for (colunas = 0; colunas < 2; colunas++)
        {
            printf("Insira um nome: ");
            fflush(stdin);
            fgets(nomes[linhas][colunas], TAMANHO_NOME, stdin);
        }
    }
    for (linhas = 0; linhas < 2; linhas++)
    {
        for (colunas = 0; colunas < 2; colunas++)
        {
            printf("\n %s \n", nomes[linhas][colunas]);
        }
    }
    return 0;
}