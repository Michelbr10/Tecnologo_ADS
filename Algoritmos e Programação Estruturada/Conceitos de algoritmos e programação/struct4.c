#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 31
//criando uma struct automóvel com modelo, ano e valor
struct automovel
{
    char modelo[TAMANHO_MAX];
    int ano;
    float valor;
};

int main()
{
    //criando uma variável meucarro que recebe a struct automovel como tipo
    struct automovel meucarro;
    //atribuindo valores digitados a struct
    printf("Insira o modelo: ");
    fflush(stdin);
    fgets(meucarro.modelo, TAMANHO_MAX, stdin);
    printf("Insira o ano: ");
    scanf("%d", &meucarro.ano);
    printf("Insira o valor: ");
    scanf("%f", &meucarro.valor);

    //imprimindo os valores da struct
    printf("\nModelo: %s", meucarro.modelo);
    printf("Ano: %i \n", meucarro.ano);
    printf("Valor: %.2f \n", meucarro.valor);
}