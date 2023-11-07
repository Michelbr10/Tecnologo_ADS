#include <stdio.h>

int main()
{
    int escolha;
    printf("Digite (1) para Saldo, (2) para Extrato, (3) para Saque e (4) para Sair: \n");
    scanf("%i", &escolha);
    switch(escolha){
        case 1:
            printf("Saldo: \n");
            break;
        case 2:
            printf("Extrato: \n");
            break;
        case 3:
            printf("Saque: \n");
            break;
        case 4:
            printf("Sair. \n");
            break;
        default: printf("Erro! Invalido. \n");
        }
    return 0;
}