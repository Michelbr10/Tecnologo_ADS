#include <stdio.h>
#include <string.h>
//criando uma struct automóvel com modelo, ano e valor
struct automovel
{
    char modelo[10];
    int ano;
    float valor;
};

int main()
{
    //criando uma variável meucarro que recebe a struct automovel como tipo
    struct automovel meucarro;
    //atribuindo valores digitados a struct
    strcpy(meucarro.modelo, "Fiat Uno"); //para atribuir uma string a struct
    meucarro.ano = 2015;
    meucarro.valor = 100000;

    //imprimindo os valores da struct
    printf("Modelo: %s \n", meucarro.modelo);
    printf("Ano: %i \n", meucarro.ano);
    printf("Valor: %.2f \n", meucarro.valor);
}