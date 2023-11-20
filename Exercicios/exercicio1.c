#include <stdio.h>

int main()
{
    //declaração e atribuição da variável condicao para parada
    int condicao = 0;
    float nota[4], media;

    for (int i = 0; i < 4; i++)
    {
        do
        {
            printf("\nDigite a nota %d do aluno: ", i); 
            scanf("%f", &nota[i]);
        } while (nota[i] < 0 || nota[i] > 10);
        
        media += nota[i];
    }
    //calculo da média
    media /= 4;
    //verifica se a condicao é diferente de 1, enquanto for diferente estará no loop
    while (condicao != 1)
    {
        //verifica se a nota é menor 0 ou maior que 10
        if(media < 0 || media > 40)
        {
            printf("\nNotas invalidas!"); 
        }
        else
        {
            printf("\nNotas validas.\n");
            if (media >= 6)
            {
                printf("Voce esta aprovado(a)!");
            } else if (media >= 5)
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