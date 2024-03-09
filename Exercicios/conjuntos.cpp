#include <iostream>

int main(){
    int A[5] = {1, 2, 3, 4, 5}, B[3] = {3, 4, 5};//declara dois conjuntos A e B
    int elementos = sizeof(B)/sizeof(int); //variável elementos armazena o tamanho do conjunto B
    int encontrados = 0; //variavel encontrados para comparar a quantidade de elementos com os encontrados
    //faz uma iteração pelos elementos de B comparando com de A, e incrementando a variável encontrados
    for (int i = 0; i < sizeof(B)/sizeof(int); i++){
        for (int j = 0; j < sizeof(A)/sizeof(int); j++){
            if (B[i] == A[j]){
                encontrados++;
            } else {
                continue;
            }
        }
    }
    //verificação condicional para saber se o número de elementos é o mesmo de encontrados
    if (elementos == encontrados){
        std::cout << "O conjunto B e subconjunto de A!" << std::endl;
    } else {
        std::cout << "O conjunto B NAO e um subconjunto de A!" << std::endl;
    }
    return 0;
}