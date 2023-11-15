#include <stdio.h>
#include <stdlib.h>

char* alocar()
{
    char *memoria = (char*) malloc(sizeof(char));
    printf("Tamanho: %d bytes \n", sizeof(*memoria));
    return memoria;
}

int main()
{
    char *nome = alocar();

    if (nome != NULL)
    {
        printf("Endereco de memoria alocada = %x e o tamanho = %d bytes \n", nome, sizeof(*nome));
        printf("Digite um nome: ");
        fflush(stdin);
        fgets(nome, 51, stdin);
    }
    else
    {
        printf("Memoria nao alocada");
    }
    printf("%s", nome);
    return 0;
}