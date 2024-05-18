//Bibliotecas
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Classes
class Juros_Compostos {
    public:
        //Atributos
        float capital_inicial;
        float taxa_juros;
        float tempo;
        //Métodos
        float valor_futuro(){
            float futuro = capital_inicial* std::pow(1 + taxa_juros, tempo);
            return futuro;
        }

        float valor_presente(){
            float presente = capital_inicial / std::pow(1 + taxa_juros, tempo);
            return presente;
        }
};

//Funções
void exibe_retornos(string tipo_calculo, float valor){
    cout << setprecision(2) << fixed;
    cout << tipo_calculo << valor << endl;
}

float guarda_valores(string parametro){
    float valor;
    cout << parametro << endl;
    cin >> valor;
    return valor;
}

int main(){
    Juros_Compostos investimento;

    investimento.capital_inicial = guarda_valores("Capital inicial: ");
    investimento.taxa_juros = guarda_valores("Taxa de juros: ");
    investimento.tempo = guarda_valores("Tempo em meses: ");
    
    exibe_retornos("Valor presente: ", investimento.valor_presente());
    exibe_retornos("Valor futuro: ", investimento.valor_futuro());

    return 0;
}