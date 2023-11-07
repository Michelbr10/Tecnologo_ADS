#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int numero;
    char nome[31];

    printf("\nEu sou um print, digite um numero: "); //stdio.h
    scanf("%i", &numero); //stdio.h
    printf("\nEu sou um print, digite um nome: "); //stdio.h
    fflush(stdin);
    fgets(nome, 31, stdin); //stdio.h

    int a = 2, b = 3;

    int potencia = pow(a, b); //math.h
    printf("\nO resultado da potencia e %d\n", potencia); //stdio.h
    
    int raiz = sqrt(a); //math.h
    printf("\nA raiz quadrada de %d e %.0f\n", a, raiz); //stdio.h

    char string1[5] = "gato", string2[9] = "cachorro"; //string.h
    printf("\nA string1 e igual string2(0 = sim, 1 = string1 maior, -1 = string1 menor): %d\n", strcmp(string1, string2)); //stdio.h e string.h

    char meunome[31];
    strcpy(meunome, "Michel Douglas"); //string.h
    printf("\nMeu nome e %s\n", meunome);

    return 0;
}