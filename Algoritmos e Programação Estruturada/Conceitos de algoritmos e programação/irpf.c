#include <stdio.h>

#define TAMANHO_LIMITE 51

#define FAIXA_1 1903.99
#define FAIXA_2 2826.66
#define FAIXA_3 3751.06
#define FAIXA_4 4664.69

#define IR_75 0.075
#define IR_15 0.150
#define IR_22 0.225
#define IR_27 0.275

struct cliente
{
    char nome[TAMANHO_LIMITE];
    float salario;
};

float imposto(float salario)
{
    float imposto = 0;

    if (salario < FAIXA_1)
    {
        printf("\nO cliente não precisa declarar IR!");
    }
    else if (salario < FAIXA_2)
    {
        imposto = salario * IR_75 - 158.40;
        printf("\nA sua faixa de IR e %.3f e imposto: %.2f!", IR_75, imposto);
    }
    else if (salario < FAIXA_3)
    {
        imposto = salario * IR_15 - 370.40;
        printf("\nA sua faixa de IR e %.3f e imposto: %.2f!", IR_15, imposto);
    }
    else if (salario < FAIXA_4)
    {
        imposto = salario * IR_22 - 651.73;
        printf("\nA sua faixa de IR e %.3f e imposto: %.2f!", IR_22, imposto);
    }
    else
    {
        imposto = salario * IR_27 - 884.96;
        printf("\nA sua faixa de IR e %.3f e imposto: %.2f!", IR_27, imposto);
    }
    return imposto;
}

int main()
{
    struct cliente dados;
    
    printf("Insira o nome do cliente: ");
    fflush(stdin);
    fgets(dados.nome, 51, stdin);

    printf("Insira o salario: ");
    scanf("%f", &dados.salario);

    imposto(dados.salario);

    return 0;
}