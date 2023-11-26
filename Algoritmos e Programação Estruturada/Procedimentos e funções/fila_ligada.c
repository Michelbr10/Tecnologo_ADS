#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

struct no_fila
{
    int valor;
    struct no_fila * proximo;
};

struct Fila
{
    struct no_fila * inicio;
    struct no_fila * fim;
    int tamanho;
};

struct Fila * criar()
{
    struct Fila * fila = (struct Fila *) malloc(sizeof(struct Fila));
    if(fila != NULL)
    {
        fila->inicio = NULL;
        fila->fim = NULL;
        fila->tamanho = 0;
    }
    return fila;
}

void enfileirar(struct Fila * fila, int item)
{
    assert(fila != NULL);
    struct no_fila * novo_no = (struct no_fila *) malloc(sizeof(struct no_fila));
    if(novo_no != NULL)
    {
        novo_no->valor = item;
        novo_no->proximo = NULL;

        if(fila->fim != NULL)
        {
            fila->fim->proximo = novo_no;
        }
        else
        {
            fila->inicio = novo_no;
        }
        fila->fim = novo_no;
        fila->tamanho++;
    }
    
}

int desenfileirar(struct Fila * fila)
{
    assert(fila != NULL);
    assert(fila->inicio != NULL);
    struct no_fila * aux = fila->inicio;
    int elemento = aux->valor;
    fila->inicio = aux->proximo;
    if(fila->inicio == NULL)
    {
        fila->fim = NULL;
    }
    fila->tamanho--;
    free(aux);
    return elemento;
}

bool vazia(struct Fila * fila)
{
    assert(fila != NULL);
    if(fila->inicio == NULL)
    {
        return true;
    }
    return false;
}

int tamanho(struct Fila * fila)
{
    assert(fila != NULL);
    return fila->tamanho;
}

int inicio(struct Fila * fila)
{
    assert(fila != NULL);
    assert(fila->inicio != NULL);
    return fila->inicio->valor;
}

void liberar(struct Fila * fila)
{
    assert(fila != NULL);
    while(!vazia(fila))
    {
        desenfileirar(fila);
    }
    free(fila);
}

int main()
{
    struct Fila * minha_fila = criar();
    enfileirar(minha_fila, 1);
    enfileirar(minha_fila, 2);
    enfileirar(minha_fila, 3);
    printf("Tamanho: %d ", tamanho(minha_fila));

    printf("\nMinha fila: [%d ", desenfileirar(minha_fila));
    printf("%d ", desenfileirar(minha_fila));
    printf("%d]", desenfileirar(minha_fila));

    printf("\nEsta vazia (1 - Sim, 0 - Nao)? %d ", vazia(minha_fila));

    liberar(minha_fila);
}