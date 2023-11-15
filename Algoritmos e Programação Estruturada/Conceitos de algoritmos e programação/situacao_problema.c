#include <stdio.h>
//definindo uma contante com o tamanho máximo do nome do cliente
#define TAM_NOME_CLIENTE 100
//criando uma struct com nome e idade do cliente
struct cliente {
    char nome[TAM_NOME_CLIENTE];
    int idade;
};

int main(void){
    struct cliente cli;
    int classificacao_filme;
    
    printf("\n Informe o nome do cliente: ");
    fflush(stdin);
    fgets(cli.nome, TAM_NOME_CLIENTE, stdin);
    
    printf("\n Informe a idade do cliente: ");
    scanf("%d", &cli.idade);
    
    printf("\n Informe a classificação do filme: ");
    scanf("%d", &classificacao_filme);
    
    printf("\n Cliente: %s", cli.nome);
    printf("\n Idade: %d anos", cli.idade);
    printf("\n Classificação do filme: %d anos", classificacao_filme);

    if (cli.idade < classificacao_filme)
    {
        printf("O filme não é recomendado para sua faixa etaria! \n");
    }
    else
    {
        printf("O filme é recomendado para sua faixa etaria. Bom filme! \n");
    }
}
