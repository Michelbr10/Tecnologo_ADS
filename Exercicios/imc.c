#include <stdio.h>

float imc()
{
    float peso, altura, resultado;

    printf("Qual o seu peso(kg) : ");
    scanf("%f", &peso);
    printf("Qual a seu altura(metros) : ");
    scanf("%f", &altura);

    resultado = peso / (altura * altura);
    return resultado;
}

int main()
{
    float imc_calculado;
    imc_calculado = imc();

    if (imc_calculado < 18.5) printf("Abaixo do peso! Seu imc e: %f", imc_calculado); 
    else if (imc_calculado < 24.9) printf("Peso ideal! Seu imc e: %f", imc_calculado);
    else printf("Sobrepeso! Seu imc e: %f", imc_calculado);

    return 0;
}