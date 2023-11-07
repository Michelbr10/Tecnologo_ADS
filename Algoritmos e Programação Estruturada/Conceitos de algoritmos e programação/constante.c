#include <stdio.h>

//iniciando uma constante, não utiliza espaço de memória 
#define PI 3.14 
#define NOME "Michel"

int main()
{
    //iniciando uma constante, utiliza espaço de memória
    const float G = 9.80;
    //iniciando uma variável que recebe a multiplicação de PI e G
    float resultado = PI * G;

    printf("NOME = %s \n", NOME);
    printf("PI = %f \n", PI);
    printf("G = %f \n", G);
    printf("Resultado = %f \n", resultado);
    
    return 0;
}