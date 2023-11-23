#include <stdio.h>
#include <stdlib.h>

typedef struct nos_lista {
    int valor;
    struct nos_lista *proximo;
} NosLista;

typedef struct lista_ligada {
    NosLista *inicio;
} ListaLigada;

void inserir(ListaLigada *lista, int valor) {
    NosLista *novo_no = (NosLista *) malloc(sizeof(NosLista));
    novo_no->valor = valor;
    novo_no->proximo = NULL;

    if (lista->inicio == NULL) {
        lista->inicio = novo_no;
    } else {
        NosLista *aux = lista->inicio;
        while (aux->proximo != NULL) {
            aux = aux->proximo;
        }
        aux->proximo = novo_no;
    }
}

int main() {
    ListaLigada *lista = (ListaLigada *) malloc(sizeof(ListaLigada));
    lista->inicio = NULL;

    inserir(lista, 10);
    inserir(lista, 20);
    inserir(lista, 30);

    NosLista *aux = lista->inicio;
    while (aux != NULL) {
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }

    return 0;
}