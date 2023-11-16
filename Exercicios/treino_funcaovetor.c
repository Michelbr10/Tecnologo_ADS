#include <stdio.h>
#include <stdlib.h>

int* retorna_vetor()
{
    static int vet[6] = {5, 22, 13, 44, 34, 55};
    return vet;
}

int* alocacao_memoria(int tamanho)
{
    int *memoria = malloc(tamanho * sizeof(int));
    return memoria;
}


int main()
{
    int *novo_vetor = retorna_vetor();

    int *alocar = alocacao_memoria(10);

    for (int i = 0; i < 6; i++)
    {
        printf("%d \n", novo_vetor[i]);
    }

    for (int n = 0; n < 10; n++)
    {
        alocar[n] = rand() % 100;
        printf("Valor: %d\n", alocar[n]);
    }
    return 0;
}