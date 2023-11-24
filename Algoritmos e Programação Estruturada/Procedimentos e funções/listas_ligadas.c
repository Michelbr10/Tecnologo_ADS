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
    assert(lista != NULL); //verifica se a lista não é diferente de NULL, se for não for, encerra o programa
    assert(posicao >= 0 && posicao <= lista->tamanho); //verifica se a posição da lista é válida, se não for, encerra o programa

    struct nos_lista* novo_no = (struct nos_lista*) malloc(sizeof(struct nos_lista)); //cria um ponteiro do tipo "struct nos_lista" e faz alocação dinamica para ele
    novo_no->idade = item; //atribui a variável em novo_no o valor recebido por item

    if (posicao == 0) //verifica se a posição passada como argumento é 0
    {
        novo_no->proximo = lista->inicio; //o novo_no->proximo vai apontar para o no que antes era o primeiro elemento da lista
        lista->inicio = novo_no; //o lista->inicio irá apontar agora para o novo_no, assim ele se torna o primeiro elemento da lista
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

int tamanho(struct Lista * lista)
{
    assert(lista != NULL);
    return lista->tamanho;
}

int obter(struct Lista * lista, int posicao)
{
    assert(lista != NULL);
    struct nos_lista * aux = lista->inicio;
    for (int i = 0; i < posicao; i++)
    {
        aux = aux->proximo;
    }
    return aux->idade;
}

int remover(struct Lista * lista, int posicao)
{
    assert(!vazia(lista));
    assert(posicao >= 0 && posicao < lista->tamanho);

    struct nos_lista * aux = lista->inicio;
    struct nos_lista * anterior = NULL;
    for (int i = 0; i < posicao; i++)
    {
        anterior = aux;
        aux = aux->proximo;
    }
    if (anterior == NULL)
    {
        lista->inicio = aux->proximo;
    }
    else
    {
        anterior->proximo = aux->proximo;
    }
    int elemento = aux->idade;
    lista->tamanho--;
    free(aux);
    return elemento;
}

void liberar(struct Lista * lista)
{
    while(!vazia(lista))
    {
        remover(lista, 0);
    }
    free(lista);
}

int posicao_menor(struct Lista * lista)
{
    struct nos_lista * aux = lista->inicio;
    int menor = aux->idade, posicao;
    for (int i = 0; i < lista->tamanho; i++)
    {
        if (aux->idade < menor)
        {
            menor = aux->idade;
            posicao = i;
        }
        else
        {
            continue;
        }
        aux = aux->proximo;
    }
    return menor;
}

bool existe(struct Lista * lista, int item)
{
    assert(lista != NULL);
    struct nos_lista * aux = lista->inicio;
    while (aux != NULL)
    {
        if (aux->idade == item)
        {
            return true;
        }
        aux = aux->proximo;
    }
    return false;
}

int main()
{
    struct Lista* minha_lista = criar();

    inserir(minha_lista, 0, 5); //[5]
    inserir(minha_lista, 1, 2); //[5, 2]
    inserir(minha_lista, 2, 7); //[5, 2, 7]
    inserir(minha_lista, 3, 9); //[5, 2, 7, 9]
    inserir(minha_lista, 4, 15); //[5, 2, 7, 9, 15]
    inserir(minha_lista, 3, 4); //[5, 2, 7, 4, 9, 15]
    inserir(minha_lista, 2, 13); //[5, 2, 13, 7, 4, 9, 15]
    inserir(minha_lista, 4, 21); //[5, 2, 13, 7, 21, 4, 9, 15]
    imprimir(minha_lista);

    printf("\nElemento removido: %d \n", remover(minha_lista, 0)); //[2, 13, 7, 21, 4, 9, 15]
    printf("Elemento removido: %d \n", remover(minha_lista, 5)); //[2, 13, 7, 21, 4, 15]
    imprimir(minha_lista);

    printf("\nTamanho da lista: %d \n", tamanho(minha_lista));
    printf("Obtem o elemento posicao 2(7): %d \n", obter(minha_lista, 2));

    printf("O menor elemento e: %d e posicao %d \n", posicao_menor(minha_lista));
    liberar(minha_lista);

    return 0;
}