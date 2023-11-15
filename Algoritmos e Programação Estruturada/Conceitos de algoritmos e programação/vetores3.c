#include <stdio.h>

int main()
{   //o endereço de um vetor é como um ponteiro apontando para o primeiro elemento [0] do vetor
    int vetor_teste[5] = {1, 2, 3, 4, 5};
    int *ponteiro_vetor_teste = vetor_teste;
    //iremos ver que o endereço do vetor teste é o mesmo que do ponteiro do vetor teste, também o do elemento [0] do vetor teste
    printf("\nEndereco do vetor teste: %p", &vetor_teste);
    printf("\nPonteiro do vetor teste: %p", ponteiro_vetor_teste);

    for (int i = 0; i < 5; i++)
    {
        printf("\nPonteiro elemento %d: vetor teste %p", i, &vetor_teste[i]);
    }
    return 0;
}