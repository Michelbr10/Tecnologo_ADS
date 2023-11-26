#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

struct no_pilha
{
    int valor;
    struct no_pilha * proximo;
};

struct Pilha
{
    struct no_pilha * topo;
    int tamanho;
};

struct Pilha * criar()
{
    struct Pilha * nova_pilha = (struct Pilha *) malloc(sizeof(struct Pilha));
    if (nova_pilha != NULL)
    {
        nova_pilha->topo = NULL;
        nova_pilha->tamanho = 0;
    }
    return nova_pilha;
}

void empilhar(struct Pilha * pilha, int item)
{
    struct no_pilha * novo_no = (struct no_pilha *) malloc(sizeof(struct no_pilha));
    if(novo_no != NULL)
    {
        novo_no->valor = item;
        novo_no->proximo = pilha->topo;
        pilha->topo = novo_no;
        pilha->tamanho++;
    }
}

int desempilhar(struct Pilha * pilha)
{
    struct no_pilha * aux = pilha->topo;
    int elemento = aux->valor;
    pilha->topo = aux->proximo;
    pilha->tamanho--;
    free(aux);
    return elemento;
}

int tamanho(struct Pilha * pilha)
{
    return pilha->tamanho;
}

int topo(struct Pilha * pilha)
{
    struct no_pilha * aux = pilha->topo;
    return aux->valor;
}

bool vazia(struct Pilha * pilha)
{
    assert(pilha != NULL);
    if (pilha->topo == NULL)
    {
        return true;
    }
    return false;
}

void liberar(struct Pilha * pilha)
{
    assert(pilha != NULL);
    while(!vazia(pilha))
    {
        desempilhar(pilha);
    }
    free(pilha);
}

int main()
{
    struct Pilha * minha_pilha = criar();
    int add;

    for (int i = 0; i < 5; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &add);
        empilhar(minha_pilha, add);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", desempilhar(minha_pilha));
    }

    return 0;
}