#include <stdio.h>

void convertTemp();
void convertMassa();
float celsiusParaFahrenheit(float c);
float fahrenheitParaCelsius(float f);
float celsiusParaKelvin(float c);
float kgParaGramas(float kg);
float gramasParaKg(float g);
float kgParaLibras(float kg);
float librasParaKg(float lb);

int main() {
    int op;

    do {
        printf("\n---------------- Conversor de Medidas ----------------\n");
        printf("1. Conversor de Temperatura\n");
        printf("2. Conversor de Massa\n");
        printf("0. Sair\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            convertTemp();
            break;
        case 2:
            convertMassa();
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    } while (op != 0);

    return 0;
}

void convertTemp() {
    int opcao;
    float temp, resultado;

    printf("\n---------------- Conversor de Temperatura ----------------\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o valor em Celsius: ");
        scanf("%f", &temp);
        resultado = celsiusParaFahrenheit(temp);
        printf("%.2f Celsius = %.2f Fahrenheit\n", temp, resultado);
        break;
    case 2:
        printf("Digite o valor em Fahrenheit: ");
        scanf("%f", &temp);
        resultado = fahrenheitParaCelsius(temp);
        printf("%.2f Fahrenheit = %.2f Celsius\n", temp, resultado);
        break;
    case 3:
        printf("Digite o valor em Celsius: ");
        scanf("%f", &temp);
        resultado = celsiusParaKelvin(temp);
        printf("%.2f Celsius = %.2f Kelvin\n", temp, resultado);
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
}

void convertMassa() {
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

float celsiusParaFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32) * 5 / 9;
}

float celsiusParaKelvin(float c) {
    return c + 273.15;
}

float kgParaGramas(float kg) {
    return kg * 1000;
}

float gramasParaKg(float g) {
    return g / 1000;
}

float kgParaLibras(float kg) {
    return kg * 2.20462;
}

float librasParaKg(float lb) {
    return lb / 2.20462;
}
