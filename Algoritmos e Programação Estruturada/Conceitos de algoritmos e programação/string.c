#include <stdio.h>

int main()
{
    char apelido[11];

    printf("Insira seu apelido: \n");
    scanf("%s", apelido);

    char nome_completo[31];

    printf("Insira seu nome completo: \n");
    fflush(stdin);
    fgets(nome_completo, 31, stdin);

    printf("Seu apelido e: %s \nSeu nome e: %s \n", apelido, nome_completo);

    return 0;
}