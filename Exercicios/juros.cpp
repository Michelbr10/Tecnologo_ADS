#include <iostream>
#include <cmath>
using namespace std;

class Juros_Compostos {
    public:
        float capital_inicial;
        float taxa_juros;
        float tempo;

        float valor_futuro(){
            float futuro = capital_inicial* std::pow(1 + taxa_juros, tempo);
            return futuro;
        }

        float valor_presente(){
            float presente = capital_inicial / std::pow(1 + taxa_juros, tempo);
            return presente;
        }
};

int main(){
    Juros_Compostos investimento;

    investimento.capital_inicial = 100000;
    investimento.taxa_juros = 0.01;
    investimento.tempo = 120;
    
    cout << "Valor futuro: " << investimento.valor_futuro() << endl;
    cout << "Valor presente: " << investimento.valor_presente() << endl;
    return 0;
}