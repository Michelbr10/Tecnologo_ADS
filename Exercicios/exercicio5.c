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

bool combina(char c1, char c2)
{
    switch(c1)
    {
        case ')': return c2 == '(';
        case ']': return c2 == '[';
        case '}': return c2 == '{';
        default: return false;
    }
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

bool validar(char exp[], int tamanho)
{
    struct Pilha * pilha = criar();
    for (int i = 0; i < tamanho; i++)
    {
        char c = exp[i];
        switch(c)
        {
            case '(':
            case '{':
            case '[': empilhar(pilha, c); break;
            case ')':
            case '}':
            case ']':{
                if(vazia(pilha)) return false;
                if(combina(c, desempilhar(pilha)) == false) return false;
            }
        }
    }
    return vazia(pilha);
}


int main()
{
    char exemplo[] = "{([])}";
    printf("Resultado (0 = incorreta; 1 = correta): %d\n", validar(exemplo, 6));

    return 0;
}