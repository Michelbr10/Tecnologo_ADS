#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct listas_ligadas2
{
    char nome[51];
    int idade;
    struct listas_ligadas2 *proximo;
} inicio, *nodo; //criada uma variável para indicar aonde a lista começa, e um ponteiro para manipular os elementos


int main()
{ 
    /*
    Aqui, a variável "inicio" e o ponteiro "nodo" são inicializados. 
    A variável "inicio" tem seu ponteiro "proximo" definido como NULL, 
    indicando que a lista está vazia. Em seguida, o ponteiro "nodo" é 
    atribuído ao endereço da variável "inicio".
    */
    inicio.proximo = NULL; //atribui o valor NULL ao ponteiro "proximo"
    nodo = &inicio; //nodo recebe o endereço da variável inicio, assim podemos manipular os valores pelo nodo

    if (inicio.proximo == NULL)
    {
        printf("A lista esta vazia.\n");
    }

    for (int i = 1; i < 11; i++)
    {
        nodo->proximo = (struct listas_ligadas2 *) malloc(sizeof(struct listas_ligadas2));
        nodo = nodo->proximo;
        //nodo->nome = (char *) malloc(sizeof(char) * 51); //caso tivesse usado um ponteiro para a variável nome, sem especificar o tamanho teria que alocar a memória
        strcpy(nodo->nome, "Michel Douglas");
        nodo->idade = i * 3;
        nodo->proximo = NULL;
    }

    nodo = inicio.proximo;
    while (nodo)
    {
        printf("%s: %d \n", nodo->nome, nodo->idade);
        nodo = nodo->proximo;
    }
    return 0;
}
