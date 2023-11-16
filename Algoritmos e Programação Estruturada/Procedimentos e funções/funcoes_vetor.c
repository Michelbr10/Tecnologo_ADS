#include <stdio.h>
#include <stdlib.h> //biblioteca para usar rand()

int* gerar_vetor_randomico()
{
    static int vetor[10]; //static não deixa que esse vetor seja alterado, mesmo a função sendo chamada outra vez
    
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 100; //gera numeros aleatorios de 0 a 99 usando "rand() % 100" e atribui ao vetor e sua posição
        printf("\n vetor funcao: %d", vetor[i]);
    }
    printf("\nEndereco do vetor dentro da funcao %p", &vetor); //endereço na memoria do vetor dentro da função
    return vetor;
}

int main()
{
    int *ponteiro_vetor, *ponteiro_vetor2; //cria um ponteiro para depois apontarmos o endereço do vetor
    ponteiro_vetor = gerar_vetor_randomico(); //atribui ao ponteiro o vetor por meio do endereço do vetor criado pela função "gerar_vetor_randomico()"

    for (int n = 0; n < 10; n++)
    {
        printf("\n %i", ponteiro_vetor[n]);
    }
    printf("\nEndereco do vetor passada pela funcao %p", ponteiro_vetor); //endereço na memoria do vetor no main()
    
    //criando novo vetor e chamando a função, veremos que sera atribuido o mesmo endereço do anterior e seus valores
    {
        ponteiro_vetor2 = gerar_vetor_randomico(); //chamando a função outra vez e atribuindo o seu endereço na variável ponteiro_vetor2
        for (int m = 0; m < 10; m++)
        {
            printf("\n %i", ponteiro_vetor2[m]);
        }
        printf("\nEndereco do vetor passada pela funcao %p", ponteiro_vetor2); //ambos endereços são iguais, porque o static não permite que o vetor seja alterado
    }

    return 0;
}