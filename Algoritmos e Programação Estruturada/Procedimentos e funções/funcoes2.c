#include <stdio.h>

float quadrado()
{
    float numero;

    printf("Insira um numero: ");
    scanf("%f", &numero);

    return numero * numero;
}


int main()
{
    float resultado;

    resultado = quadrado();
    printf("O quadrado do numero digitado e: %.2f", resultado);

    return 0;
}