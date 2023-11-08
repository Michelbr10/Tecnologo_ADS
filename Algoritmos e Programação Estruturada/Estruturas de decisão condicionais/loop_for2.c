#include <stdio.h>

int main()
{
    //inicializando e atribuindo contador direto no loop for
    for (int contador = 0; contador <= 10; contador += 2)
    {
        printf("%d \n", contador);
    }
    return 0;
}