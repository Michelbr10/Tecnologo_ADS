#include <stdio.h>

int main()
{
	char cor;
	float valor, desc, total;

	printf("\n Digite o valor da compra: ");
	scanf("%f", &valor);
	printf("\n Digite a letra que representa o seu desconto de acordo com a cor: ");
	printf("\n a. azul");
	printf("\n v. vermelho");
	printf("\n b. branco");
	printf("\n Digite sua opcao:");
	scanf("%s", &cor);
	switch(cor) {
	case 'a':
		printf("\n Voce escolheu a cor azul, seu desconto sera de 30 por cento");
		desc = 30;
		break;
	case 'v':
		printf("\n Voce escolheu a cor vermelha, seu desconto sera de 20 por cento");
		desc = 20;
		break;
	case 'b':
		printf("\n Voce escolheu a cor branca, seu desconto sera de 10 por cento");
		desc = 10;
		break;
	default:
		printf("Opcao invalida, nao sera concedido desconto\n");
		desc = 0;
	}
    total = valor - (valor * desc / 100);
	printf("\n O valor da sua compra e R$ %.2f", total);
return 0;
}