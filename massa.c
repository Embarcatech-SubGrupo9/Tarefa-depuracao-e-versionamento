#include <stdio.h>

// Declaração de funções locais
float kgParaGramas(float kg);
float gramasParaKg(float g);
float kgParaLibras(float kg);
float librasParaKg(float lb);

void menu_Massa()
{
    int opcao;
    float massa, resultado;

    printf("\n---------------- Conversor de Massa ----------------\n");
    printf("1. Quilogramas para Gramas\n");
    printf("2. Gramas para Quilogramas\n");
    printf("3. Quilogramas para Libras\n");
    printf("4. Libras para Quilogramas\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o valor em Quilogramas: ");
        scanf("%f", &massa);
        resultado = kgParaGramas(massa);
        printf("%.2f Quilogramas = %.2f Gramas\n", massa, resultado);
        break;
    case 2:
        printf("Digite o valor em Gramas: ");
        scanf("%f", &massa);
        resultado = gramasParaKg(massa);
        printf("%.2f Gramas = %.2f Quilogramas\n", massa, resultado);
        break;
    case 3:
        printf("Digite o valor em Quilogramas: ");
        scanf("%f", &massa);
        resultado = kgParaLibras(massa);
        printf("%.2f Quilogramas = %.2f Libras\n", massa, resultado);
        break;
    case 4:
        printf("Digite o valor em Libras: ");
        scanf("%f", &massa);
        resultado = librasParaKg(massa);
        printf("%.2f Libras = %.2f Quilogramas\n", massa, resultado);
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
}

float kgParaGramas(float kg)
{
    return kg * 1000;
}

float gramasParaKg(float g)
{
    return g / 1000;
}

float kgParaLibras(float kg)
{
    return kg * 2.20462;
}

float librasParaKg(float lb)
{
    return lb / 2.20462;
}
