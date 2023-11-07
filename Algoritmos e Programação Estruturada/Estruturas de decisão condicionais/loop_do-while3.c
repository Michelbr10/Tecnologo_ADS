#include <stdio.h>

int main() {
    float saldo=0; 
    float valor; 
    int opcao;
    do {
        printf("\n M E N U   D E  O P C O E S");
        printf("\n 1. Deposito"); 
        printf("\n 2. Saque"); 
        printf("\n 3. Saldo"); 
        printf("\n 4. Sair"); 
        printf("\n Informe uma opcao: "); 
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1: 
                printf("\n Informe o valor: "); 
                scanf("%f", &valor); 
                saldo += valor; 
                break;
            case 2:
                do
                {
                    printf("\n Informe o valor: "); 
                    scanf("%f", &valor);
                } while (valor > saldo);
                saldo -= valor;
                break;
            case 3: 
                printf("\n Saldo atual = R$ %.2f", saldo); 
                break; 
            case 4: 
                printf("\n Saindo..."); 
                break; 
            default: 
                printf("\n Opção invalida!"); 
        }   
    } while (opcao != 4);
    printf("\n Fim das operacoes!");
	return 0;
}
