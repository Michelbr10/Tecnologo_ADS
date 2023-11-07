#include <stdio.h>

int main()
{
    //iniciando variáveis e atribuindo valores
    int a = 10, b = 5, x = 5, y = 2;
    //printando as comparações booleanas
    printf("Negacao: a igual b: %d \n", !((a == b) && (x == y))); //a == b false, mas retorna true porque usamos o operador de negação
    printf("Conjuncao: a maior que b, x maior que y: %d \n", ((a > b) && (b == x))); //a > b true, b == x true, o resultado é true
    printf("Desjuncao: a menor que b ou x maior que y: %d \n", ((a < b) || (x > y))); //a < b false, x > y true, como uma das comparações é true, o resultado é true

    return 0;
}