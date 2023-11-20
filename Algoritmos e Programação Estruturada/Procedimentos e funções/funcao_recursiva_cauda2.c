#include <stdio.h>
/*
função "chama_recursao()" criada sem parâmetros, apenas para chamar a "soma_recursiva()" e passando o parâmetro 0
*/
int chama_recursao()
{
    return soma_recursiva(0); //passa o parâmetro da soma como zero
}
/*
é criado um parâmetro na função "soma_recursiva(int soma)" para armazenar a soma, 
assim podemos retornar o valor diretamente, sem retornar valores para a função que chamou.
*/
int soma_recursiva(int soma) 
{  
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);
    soma += num;

    if (num != 0)
    {
        return soma_recursiva(soma); //caso o valor digitado seja diferente de zero, ele passa o valor de soma como parâmetro
    } else
    {
        return soma; //retorna o valor acumulado em soma
    }
}

int main()
{
    int resultado  = chama_recursao(); //
    printf("\nA soma dos numeros e: %d \n", resultado);
    return 0;
}