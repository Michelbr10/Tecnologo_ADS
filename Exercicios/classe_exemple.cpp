#include <iostream>
#include <string>
using namespace std;

class Carro {
    public:
        string marca = "Nissan";
        string modelo;
        string cor;
        float quilometragem;
        float combustivel = 100;
        float autonomia;

        void andar(float km_rodado){
            quilometragem += km_rodado;
            nivel_combustivel(km_rodado);
        }

        void nivel_combustivel(float km_rodado){
            float nivel = km_rodado / autonomia;
            combustivel -= nivel;
        }
};

int main(){
    Carro meucarro;
    Carro seucarro;

    meucarro.modelo = "Skyline";
    meucarro.cor = "Azul";
    meucarro.quilometragem = 15000;
    meucarro.autonomia = 12;

    seucarro.modelo = "GTR";
    seucarro.cor = "Branco";
    seucarro.quilometragem = 35000;
    seucarro.autonomia = 8;

    cout << endl;

    meucarro.andar(500);
    cout << meucarro.modelo << endl;
    cout << "KM Rodados: " << meucarro.quilometragem << endl;
    cout << "Nivel Combustivel: " << meucarro.combustivel << endl;

    cout << endl;

    cout << seucarro.modelo << endl;
    seucarro.andar(500);
    cout << "KM Rodados: " << seucarro.quilometragem << endl;
    cout << "Nivel Combustivel: " << seucarro.combustivel << endl;

    return 0;
}