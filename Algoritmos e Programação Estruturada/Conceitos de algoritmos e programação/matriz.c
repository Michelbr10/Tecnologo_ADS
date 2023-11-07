#include <stdio.h>

int main()
{
    //iniciando uma matriz de 3 linha e 2 colunas
    float temperaturas[3][2];
    //atribuindo os dias nas linhas da coluna 0
    temperaturas[0][0] = 1;
    temperaturas[1][0] = 2;
    temperaturas[2][0] = 3;
    //atribuindo a temperatura as linhas da coluna 1
    temperaturas[0][1] = 25;
    temperaturas[1][1] = 28;
    temperaturas[2][1] = 35;
    //imprimindo o dia e a temperatura
    for (int i = 0; i < 3; i++)
    {
        printf("Temperatura em Dia: %1.f - %.1f \n", temperaturas[i][0], temperaturas[i][1]);
    }

    return 0;
}