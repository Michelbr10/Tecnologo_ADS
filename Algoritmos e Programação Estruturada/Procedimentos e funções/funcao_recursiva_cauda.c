#include<stdio.h>
int fatorialCauda(int fatorial)
{
    return fatorialAux(fatorial, 1);
}

int fatorialAux(int fatorial, int parada)
{
    if (fatorial != 1)
    {
        return fatorialAux(fatorial - 1, parada * fatorial);
    } else 
    {
        return parada;
    }
}

int main()
{
    int fatorial, resultado;
    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &fatorial);

    resultado = fatorialCauda(fatorial);
    printf("\nResultado do fatorial = %d", resultado);

    return 0;
}
