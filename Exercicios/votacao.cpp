#include <iostream>
using namespace std;
//função que verifica a entrada do voto, valida a entrada e retorna o voto
int votar(string cargo){
    int voto;
    do{
        if(voto < 0 || voto > 1){
            cout << "VOTO INVALIDO!" << endl;
        }
        cout << cargo << " - Digite seu voto(1-SIM, 0-NAO)" << endl;
        cin >> voto;
    }while(voto < 0 || voto > 1);
    cout << "VOTO VALIDADO!" << endl;
    return voto;
}

int main(){
    int DG, DF, DC; //variáveis para armazenar os votos
    //chama a função votar e armazena os valores nas variáveis
    DG = votar("Diretor Geral");
    DF = votar("Diretor Financeiro");
    DC = votar("Diretor Comercial");
    //verifica as condicionais e retorna se o projeto foi aprovado ou reprovado
    if((DF || DC) && DG){
        cout << "Projeto APROVADO!" << endl;
    }
    else{
        cout << "Projeto REPROVADO!" << endl;
    }
    return 0;
}