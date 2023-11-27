#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_VETOR 10
#define TAM_NOME 31

int * vetor_int()
{
    int vetor[TAM_VETOR];
    return vetor;
}

struct Nodo
{
    char nome[TAM_NOME];
    int idade;
    struct Nodo * proximo;
};

struct Lista
{
    struct Nodo * inicio;
    int tamanho;
};

struct Lista * criar()
{
    struct Lista * nova_lista = (struct Lista *) malloc(sizeof(struct Lista));
    if(nova_lista != NULL)
    {
        nova_lista->inicio = NULL;
        nova_lista->tamanho = 0;
    }
    return nova_lista;
}

int main()
{
    struct Lista * minha_lista = criar();
    struct Nodo * elemento = (struct Nodo *) malloc(sizeof(struct Nodo));

    strcpy(elemento->nome, "Michel Douglas");
    elemento->idade = 27;

    minha_lista->inicio = elemento;
    minha_lista->tamanho++;

    printf("Nome: %s \nIdade: %d \n", minha_lista->inicio->nome, minha_lista->inicio->idade);
}