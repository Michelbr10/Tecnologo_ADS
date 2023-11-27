#include <stdio.h>
#include <stdlib.h>

int * vetor(int tamanho) {
    int * novo_vetor = malloc(tamanho * sizeof(int)); // aqui você deve alocar memória na heap, e não na stack, para que ela possa ser acessada em outro escopo
    for (int i = 0; i < tamanho; i++)
        novo_vetor[i] = 0;
    return novo_vetor;
}

int main()
{
    int * meu_vetor = vetor(10);
    for(int i = 0; i < 10; i++)
    {
        printf("%d \n", meu_vetor[i]);
    }
    return 0;
}