#include<stdio.h>

void inserir(int vetor[], int tamanho)
{
    for(int i = 0; i < tamanho; i++){
        printf("Digite o valor %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void imprimir(int vetor[], int tamanho)
{
    for(int i = 0; i < tamanho; i++){
        printf("Posicao[%d] = %d \n", i, vetor[i]);
    }
}

int main()
{
    int numeros[3];
    printf("Preenchendo o vetor... \n");
    inserir(numeros, 3);
    printf("Os valores do vetor: \n");
    imprimir(numeros, 3);
    return 0;
}
