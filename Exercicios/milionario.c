#include <stdio.h>

struct dobrar
{
    int valor;
    int dias;
};


void milionario(int valor, int dias)
{
    while(dias)
    {
        valor *= 2;
        dias--;
    }
    printf("Valor final: %d", valor);
}

int main()
{
    struct dobrar dados;
    printf("Digite um valor: ");
    scanf("%d", &dados.valor);
    printf("Digite o numero de dias: ");
    scanf("%d", &dados.dias);
    milionario(1, 20);
    return 0;
}