#include <stdio.h>

#define VET_TAM 5

int main () {
    int vetor[VET_TAM];
    int num, procurar = 0, achou = 0;
    
    // Preenche vetor
    for (int i = 0; i < VET_TAM; i++) {
        printf("\nEntre com um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("\n\nInforme o numero a ser encontrado: ");
    scanf("%d", &num);
    
    while(procurar < VET_TAM) {
        if (vetor[procurar] == num) {
            achou = 1;
            break;
        }
        procurar++;
    }
    
    if (achou == 1) {
        printf("\nO numero %d foi encontrado na posicao %d do vetor", num, procurar);
    } else {
        printf("\nO numero %d não foi encontrado no vetor", num);
    }

    return 0;
}