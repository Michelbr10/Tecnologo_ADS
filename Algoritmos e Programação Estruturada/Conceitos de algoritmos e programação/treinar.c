#include <stdio.h>

#define TAMANHO_CHAR 101
#define TAMANHO_CPF 12
#define TAMANHO_TEL 15

struct cadastro
{
    char nome[TAMANHO_CHAR];
    int idade;
    char cpf[TAMANHO_CPF];
    char telefone[TAMANHO_TEL];
};

int main()
{
    struct cadastro criar_conta;
    printf("Digite o seu nome: ");
    fflush(stdin);
    fgets(criar_conta.nome, sizeof(criar_conta.nome), stdin);
    printf("Digite a sua idade: ");
    scanf("%d", &criar_conta.idade);
    printf("Digite o CPF (apenas numeros): ");
    fflush(stdin);
    fgets(criar_conta.cpf, sizeof(criar_conta.cpf), stdin);
    printf("Digite o telefone (sem espacos): ");
    fflush(stdin);
    fgets(criar_conta.telefone, sizeof(criar_conta.telefone), stdin);
    printf("\nNome: %s", criar_conta.nome);
    printf("Idade: %d \n", criar_conta.idade);
    printf("CPF: %s \n", criar_conta.cpf);
    printf("Telefone: %s \n", criar_conta.telefone);
    return 0;
}