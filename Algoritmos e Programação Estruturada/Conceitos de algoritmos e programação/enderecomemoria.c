#include <stdio.h>

int main()
{
    //criando duas variáveis
    char nome[] = "Michel";
    int idade = 18;
    //printando os valores atribuidos
    printf("Variavel 1: %s \n", nome);
    printf("Variavel 2: %i \n", idade);
    //printando o endereço da memória usando o especificador '%x' que exibe valores hexadecimais e '&variavel' que exibe retorna o endereço da variável
    printf("Endereco na memoria da variavel nome: %x \n", &nome);
    printf("Endereco na memoria da variavel idade: %x \n", &idade);
}