#include <stdio.h>

int main()
{
    //declaração e atribuição da variável condicao para parada
    int condicao = 0;
    float nota;
    printf("\nDigite a nota final do aluno: "); 
    scanf("%f", &nota);
    //verifica se a condicao é diferente de 1, enquanto for diferente estará no loop
    while (condicao != 1)
    {
        //verifica se a nota é menor 0 ou maior que 10
        if(nota < 0 || nota > 10)
        {
            printf("\nNota invalida! Digite a nota final do aluno: "); 
            scanf("%f", &nota); 
        }
        else
        {
            printf("\nNota valida.\n");
            if (nota >= 6)
            {
                printf("Voce esta aprovado(a)!");
            } else if (nota >= 5)
            {
                printf("Voce esta em recuperacao!");
            } else
            {
                printf("Voce foi reprovado(a)!");
            }
            condicao = 1; //quando a nota for válida é atribuido a condicao o valor 1, que encerra o loop. 
        }
    }
    return 0;
}