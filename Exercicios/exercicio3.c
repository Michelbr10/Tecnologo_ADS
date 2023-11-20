#include <stdio.h>

int chama_primo(int numero)
{
    return verifica_primo(numero, 2);
}

int verifica_primo(int numero, int parada)
{
    if (numero == parada)
    {
        return 1;
    } 
    else
    {
        if ((numero % parada) == 0)
        {
            return 0;
        } 
        else
        {
            return verifica_primo(numero, parada + 1);
        }
    }
}

int main()
{
    int num, resultado;
    printf("Digite um numero: ");
    scanf("%d", &num);
    resultado = chama_primo(num);
    if (resultado)
    {
        printf("O numero e primo");
    } 
    else
    {
        printf("O numero nao e primo");
    }
    return 0;
}