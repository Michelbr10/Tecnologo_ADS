#include <stdio.h>

void recursao(int numero)
{
    printf("%d\n", numero);
    numero--;
    if (numero != 0){
        recursao(numero);
    }
    else{
        printf("recursao foi encerrada!\n");
    }
}

int main()
{
    int numero;
    printf("insira um valor: ");
    scanf("%d", &numero);
    recursao(numero);
    return 0;
}