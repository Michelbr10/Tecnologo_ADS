#include <stdio.h>
//cria duas constantes
#define TAMANHO_NOME 51
#define TAMANHO_CPF_TELEFONE 12
//criando uma struct (variável composta heterogênea)
struct cadastro
{
    char nome[TAMANHO_NOME];
    char cpf[TAMANHO_CPF_TELEFONE];
    char telefone[TAMANHO_CPF_TELEFONE];
};
//função para limpar a entrada do teclado e salvar a entrada numa variável
void lerString(char local[], int tamanho)
{
    fflush(stdin); //limpa a entrada do teclado
    fgets(local, tamanho, stdin); //salva o que for digitado em local(variável)
}

int main()
{
    int opcao;
    do {
        struct cadastro novo;
        printf("\nDigite (1) para cadastro (2) para sair: ");
        opcao = 0;
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Digite o nome: ");
                lerString(novo.nome, TAMANHO_NOME);
                printf("Digite o CPF: ");
                lerString(novo.cpf, TAMANHO_CPF_TELEFONE);
                printf("Digite o telefone: ");
                lerString(novo.telefone, TAMANHO_CPF_TELEFONE);
                printf("\nCadastro realizado com suceso! \n Nome: %s CPF: %s Telefone: %s", novo.nome, novo.cpf, novo.telefone);
                break;
            case 2:
                printf("\n Saindo...");
                break;
            default:
                printf("Comando invalido!");
                break;
        }
    } while (opcao != 2);
    return 0;
}