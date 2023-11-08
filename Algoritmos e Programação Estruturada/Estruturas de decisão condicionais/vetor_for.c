#include <stdio.h>

#define TAMANHO_VETOR 5 

int main()
{
    int numeros[TAMANHO_VETOR];

    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("Digite um valor para armazenar: ");
        scanf("%d", &numeros[i]);
        printf("O numero digitado foi: %d \n", numeros[i]);
    }
    return 0;
}