#include <stdio.h>//Biblioteca para entrada/saida
#include <stdlib.h>//Biblioteca

long int calculo(int *UNIDADE, long int DADOS){
    int contado;

    contado = UNIDADE[0] - UNIDADE[1];

    if(UNIDADE[1] == 1){
        contado--;
    }

    for(int i = 0; i < contado; i++){
        DADOS = DADOS * 1024;
    }

    if(UNIDADE[1] == 1){
        DADOS = DADOS * 8;
    }

    return DADOS;
}

void exibir(int *UNIDADE, int RESULTADO, long int DADOS){
    
    printf("DADOS DE ENTRADA DO USUÁRIO\n");
    printf("Unidade     Simbolo   Valor            Tamanho\n");
    if(UNIDADE[0] == 3){
        printf("Kilobyte    KB        1024 Bytes       %d\n", DADOS);
    }
    else if(UNIDADE[0] == 4){
        printf("Megabyte    MB        1024 Kilobytes   %d\n", DADOS);
    }
        else if(UNIDADE[0] == 5){
        printf("GigaByte    GB        1024 Megabytes   %d\n", DADOS);
    }
        else if(UNIDADE[0] == 6){
        printf("Perabyte    PB        1024 GigaBytes   %d\n", DADOS);
    }
        else if(UNIDADE[0] == 7){
        printf("Exabyte     EB        1024 Perabytes   %d\n", DADOS);
    }

    printf("DADOS DE SAÍDA DA APLICAÇÃO\n");
    
    if(UNIDADE[1] == 1){
        printf("bit         b         (0 ou 1)         %d\n", RESULTADO);
    }
    else if(UNIDADE[1] == 2){
        printf("Byte        B         8 bits           %d\n", RESULTADO);
    }
    else if(UNIDADE[1] == 3){
        printf("Kilobyte    KB        1024 Bytes       %d\n", RESULTADO);
    }
    else if(UNIDADE[1] == 4){
        printf("Megabyte    MB        1024 Kilobytes   %d\n", RESULTADO);
    }
    else if(UNIDADE[1] == 5){
        printf("GigaByte    GB        1024 Megabytes   %d\n", RESULTADO);
    }
    else if(UNIDADE[1] == 6){
        printf("Perabyte    PB        1024 GigaBytes   %d\n", RESULTADO);
    }
    else if(UNIDADE[1] == 7){
        printf("Exabyte     EB        1024 Perabytes   %d\n", RESULTADO);
    }
}

int main(){
    long int dados, resultado;//Foi utilizado long int devido a sua capacidade de armazenamento superior.
    int unidade[2];

    do{
        system("cls");
        printf("Tabela de valores de conversão, escolha um valor para converter\n");
        printf("Escolha  Unidade     Simbolo   Valor\n");
        printf("1        1 bit       b       (0 ou 1)\n");
        printf("2        1 Byte      B       8 bits\n");
        printf("3        1 Kilobyte  KB      1024 Bytes\n");
        printf("4        1 Megabyte  MB      1024 Kilobytes\n");
        printf("5        1 GigaByte  GB      1024 Megabytes\n");
        printf("6        1 Perabyte  PB      1024 GigaBytes\n");
        printf("7        1 Exabyte   EB      1024 Perabytes\n\n");
        printf("0 para sair da aplicação.\n");
        printf("OBS: essa aplicação apenas realiza convenções de unidade maiores para menores.\n");
        printf("Digite a unidade de medida que você tem: ");
        scanf("%d", &unidade[0]);
        
        if(unidade[0] != 0){
                if (unidade[0] != 1){
                printf("Digite a unidade de medida que você quer converte: ");
                scanf("%d", &unidade[1]);
            }
            printf("Digite o tamanho: ");
            scanf("%d", &dados);
            system("cls");

            switch (unidade[0])
            {
                case 1:
                    printf("DADOS DE SAÍDA DA APLICAÇÃO\n");
                    printf("Unidade     Simbolo   Valor     Tamanho\n");
                    printf("bit         b         (0 ou 1)  %d\n", dados);
                    printf("Como bit já é a unidade de menor medida não é possivel converter ela.\n");
                    system("pause");
                    break;
                case 2:
                    resultado = dados * 8;
                    printf("DADOS DE SAÍDA DA APLICAÇÃO\n");
                    printf("Unidade     Simbolo   Valor       Tamanho\n");
                    printf("Byte        B         8 bits      %d\n", resultado);
                    system("pause");
                    break;
                case 3:
                    resultado = calculo(unidade, dados);
                    exibir(unidade, resultado, dados);
                    system("pause");
                    break;
                case 4:
                    resultado = calculo(unidade, dados);
                    exibir(unidade, resultado, dados);
                    system("pause");
                    break;
                case 5:
                    resultado = calculo(unidade, dados);
                    exibir(unidade, resultado, dados);
                    system("pause");
                    break;
                case 6:
                    resultado = calculo(unidade, dados);
                    exibir(unidade, resultado, dados);
                    system("pause");
                    break;
                case 7:
                    resultado = calculo(unidade, dados);
                    exibir(unidade, resultado, dados);
                    system("pause");
                    break;
                default:
                    printf("Opção para unidade Invalidada.\n");
                    break;
            }
        }
    }while(unidade[0] != 0);

    return 0;
}