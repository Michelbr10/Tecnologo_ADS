#include <stdio.h>
#include <ctype.h>

#define TAMANHO 31

int main()
{
    char nome[TAMANHO];

    printf("Insira seu nome: ");
    fflush(stdin);
    fgets(nome, TAMANHO, stdin);

    for (int i = 0; i < TAMANHO; i++)
    {
        nome[i] = toupper(nome[i]);
    }

    printf("Nome convertido para maisculo: %s", nome);
}