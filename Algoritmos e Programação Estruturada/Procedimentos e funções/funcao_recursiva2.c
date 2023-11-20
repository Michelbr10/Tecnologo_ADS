#include <stdio.h>

int fatorial(int numero)
{
    if (numero != 1)
    {
        return numero * fatorial(numero - 1);
    } else
    {
        return numero;
    } 
}

int main()
{
    int numero_fatorial, resultado;
    printf("Digite um numero para saber o fatorial: ");
    scanf("%d", &numero_fatorial);

    resultado = fatorial(numero_fatorial);
    printf("O resultado obtido por meio de recursao foi: %d \n", resultado);

    return 0;
}