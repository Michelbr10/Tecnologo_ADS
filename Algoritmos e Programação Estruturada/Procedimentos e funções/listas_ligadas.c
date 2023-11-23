#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

struct nos_lista //estrutura dos elementos da lista, contém o valor armazenado e o endereço do próximo elemento
{
    int idade;
    struct nos_lista* proximo;
};

struct Lista //armazena o endereço da lista e o seu tamanho
{
    struct nos_lista* inicio;
    int tamanho;
};

struct Lista* criar() //cria uma lista e faz a alocação dinâmica de memória
{
    struct Lista* nova_lista = (struct Lista*) malloc(sizeof(struct Lista)); //cria um ponteiro e faz alocação de acordo o tamanho dos elementos da struct lista
    if (nova_lista != NULL) //se o ponteiro alocado for diferente de  null, a alocação foi realizada
    {
        nova_lista->inicio = NULL; //o primeiro elemento da lista precisa ser null, para verificar se está vazia
        nova_lista->tamanho = 0; //atribui o tamanho 0, porque não temos elementos na nossa lista
    }
    return nova_lista;
}

bool vazia(struct Lista* lista)
{
    assert(lista != NULL); //faz uma verificação, se for NULL interrompe
    if (lista->inicio == NULL) //também pode ser if(primeira_lista->tamanho == 0)
    {
        return true;
    } 
    else
    {
        return false;
    }
}

void inserir(struct Lista* lista, int posicao, int item)
{
    assert(lista != NULL);
    assert(posicao >= 0 && posicao <= lista->tamanho);

    struct nos_lista* novo_no = (struct nos_lista*) malloc(sizeof(struct nos_lista));
    novo_no->idade = item;
    if (posicao == 0)
    {
        novo_no->proximo = lista->inicio;
        lista->inicio = novo_no;
    }
    else
    {
        struct nos_lista* aux = lista->inicio;
        for (int i = 0; i < posicao - 1; i++)
        {
            aux = aux->proximo;
        }
        novo_no->proximo = aux->proximo;
        aux->proximo = novo_no;
    }
    lista->tamanho++;
}

void imprimir(struct Lista* lista)
{
    assert(lista != NULL);
    printf("\nLista: ");
    struct nos_lista* aux = lista->inicio;
    for (int i = 0; i < lista->tamanho; i++)
    {
        printf("%d ", aux->idade);
        aux = aux->proximo;
    }
}

int main()
{
    struct Lista* minha_lista = criar();

    inserir(minha_lista, 0, 5);
    inserir(minha_lista, 0, 3);
    inserir(minha_lista, 2, 6);
    inserir(minha_lista, 3, 7);
    imprimir(minha_lista);
    return 0;
}