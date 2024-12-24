#include <stdio.h>

// Declaração de funções locais
float celsiusParaFahrenheit(float c);
float fahrenheitParaCelsius(float f);
float celsiusParaKelvin(float c);

void menu_Temperatura()
{
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

float celsiusParaFahrenheit(float c)
{
    return (c * 9 / 5) + 32;
}

float fahrenheitParaCelsius(float f)
{
    return (f - 32) * 5 / 9;
}

float celsiusParaKelvin(float c)
{
    return c + 273.15;
}
