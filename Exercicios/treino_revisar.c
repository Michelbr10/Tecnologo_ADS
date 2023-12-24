#include <stdio.h>

int variavel_global = 10;

int main()
{
    while(variavel_global > 0){
        printf("Variavel Global: %d\n", variavel_global);
        variavel_global--;
    }
    return 0;
}