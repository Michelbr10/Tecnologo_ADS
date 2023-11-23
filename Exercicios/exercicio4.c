#include <stdio.h> 

int* organiza_vetor(int vetor[], int tamanho)
{
    
}

int main()
{
    int *vetor_organizado;
    int vetor[5] = {3, 2, 1, 5, 4};
    vetor_organizado = organiza_vetor(vetor, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor_organizado[i]);
    }

    return 0;
}