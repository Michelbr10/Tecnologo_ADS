#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ponteiro; //inicializa um ponteiro
    int numero, i;

    printf("Entre com o numero de elementos: ");
    scanf("%d",&numero);

    ponteiro = (int*) malloc(numero * sizeof(int)); //aloca de acordo o numero de elementos multiplicado pelo tamanho necessário para armazenar um int
    for (i = 0; i < numero; i++)
    {
        printf("%d \n", ponteiro[i]);
        ponteiro[i] = rand() % 100; //atribui ao ponteiro valores aleatórios
    }
    printf("%p \n", sizeof(ponteiro));

    for (i = 0; i < numero; i++)
    {
        printf("Numero: %d Posicao: %d Endereco: %p \n", ponteiro[i], i, &ponteiro[i]); //imprime os valores
    }
    free(ponteiro);
    return 0;
}