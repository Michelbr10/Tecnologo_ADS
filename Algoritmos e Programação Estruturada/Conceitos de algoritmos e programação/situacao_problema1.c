#include <stdio.h>
//definindo uma contante com o tamanho máximo do nome do cliente
#define TAM_NOME_CLIENTE 100
//criando uma struct com nome e idade do cliente
struct cliente {
    char nome[TAM_NOME_CLIENTE];
    int idade;
};

struct filme {
    int classificacao_filme;
    int disponivel;
};

int main(void)
{
    //declaracao da variavel do tipo struct cliente com nome cli, e criando variável classificação_filme
    struct cliente cli;
    struct filme fil;
    //atribuindo valores digitados as variáveis da struct
    printf("\n Informe o nome do cliente: ");
    fflush(stdin);
    fgets(cli.nome, TAM_NOME_CLIENTE, stdin); //atribuindo uma string
    
    printf("\n Informe a idade do cliente: ");
    scanf("%d", &cli.idade); //atribuindo um int
    
    printf("\n Informe a classificacao do filme: ");
    scanf("%d", &fil.classificacao_filme); //atribuindo um int
    
    printf("\n Informe se o filme esta disponivel (1) ou (0) para nao: ");
    scanf("%d", &fil.disponivel); //atribuindo um int

    printf("\n Cliente: %s \n", cli.nome);
    printf(" Idade: %d anos \n", cli.idade);
    printf(" Classificacao do filme: %d anos \n", fil.classificacao_filme);
    printf(" O filme esta disponivel: %d \n", fil.disponivel);
    printf(" O filme pode ser locado %d \n", (fil.disponivel)&&(cli.idade >= fil.classificacao_filme));
    printf(" Anos restantes para idade minima: %d anos \n", (cli.idade < fil.classificacao_filme) * (fil.classificacao_filme - cli.idade));
    //condicional para verificar se o filme é recomendado ou não
    /*
    if (cli.idade < fil.classificacao_filme)
    {
        printf(" O filme nao e recomendado para sua faixa etaria! \n");
    }
    else
    {
        printf(" O filme e recomendado para sua faixa etaria. Bom filme! \n");
    }
    */
}
