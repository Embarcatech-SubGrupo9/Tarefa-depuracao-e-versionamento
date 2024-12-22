#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "volume.h" // Inclui o cabeçalho com as funções de volume

int main()
{
    // Configurações para suportar caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int op;

    do
    {
        printf("\nEscolha uma opção para converter:\n");
        printf("1 - Comprimento\n");
        printf("2 - Massa\n");
        printf("3 - Volume\n");
        printf("4 - Temperatura\n");
        printf("5 - Velocidade\n");
        printf("6 - Energia\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            // Função para comprimento
            break;
        case 2:
            // Função para massa
            break;
        case 3:
            // Chama a função de conversão de volume
            menu_Volume(); // Função que exibe o menu de volume
            break;
        case 4:
            // Função para temperatura
            break;
        case 5:
            // Função para velocidade
            break;
        case 6:
            // Função para energia
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
