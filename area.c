#include <stdio.h>

float MetroQparaCentiQ(float s);
float CentiQparaMetroQ(float m);
float area, resultado_area;
int opcaoArea;

float MetroQparaCentiQ(float s) {
    return (float)s * 10000;
}
float CentiQparaMetroQ(float m) {
    return (float)m / 10000;
}

int main() 
{

do {
    printf("\n ----------------Conversor de Area----------------\n");
    printf("\n ----------------Digite 0 quando quiser terminar o programa----------------\n");
    printf("1. De metros quadrados para centimetros quadrados\n");
    printf("2. De centimetros quadrados para metros quadrados\n");
    scanf("%d",&opcaoArea);

    switch (opcaoArea)
    {
    case 1:
        printf("Digite o valor em metros quadrados e converteremos para centimetros quadrados: ");
        scanf("%f", &area);
        resultado_area = MetroQparaCentiQ(area);
        printf("%.2f de metros quadrados equivale a %.2f em centimetros quadrados\n",area,resultado_area);
        break;
    case 2:
        printf("Digite o valor em centimetros quadrados e converteremos para metros quadrados: ");
        scanf("%f", &area);
        resultado_area = CentiQparaMetroQ(area);
        printf("%.2f de centimetros quadrados equivale a %.2f em metros quadrados\n",area,resultado_area);
        break;
    default:
        printf("Opcao Invalida!");
        break;
    }

} while(opcaoArea!=0);

}