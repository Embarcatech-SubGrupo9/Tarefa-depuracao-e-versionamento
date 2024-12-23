#include <stdio.h>

// Função para converter os valores: (deixa qualquer valor em metros, e depois coverte para a unidade desejada)

void Converter(double Valor, int UnidadeOrigem, int UnidadeDestino)
{

    double FatoresParaMetros[] = {1, 1000, 0.01, 0.001};
    double ValorEmMetros = Valor * FatoresParaMetros[UnidadeOrigem];
    double FatoresDeMetros[] = {1, 0.001, 100, 1000};
    double ValorConvertido = ValorEmMetros * FatoresDeMetros[UnidadeDestino];
    printf("Valor convertido: %.4f\n", ValorConvertido);
}

int main()
{
    int UnidadeOrigem, UnidadeDestino;
    double Valor;

    printf("Conversor de Unidades de Comprimento\n");
    printf("Escolha a unidade: \n");
    printf("0: Metros\n");
    printf("1: Quilometros\n");
    printf("2: Centimetros\n");
    printf("3: Milimetros\n");

    printf("\nDigite o valor a ser convertido: ");
    scanf("%lf", &Valor);

    printf("Digite a unidade do valor colocado (0 a 3): ");
    scanf("%d", &UnidadeOrigem);

    printf("Digite a unidade de destino (0 a 3): ");
    scanf("%d", &UnidadeDestino);

    if (UnidadeOrigem < 0 || UnidadeOrigem > 3 || UnidadeDestino < 0 || UnidadeDestino > 3)
    {
        printf("Unidade inválida!\n");
        return 1;
    }

    Converter(Valor, UnidadeOrigem, UnidadeDestino);

    return 0;
}
