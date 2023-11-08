#include <stdio.h>
#include <windows.h> //teste de som, para gerar um beep

int main()
{
    for (int i = 0; i <= 30; i++) //itera sobre i
    {
        if (i % 2 == 0) //verifica se o numero é par, se for executa 'continue'
        {
            continue; //executa a próxima iteração
        }
        printf("%d ", i);
        Beep(1000, 1000); //beep de 1000hz por 1000ms(1s)
    }
}