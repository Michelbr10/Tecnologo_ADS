#include <stdio.h>
//função que limpa a entrada de dados do teclado fflush(stdin) e chama o input para inserir dados
void lerString(char strings[], int tamanho)
{
    fflush(stdin); //limpa a entrada do teclado
    fgets(strings, tamanho, stdin); //input de dados
}

int main()
{
    //declaração das variáveis
    char apelido[11], nome_completo[31];

    printf("Insira seu apelido: \n");
    lerString(apelido, 11); //atribuição de valor a variável apelido
    printf("Insira seu nome completo: \n");
    lerString(nome_completo, 31); //atribuição de valor a variável nome_completo

    printf("\n Seu apelido e: %s \n Seu nome e: %s \n", apelido, nome_completo);
    
    return 0;
}