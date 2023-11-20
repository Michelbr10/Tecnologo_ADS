#include <stdio.h>

float media(int vetor[], int tamanho)
{
    float soma = 0, media = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }
    media = soma / tamanho;
    return media;
}

float mediana(int vetor[], int tamanho)
{
    float mediana;
    if (tamanho % 2 == 0)
    {
        int meio = tamanho / 2;
        mediana = ((float)(vetor[meio - 1] + vetor[meio]) / 2);
    } else
    {
        mediana = vetor[(int)(tamanho / 2)];
    }
    return mediana;
}

int main()
{
    int vetor_impar[5] = {1, 2, 3, 4, 5};
    int vetor_par[6] = {1, 2, 3, 4, 5, 6};

    printf("Vetor impar media e: %.2f \n", media(vetor_impar, 5));
    printf("Vetor impar a mediana e: %.2f \n", mediana(vetor_impar, 5));

    printf("Vetor par media e: %.2f \n", media(vetor_par, 6));
    printf("Vetor par a mediana e: %.2f \n", mediana(vetor_par, 6));
    
    return 0;
}