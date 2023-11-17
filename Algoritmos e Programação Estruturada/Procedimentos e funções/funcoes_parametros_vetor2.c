#include <stdio.h>
#include <stdlib.h>
/*
Função de impressão de vetores, percorre um vetor e imprime seus valores.
Recebe como parâmetros um vetor e o seu tamanho(número de elementos).
*/
void imprime_vetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++) {
        printf("Posicao: %d Valor: %d\n", i, vetor[i]);
    }
}
/*
Função que atribui valores ao vetor passado como parâmetro percorrendo sua extensão.
Recebe como parâmetros um vetor e o seu tamanho(número de elementos).
*/
void insere_valor_vetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++) {
        printf("Adicone um numero: ");
        scanf("%d", &vetor[i]);
    }
}
/*
Função que aloca dinamicamente a memória de acordo o número de elementos de um vetor.
Recebe como parâmetro o tamanho do vetor(número de elementos que o vetor terá)
*/
int* alocar_memoria(int tamanho)
{
    int *memoria = (int *) malloc(sizeof(int) * tamanho);
    return memoria;
}

int main()
{
    int *teste_vetor, tamanho_vetor; //declara um ponteiro e o tamanho de vetor como variáveis

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);
    teste_vetor = alocar_memoria(tamanho_vetor); //o ponteiro é passado como parâmetro para alocação de memória

    insere_valor_vetor(teste_vetor, tamanho_vetor); //após alocar a memória o vetor é passado como parâmetro para função atribui valores
    imprime_vetor(teste_vetor, tamanho_vetor); //imprime os valores armazenados no ponteiro(vetor)
    free(teste_vetor); //libera a memória alocada

    return 0;
}