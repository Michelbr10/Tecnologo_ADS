#include <stdio.h>

int somar(int x, int y)
{
    return x + y;
}

int main()
{
    int num1, num2, resultado1, resultado2;
    num1 = 2;
    num2 = 3;

    resultado1 = somar(2, 3);
    resultado2 = somar(num1, num2);

    printf("Soma passando valores: %d \n", resultado1);
    printf("Soma passando referencia: %d \n", resultado2); 

    return 0;
}