#include <stdio.h>

int soma_recursiva(int valor)
{
    if (valor == 0)
    {
        return valor;
    } else
    {
        return valor += soma_recursiva(valor - 1);
    }
}


int main()
{
    int numero;
    printf("Insira um numero para somar com os antecessores: ");
    scanf("%d", &numero);

    int resultado = soma_recursiva(numero);
    printf("O valor da funcao e: %d\n", resultado);

    return 0;
}