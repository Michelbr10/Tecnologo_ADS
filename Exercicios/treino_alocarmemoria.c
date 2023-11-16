#include <stdio.h>
#include<stdlib.h>

char* alocar_char(int tamanho)
{
    char *memoria_alocada;
    memoria_alocada = (char *) malloc(sizeof(char) * tamanho);
    return memoria_alocada;
}

void lerString(char local[], int tamanho)
{
    fflush(stdin); //limpa a entrada do teclado
    fgets(local, tamanho, stdin); //salva o que for digitado em local(variável)
}

int main()
{
    int opcao, tamanho;
    do {
        printf("\nEscolha uma opcao (1)-salvar um numero (2)-salvar um nome (3)-salvar um texto (4)-sair: ");
        scanf("%d", &opcao);
        
        if (opcao != 4)
        {
            printf("Digite o tamanho da string +1: ");
            scanf("%d", &tamanho);
        }

        switch (opcao)
        {
            case 1:
                char *numero = alocar_char(tamanho);
                printf("\nDigite o numero: ");
                lerString(numero, tamanho);
                printf("\nNumero salvo! %s", numero);
                free(numero);
                break;

            case 2:
                char *nome = alocar_char(tamanho);
                printf("\nDigite o nome: ");
                lerString(nome, tamanho);
                printf("\nNome salvo! %s", nome);
                free(nome);
                break;

            case 3:
                char *texto = alocar_char(tamanho);
                printf("\nDigite o texto: ");
                lerString(texto, tamanho);
                printf("\nTexto salvo! %s", texto);
                free(texto);
                break;

            case 4:
                printf("Saindo...");
                break;

            default:
                printf("\nComando invalido!");
                break;
        }
    } while (opcao != 4);
    return 0;
}