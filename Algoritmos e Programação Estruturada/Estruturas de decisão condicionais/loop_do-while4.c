#include <stdio.h>

int main()
{
    int numero_de_notas = 0, condicao;
    float nota, media = 0.0;

    do
    {
        printf("Informe a nota: ");
        scanf("%f", &nota);
        media += nota;
        numero_de_notas ++;
        printf("Digite (1) para continuar ou (2) para sair: ");
        scanf("%d", &condicao);
    } while (condicao != 2);

    media /= (float) numero_de_notas;
    printf("Sua media e: %.2f", media);
    return 0;
}