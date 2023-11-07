#include <stdbool.h>
#include <stdio.h>

int main(){
    //tipos primitivos de dados
    int idade = 18; //variável do tipo numérico inteiro
    float salario = 5530.50; //variável do tipo numérico de ponto flutuante
    double imposto = 17.5; //variável do tipo numérico de ponto flutuante
    char letra = 'M'; //variável do tipo caractere
    char nome[20] = "Michel";
    bool empregado = true; //variável do tipo booleano

    printf("Idade: %i \n", idade);
    printf("Salario: %.2f \n", salario);
    printf("Imposto: %f %\n", imposto);
    printf("Imposto aproximado: %.2f %\n", imposto);
    printf("Caracter: %c \n", letra);
    printf("Caracter: %s \n", nome);
    
    return 0;
}