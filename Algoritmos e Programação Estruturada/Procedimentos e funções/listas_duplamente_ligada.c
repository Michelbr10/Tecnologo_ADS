#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>

struct nos_listas {
    int info;
    struct nos_listas* anterior;
    struct nos_listas* proximo;
};

struct ListaDupla {
    struct nos_listas* inicio;
    struct nos_listas* fim;
    int tamanho;
};

struct ListaDupla* criar() {
    struct ListaDupla* nova_lista = (struct ListaDupla*) malloc(sizeof(struct ListaDupla));
    if (nova_lista != NULL) {
        nova_lista->inicio = NULL;
        nova_lista->fim = NULL;
        nova_lista->tamanho = 0;
    }
    return nova_lista;
}

bool vazia(struct ListaDupla* lista) {
    assert(lista != NULL);     
    if (lista->inicio == NULL) {
        return true;
    } else {
        return false;
    }
}

void inserir (struct ListaDupla* lista, int posicao, int item) {
    assert(lista != NULL);
    assert(posicao >= 0 && posicao <= lista->tamanho);

    struct nos_listas* novo_no = (struct nos_listas*) malloc(sizeof(struct nos_listas));
    novo_no->info = item;
    if (posicao == 0) {
        novo_no->anterior = NULL;
        novo_no->proximo = lista->inicio;
        lista->inicio = novo_no; 
        if (lista->fim == NULL) {
            lista->fim = novo_no;
        } 
    } else if (posicao == lista->tamanho) { 
        novo_no->anterior = lista->fim;
        novo_no->proximo = NULL;
	lista->fim->proximo = novo_no;
        lista->fim = novo_no;    
    } else {
        struct nos_listas* aux = lista->inicio;
        for(int i = 0; i < posicao - 1; i++) {
            aux = aux->proximo;
        }
        novo_no->anterior = aux;
        novo_no->proximo = aux->proximo;
        aux->proximo = novo_no;
    }
    lista->tamanho++; 
}

void imprimir(struct ListaDupla* lista) {
    assert(lista != NULL);
    printf("\nLista: ");
    struct nos_listas* aux = lista->inicio;
    while(aux != NULL) {
        printf("%d ", aux->info);
        aux = aux->proximo;
    }
}

int tamanho(struct ListaDupla* lista) {
    assert(lista != NULL);
    return lista->tamanho;
}

int obter(struct ListaDupla* lista, int posicao) {
    assert(lista != NULL);
    assert(posicao >= 0 && posicao < lista->tamanho);
    struct nos_listas* aux;

    if (posicao == 0) {
        aux = lista->inicio;
    } else if (posicao == lista->tamanho - 1) {
        aux = lista->fim;
    } else {
        aux = lista->inicio;
        for(int i = 0; i < posicao; i++) {
            aux = aux->proximo;
        }
    }
    return aux->info; 
}

int remover(struct ListaDupla* lista, int posicao) {
    assert(vazia(lista) == false);
    assert(posicao >= 0 && posicao < lista->tamanho);
    struct nos_listas* aux = NULL;

    if (posicao == 0) {
        aux = lista->inicio; 
        lista->inicio = aux->proximo;
        if (lista->inicio == NULL) {
            lista->fim = NULL;
        } else {
            lista->inicio->anterior = NULL;        
        }
    } else if (posicao == lista->tamanho - 1) {
        aux = lista->fim;
        lista->fim = aux->anterior;
        lista->fim->proximo = NULL;        
    } else {
        struct nos_listas* ant = NULL;
        aux = lista->inicio;

        for(int i = 0; i < posicao; i++) {
            ant = aux;
            aux = aux->proximo;
        }

        ant->proximo = aux->proximo;
        aux->proximo->anterior = ant;    
    }

    int elemento = aux->info;
    lista->tamanho--;
    free(aux);
    return elemento;
}

void liberar(struct ListaDupla* lista) {
    while(vazia(lista) == false) {
        remover(lista, 0);
    }
    free(lista);
}


int main() {
    struct ListaDupla* minha_lista = criar(); 
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
    liberar(minha_lista);
    return 0;
}

