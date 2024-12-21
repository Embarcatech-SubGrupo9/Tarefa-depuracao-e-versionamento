#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void metroCubicoParaLitros();
void metroCubicoParaMililitros();
void litrosParaMetroCubico();
void litrosParaMililitros();
void mililitrosParaMetroCubico();
void mililitrosParaLitros();

int main()
{
	// Configurações para suportar caracteres especiais
	// Tentei de todas as formas, mas ainda tá dando erro.
	setlocale(LC_ALL, "Portuguese");

	int op;

	do
	{
		printf("\nEscolha uma opção para converter:\n");
		printf("1 - Metro cúbico para Litros\n");
		printf("2 - Metro cúbico para Mililitros\n");
		printf("3 - Litros para Metro cúbico\n");
		printf("4 - Litros para Mililitros\n");
		printf("5 - Mililitros para Metro cúbico\n");
		printf("6 - Mililitros para Litros\n");
		printf("0 - Sair\n");
		printf("Opção: ");
		scanf("%d", &op);


		// no switch foi colocado as função, quando entrar na case do switch vai chamar a função.
		switch (op)
		{
		case 1:
			metroCubicoParaLitros();
			break;
		case 2:
			metroCubicoParaMililitros();
			break;
		case 3:
			litrosParaMetroCubico();
			break;
		case 4:
			litrosParaMililitros();
			break;
		case 5:
			mililitrosParaMetroCubico();
			break;
		case 6:
			mililitrosParaLitros();
			break;
		case 0:
			printf("Encerrando o programa.\n");
			break;
		default:
			printf("Opção inválida! Tente novamente.\n");
		}
	} while (op != 0);

	return 0;
}

// Funções de conversão
void metroCubicoParaLitros()
{
	float valor, resultado;
	printf("Digite o valor em metros cúbicos: ");
	scanf("%f", &valor);
	resultado = valor * 1000;
	printf("%.2f metros cúbicos = %.2f litros\n", valor, resultado);
}

void metroCubicoParaMililitros()
{
	float valor, resultado;
	printf("Digite o valor em metros cúbicos: ");
	scanf("%f", &valor);
	resultado = valor * 1000000;
	printf("%.2f metros cúbicos = %.2f mililitros\n", valor, resultado);
}

void litrosParaMetroCubico()
{
	float valor, resultado;
	printf("Digite o valor em litros: ");
	scanf("%f", &valor);
	resultado = valor / 1000;
	printf("%.2f litros = %.2f metros cúbicos\n", valor, resultado);
}

void litrosParaMililitros()
{
	float valor, resultado;
	printf("Digite o valor em litros: ");
	scanf("%f", &valor);
	resultado = valor * 1000;
	printf("%.2f litros = %.2f mililitros\n", valor, resultado);
}

void mililitrosParaMetroCubico()
{
	float valor, resultado;
	printf("Digite o valor em mililitros: ");
	scanf("%f", &valor);
	resultado = valor / 1000000;
	printf("%.2f mililitros = %.2f metros cúbicos\n", valor, resultado);
}

void mililitrosParaLitros()
{
	float valor, resultado;
	printf("Digite o valor em mililitros: ");
	scanf("%f", &valor);
	resultado = valor / 1000;
	printf("%.2f mililitros = %.2f litros\n", valor, resultado);
}