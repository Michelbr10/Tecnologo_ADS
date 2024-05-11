#include <iostream>
#include <string>
using namespace std;

class Carro {
    public:
        string modelo;
        string cor;
        float quilometragem;
        float combustivel;
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

    meucarro.modelo = "Ford";
    meucarro.cor = "Azul";
    meucarro.quilometragem = 100;
    meucarro.combustivel = 30;
    meucarro.autonomia = 12;

    cout << meucarro.modelo << endl;
    cout << meucarro.cor << endl;
    cout << meucarro.quilometragem << endl;
    cout << meucarro.combustivel << endl;
    cout << meucarro.autonomia << endl;

    cout << endl;

    meucarro.andar(50);
    cout << "KM Rodados: " << meucarro.quilometragem << endl;
    cout << "Nivel Combustivel: " << meucarro.combustivel << endl;

    return 0;
}