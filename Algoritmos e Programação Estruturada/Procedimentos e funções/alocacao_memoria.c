#include<stdio.h>
#include<stdlib.h>

int* alocar()
{
    int *memoria = (int*) malloc(sizeof(int));
    return memoria;
}

int main()
{
    int *numero = alocar();
    if(numero != NULL) {
        printf("Endereco de memoria alocada = %x \n", numero);
    }
    else {
        printf("Memoria nao alocada");
    }
    return 0;
}