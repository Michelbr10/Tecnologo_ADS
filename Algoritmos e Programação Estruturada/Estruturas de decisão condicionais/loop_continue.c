#include <stdio.h>

int main()
{
    for (int i = 0; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }
}