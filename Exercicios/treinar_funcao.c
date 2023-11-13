#include <stdio.h>

#define TAMANHO_NOME 51

void numeros(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", i);
    }
}

float soma(float num1, float num2)
{
    return num1 + num2;
}

char cumprimento(char nome[TAMANHO_NOME])
{
    printf("Ola, %s", nome);
}                                                                                  


int main()
{
    numeros(20);
    printf("%f \n", soma(5, 3));
    char nome[TAMANHO_NOME] = {"Michel Douglas"};
    cumprimento(nome);
}