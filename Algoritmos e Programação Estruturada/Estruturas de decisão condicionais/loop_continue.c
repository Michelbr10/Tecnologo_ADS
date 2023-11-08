#include <stdio.h>
#include <windows.h> //teste de som, para gerar um beep

int main()
{
    for (int i = 0; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d ", i);
        Beep(1000, 1000); //beep de 1000hz por 1000ms(1s)
    }
}