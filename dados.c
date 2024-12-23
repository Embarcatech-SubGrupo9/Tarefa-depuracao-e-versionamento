#include <stdio.h>//Biblioteca para entrada/saida
#include <stdlib.h>//Biblioteca

int calculo(int *UNIDADE, int DADOS){
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

int main(){
    long int dados, resultado;//Foi utilizado long int devido a sua capacidade de armazenamento superior.
    int unidade[2];

    do{
        system("cls");
        printf("Tabela de valores de conversão, escolha um valor para converter\n");
        printf("Escolha  Unidade     Simbolo   Valor\n");
        printf("1        1 bit       1 b       (0 ou 1)\n");
        printf("2        1 Byte      1 B       8 bits\n");
        printf("3        1 Kilobyte  1 KB      1024 Bytes\n");
        printf("4        1 Megabyte  1 MB      1024 Kilobytes\n");
        printf("5        1 GigaByte  1 GB      1024 Megabytes\n");
        printf("6        1 Perabyte  1 PB      1024 GigaBytes\n");
        printf("7        1 Exabyte   1 EB      1024 Perabytes\n\n");
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
                    printf("Como bit já é a unidade de menor medida não é possivel converter ela.\n");
                    if(dados > 1){
                        printf("%d bits\n", dados);
                    }
                    else{
                        printf("%d bit\n", dados);
                    }
                    system("pause");
                    break;
                case 2:
                    resultado = dados * 8;
                    printf("RESULTADO DA CONVERSÃO\n\n");
                    if(dados > 1){
                        printf("%d Bytes = %d bits\n", dados, resultado);
                    }
                    else{
                        printf("%d Byte = %d bits\n", dados, resultado);
                    }
                    system("pause");
                    break;
                case 3:
                    resultado = calculo(unidade, dados);
                    printf("%d", resultado);
                    system("pause");
                    break;
                case 4:
                
                    break;
                case 5:
                
                    break;
                case 6:
                
                    break;
                case 7:

                    break;
                default:
                    printf("Opção para unidade Invalidada.\n");
                    break;
            }
        }
    }while(unidade[0] != 0);

    return 0;
}