#include <stdio.h>

int main()
{
    //declaração e atribuição das variáveis
    int idades[3] = {0, 0, 0};
    int media = 0;
    //iteração para atribui os valores digitados no teclado as variáveis
    for (int i = 0; i < 3; i++)
    {
        printf("Insira a idade: \n");
        scanf("%i", &idades[i]);
    }
    //iteração para imprimir os valores digitados e atribuir a soma das idades a média
    for (int n = 0; n < 3; n++)
    {
        printf("Idade pessoa %i :%i \n", n, idades[n]);
        media += idades[n];
    }
    //divide a soma das idades pelo número de elementos e imprime a média
    media /= 3;
    printf("Media de idades: %i \n", media);
    
    return 0;
}