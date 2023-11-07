#include <stdio.h>

int main()
{
    //criando vetor de 5 elementos, mas atribuimos apenas 3 valores
    int idades[5] = {18, 20, 27};
    //atribuimos os 2 valores faltantes dos 5
    idades[3] = 55;
    idades[4] = 38;
    //iterando sobre a var i, printando elementos do vetor
    for (int i = 0; i < 5; i++)
    {
        printf("%i \n", idades[i]);
    }
    return 0;
}