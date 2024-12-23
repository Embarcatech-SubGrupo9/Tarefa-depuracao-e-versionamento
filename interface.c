#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "volume.h" // Inclui o cabeçalho com as funções de volume
#include "dados.h"

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
        printf("7 - Area\n");
        printf("8 - Tempo\n");
        printf("9 - Dados\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op)
        {
        /* case 1:
            menu_Comprimento(); // Chama a função de conversão de comprimento
            break;
        case 2:
            menu_Massa(); // Chama a função de conversão de massa
            break; */
        case 3:
            menu_Volume(); // Chama a função de conversão de volume
            break;
            /*    case 4:
                   menu_Temperatura(); // Chama a função de conversão de temperatura
                   break;
               case 5:
                   menu_Velocidade(); // Chama a função de conversão de velocidade
                   break;
               case 6:
                   menu_Energia(); // Chama a função de conversão de Energia
                   break;
               case 7:
                   menu_Area(); // Chama a função de conversão de area.
                   break;
               case 8:
                   menu_Tempo(); // Chama a função de conversão de tempo
                   break; */
        case 9:
            menu_Dados(); // Chama a função de conversão de dados
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