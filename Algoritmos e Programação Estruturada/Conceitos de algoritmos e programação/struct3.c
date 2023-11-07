#include <stdio.h>
#include <string.h>
//criando uma struct automóvel com modelo, ano e valor
struct automovel
{
    char modelo[30];
    int ano;
    float valor;
};

int main()
{
    //criando uma variável meucarro e atribuindo os valores diretamente
    struct automovel meucarro = {"Nissan Skyline", 2012, 100000};

    //imprimindo os valores da struct
    printf("Modelo: %s \nAno: %i \nValor: %.2f \n", meucarro.modelo, meucarro.ano, meucarro.valor);
}