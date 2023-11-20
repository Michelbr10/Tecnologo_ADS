#include <stdio.h>

char nome[8] = {"Douglas"};
int numero = 10; //variável global, caso não haja nenhuma variável com mesmo nome no em um escopo ela pode ser referênciada diretamente pelo nome

void teste()
{
    numero = -5;
}

int main()
{
    printf("Nome global no main: %s \n", nome);
    printf("Numero global: %d \n", numero); //mesmo com a chamada da função o valor de numero não é alterado

    teste();
    printf("Numero global alterado na funcao: %d \n", numero); //os numeros globais podem ser alterados

    return 0;
}