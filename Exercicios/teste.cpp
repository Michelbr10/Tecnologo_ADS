#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int carregamento, numero;
    carregamento = 0;

    while(carregamento != 101){
        cout << carregamento << "% loading" << endl;
        carregamento++;
    }

    cout << "Insira um numero: " <<endl;
    cin >> numero;
    
    while(numero){
        cout << "Ola eu sou um loop" <<endl;
        numero--;
    }
    
    return 0;
}
