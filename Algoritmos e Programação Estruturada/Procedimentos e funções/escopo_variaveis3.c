#include <stdio.h>

int numero = 10; //variável global

int main()
{
    int numero;
    numero = 2; //quando há duas variáveis com mesmo nome, sempre será levado em conta o escopo

    //para criar um escopo basta usar as chaves
    {
        int numero;
        numero = 5;
        printf("Escopo dentro do main, numero: %d \n", numero);
    }
    printf("Escopo main, numero: %d \n", numero); //a variável numero não sofre alteração

    //para usar o valor da variável global dentro de um escopo, basta criar um novo escopo e referenciar usando extern
    {
        extern int numero;
        printf("Escopo para variavel global, nuemero: %d \n", numero);
    }

}