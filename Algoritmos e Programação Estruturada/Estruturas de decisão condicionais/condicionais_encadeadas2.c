#include <stdio.h>

int main()
{
    float nota;
    printf("Insira sua nota: ");
    scanf("%f", &nota);
    if (nota >= 6)
    {
        printf("Voce esta aprovado! \n");
    }
    else if (nota >= 5)
    {
        printf("Voce esta de recuperacao! \n");
    }
    else
    {
        printf("Voce foi reprovado! \n");
    }
    return 0;
}