#include <stdio.h>
#include <stdlib.h> 
/*As funcòes com passagens de parâmetros por referência manipulam diretamente
os valores dos argumentos, sem precisar retorná-los para o programa principal.
No exemplo são criadas as variáveis x e y, e atribuídos os valores de 10 e 20
respectivamente, depois são passados os seus endereços a função.*/
void mudar_num(int *x, int *y) //recebe os endereços passados como parâmetros
{
    //altera os valores contidos nos endereços
    //como são ponteiros é necessário usar o * para acessar o valor contido no endereço
    *x = -5; 
    *y = -2;
}

int main()
{
    int x, y;
    x = 10;
    y = 20;
    printf("Valores antes da alteracao: X: %d Y: %d \n", x, y);

    mudar_num(&x, &y); //passa os endereços de memoria que armazenam os valores
    printf("Valores depois da alteracao: X: %d Y: %d \n", x, y); //imprime os valores atuais após a execução da função e alteração dos valores

    return 0;
}