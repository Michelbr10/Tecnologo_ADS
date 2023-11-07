#include <stdio.h>
//criando uma struct automóvel com modelo, ano e valor
struct automovel
{
    char modelo[50];
    int ano;
    float valor;
};

int main()
{
    //criando uma variável meucarro que recebe a struct automovel como tipo
    struct automovel meucarro;
    //atribuindo valores digitados a struct
    printf("Insira o modelo: ");
    scanf("%s", meucarro.modelo);
    printf("Insira o ano: ");
    scanf("%i", &meucarro.ano);
    printf("Insira o valor: ");
    scanf("%f", &meucarro.valor);
    //imprimindo os valores da struct
    printf("Modelo: %c \n", meucarro.modelo);
    printf("Modelo: %i \n", meucarro.ano);
    printf("Modelo: %f \n", meucarro.valor);
}