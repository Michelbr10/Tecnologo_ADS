#include <stdio.h>

int main()
{
    //inicializando variável contador
    int contador;
    //atribuindo entrada do usuário a variável
    printf("Digite um valor: ");
    scanf("%d", &contador);
    //imprimindo de forma decrecente o número informado pelo usuário
    for (contador; contador > 0; contador--)
    {
        printf("%d \n", contador);
    }
    return 0;
}