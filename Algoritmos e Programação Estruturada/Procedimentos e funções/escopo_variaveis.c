#include <stdio.h>

int numero = 10; //variável global, caso não haja nenhuma variável com mesmo nome no em um escopo ela pode ser referênciada diretamente pelo nome

void teste()
{
    int numero; //escopo da variável numero é dentro da função teste()
    numero = -5;
    printf("Numero na funcao: %d \n", numero);
}

int main()
{
    int numero; //escopo da variável numero é main
    numero = 2;

    teste();
    printf("Numero no main: %d \n", numero); //mesmo com a chamada da função o valor de numero não é alterado
}