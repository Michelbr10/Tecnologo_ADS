#include <stdio.h>

int printar(int repeticao)
{
    if (repeticao != 0)
    {
        printf("Estou chamando a funcao %d \n", repeticao);
        return printar(repeticao - 1);
    } else
    {
        printf("Ponto de parada: Funcao encerrada! \n");
        return 0;
    }
}

int soma_recursiva()
{  
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);

    if (num != 0)
    {
        return num + soma_recursiva();
    } else
    {
        return 0;
    }
}

int main()
{
    printar(5);
    int resultado  = soma_recursiva();
    printf("\nA soma dos numeros e: %d \n", resultado);
    return 0;
}