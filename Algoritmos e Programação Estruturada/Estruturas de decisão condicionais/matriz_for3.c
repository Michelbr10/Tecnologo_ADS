#include <stdio.h>

int main()
{
    int assentos[3][5] = {
        0, 1, 1, 0, -1,
        0, 1, 1, 1, 1,
        0, 0, -1, -1, -1
    };
    int reserva, opcao, reserva_realizada;

    do {
        printf("Escolha a opcao (1) reservar voo ou (2) para sair: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Escolha um horario (1)(2)(3): ");
                reserva = 0, reserva_realizada = 0;
                scanf("%d", &reserva);
                
                for (int coluna = 0; coluna < 5; coluna++) {
                    if (assentos[reserva - 1][coluna] == 0) {
                        printf("Seu voo foi reservado com sucesso! \n");
                        assentos[reserva - 1][coluna] = 1;
                        reserva_realizada = 1;
                        break;
                    }
                    else {
                        continue;
                        reserva_realizada = 0;
                    }
                }
                if (!(reserva_realizada)) {
                    printf("Nao ha poltronas disponiveis no horario! \n");
                }
                break;
            case 2:
                printf("Saindo... \n");
                break;
            default:
                printf("Opcao invalida! \n");
        }
    } while (opcao != 2);
    return 0;
}
