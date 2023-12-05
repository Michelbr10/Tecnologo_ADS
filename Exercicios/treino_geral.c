#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_VETOR 10
#define TAM_NOME 31
#define TAM_CPF 12
#define TAM_TEL 13

struct Nodo
{
    char nome[TAM_NOME];
    char cpf[TAM_CPF];
    char telefone[TAM_TEL];
    float valor;
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

void lerString(char * strings, int tamanho)
{
    fflush(stdin);
    fgets(strings, tamanho, stdin);
}

struct Nodo * venda()
{
    struct Nodo * nodo = (struct Nodo *) malloc(sizeof(struct Nodo));
    printf("Insira o nome: ");
    lerString(nodo->nome, TAM_NOME);
    printf("Insira o CPF: ");
    lerString(nodo->cpf, TAM_CPF);
    printf("Insira o telefone: ");
    lerString(nodo->telefone, TAM_TEL);
    printf("Insira o valor da venda: ");
    scanf("%f", &nodo->valor);

    return nodo;
}

int main()
{
    struct Lista * minha_lista = criar();
    int opcao;
    do 
    {
        printf("\nSelecione uma opcao - (1)venda (2)sair: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                struct Nodo * meu_nodo = venda();
                meu_nodo->proximo = minha_lista->inicio;
                minha_lista->inicio = meu_nodo;
                minha_lista->tamanho++;
                printf("\nNome: %s\nCPF: %s\nTelefone: %s\nValor da compra: %.2f", minha_lista->inicio->nome, minha_lista->inicio->cpf, minha_lista->inicio->telefone, minha_lista->inicio->valor);
                break;
            case 2:
                break;
            default: 
                printf("Erro!");
        }
    } while (opcao != 2);

    struct Nodo * percorrer = minha_lista->inicio;
    for(int i = 0; percorrer != NULL; i++)
    {
        printf("Nome: %s\n", percorrer->nome);
        percorrer = percorrer->proximo;
    }

    return 0;
}