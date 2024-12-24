#include <stdio.h>

float segundosParaMinutos(int s);
float minutosParaHoras(int m);
float SegundosParaMinutos(float s);
float SegundosParaHoras(float s);
float MinutosParaSegundos(float m);
float MinutosParaHoras(float m);
float HorasParaSegundos(float h);
float HorasParaMinutos(float h);
float tempo, resultado_tempo; 
int opcaoTempo;

float SegundosParaMinutos(float s) {
    return (float)s / 60;
}
float SegundosParaHoras(float s) {
    return (float)s / 3600;
}
float MinutosParaSegundos(float m) {
    return (float)m * 60;
}
float MinutosParaHoras(float m) {
    return (float)m / 60;
}
float HorasParaSegundos(float h) {
    return (float)h * 3600;
}
float HorasParaMinutos(float h) {
    return (float)h * 60;
}

void menu_Tempo() {

    do {
    printf("\n ----------------Conversor de Tempo----------------\n");
    printf("\n ----------------Digite 0 quando quiser terminar o programa----------------\n");
    printf("1. Segundos para Minutos\n");
    printf("2. Segundos para Horas\n");
    printf("3. Minutos para Segundos\n");
    printf("4. Minutos para Horas\n");
    printf("5. Horas para Segundos\n");
    printf("6. Horas para Minutos\n");
    scanf("%d",&opcaoTempo);

    switch (opcaoTempo)
    {
    case 1:
        printf("Digite o valor em Segundos e Converteremos para Minutos: ");
        scanf("%f", &tempo);
        resultado_tempo = SegundosParaMinutos(tempo);
        printf("%.2f Segundos = %.2f Minutos\n",tempo,resultado_tempo);
        break;
    case 2:
        printf("Digite o valor em Segundos e Converteremos para Horas: ");
        scanf("%f", &tempo);
        resultado_tempo = SegundosParaHoras(tempo);
        printf("%.2f Segundos = %.2f Horas",tempo,resultado_tempo);
        break;
    case 3:
        printf("Digite o valor em Minutos e Converteremos para Segundos: ");
        scanf("%f", &tempo);
        resultado_tempo = MinutosParaSegundos(tempo);
        printf("%.2f Minutos = %.2f Segundos",tempo,resultado_tempo);
        break;
    case 4:
        printf("Digite o valor em Minutos e Converteremos para Horas: ");
        scanf("%f", &tempo);
        resultado_tempo = MinutosParaHoras(tempo);
        printf("%.2f Minutos = %.2f Horas",tempo,resultado_tempo);
        break;
    case 5:
        printf("Digite o valor em Horas e Converteremos para Segundos: ");
        scanf("%f", &tempo);
        resultado_tempo = HorasParaSegundos(tempo);
        printf("%.2f Horas = %.2f Segundos",tempo,resultado_tempo);
        break;
    case 6:
        printf("Digite o valor em Horas e Converteremos para Minutos: ");
        scanf("%f", &tempo);
        resultado_tempo = HorasParaMinutos(tempo);
        printf("%.2f Horas = %.2f Minutos",tempo,resultado_tempo);
        break;
    default:
        printf("Opcao Invalida!");
        break;
    }

} while(opcaoTempo!=0);

}