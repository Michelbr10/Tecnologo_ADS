#include <stdio.h>

float temperatura1, temperatura2;

float media()
{
    return ((temperatura1 + temperatura2) / 2);
}

int main()
{
    printf("Digite as duas temperaturas: ");
    scanf("%f %f", &temperatura1, &temperatura2);
    printf("A media e: %.2f", media());
    return 0;
}