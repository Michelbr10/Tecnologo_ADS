#include <stdio.h>

int numero = 10; //variável global, caso não haja nenhuma variável com mesmo nome no em um escopo ela pode ser referênciada diretamente pelo nome
char nome[7] = {"Michel"};

void teste()
{
    int numero; //escopo da variável numero é dentro da função teste()
    numero = -5;
    printf("Numero na funcao: %d \n", numero);
}

int main()
{
    teste();
    printf("Numero global no main: %d \n", numero); //mesmo com a chamada da função o valor de numero não é alterado
    printf("Nome global no main: %s \n", nome);

    numero = 99;
    printf("Numero global alterado: %d \n", numero); //os numeros globais podem ser alterados

    return 0;
}