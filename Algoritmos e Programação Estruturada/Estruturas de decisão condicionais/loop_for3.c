#include <stdio.h>

int main()
{
    int parar = 30;

    for (int i = 0; i <= 100; i++)
    {
        if (i == parar)
        {
            break;
        }
        printf("%d ", i);
    }
    return 0;
}