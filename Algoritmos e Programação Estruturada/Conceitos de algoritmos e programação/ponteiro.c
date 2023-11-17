#include <stdio.h>

int main()
{
    //declarando variável e ponteiro, e atribuindo valores
    int ano = 1996;
    int *ponteiro_ano = &ano; //ponteiro apontando para o ano
    int vetor[5] = {10, 13, 18, 24, 33};
    
    //imprimindo o endereço do ponteiro
    printf("Endereco da variavel: %p \n", ponteiro_ano);
    //imprimindo o conteúdo da variável em que aponta o ponteiro
    printf("Conteudo da variavel: %i \n", *ponteiro_ano);
    //imprimindo o endereço na memória do próprio ponteiro
    printf("Endereco do ponteiro: %p \n", &ponteiro_ano);

    return 0;
}