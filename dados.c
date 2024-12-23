#include <stdio.h>//Biblioteca para entrada/saida
#include <stdlib.h>//Biblioteca

//Função para converter o tamanho dos dados.
float calculo(int *UNIDADE, float DADOS){
    int contado;

    contado = UNIDADE[0] - UNIDADE[1];

    /*Aqui é subtraindo menos um da variável contado caso UNIDADE[0] seja igual a 1, o que significa que quero essa conversão em bit, mas para chegar nesta unidade é necessário multiplicar por 8 e o for que faça a conversão multiplica por 1024.*/
    if(UNIDADE[1] == 1){
        contado--;
    }

    for(int i = 0; i < contado; i++){
        DADOS = DADOS * 1024;
    }

    //Aqui faço a conversão para bit caso seja necessário.
    if(UNIDADE[1] == 1){
        DADOS = DADOS * 8;
    }

    return DADOS;
}

//Função para exibir os resultados da aplicação.
void exibir(int *UNIDADE, float RESULTADO, float DADOS){
    
    printf("DADOS DE ENTRADA DO USUÁRIO\n");
    printf("Unidade     Simbolo   Valor            Tamanho\n");
    if(UNIDADE[0] == 3){
        printf("Kilobyte    KB        1024 Bytes       %.0f\n", DADOS);
    }
    else if(UNIDADE[0] == 4){
        printf("Megabyte    MB        1024 Kilobytes   %.0f\n", DADOS);
    }
        else if(UNIDADE[0] == 5){
        printf("GigaByte    GB        1024 Megabytes   %.0f\n", DADOS);
    }
        else if(UNIDADE[0] == 6){
        printf("Perabyte    PB        1024 GigaBytes   %.0f\n", DADOS);
    }
        else if(UNIDADE[0] == 7){
        printf("Exabyte     EB        1024 Perabytes   %.0f\n", DADOS);
    }

    printf("DADOS DE SAÍDA DA APLICAÇÃO\n");
    
    if(UNIDADE[1] == 1){
        printf("bit         b         (0 ou 1)         %.0f\n", RESULTADO);
    }
    else if(UNIDADE[1] == 2){
        printf("Byte        B         8 bits           %.0f\n", RESULTADO);
    }
    else if(UNIDADE[1] == 3){
        printf("Kilobyte    KB        1024 Bytes       %.0f\n", RESULTADO);
    }
    else if(UNIDADE[1] == 4){
        printf("Megabyte    MB        1024 Kilobytes   %.0f\n", RESULTADO);
    }
    else if(UNIDADE[1] == 5){
        printf("GigaByte    GB        1024 Megabytes   %.0f\n", RESULTADO);
    }
    else if(UNIDADE[1] == 6){
        printf("Perabyte    PB        1024 GigaBytes   %.0f\n", RESULTADO);
    }
    else if(UNIDADE[1] == 7){
        printf("Exabyte     EB        1024 Perabytes   %.0f\n", RESULTADO);
    }
}

int main(){
    float dados, resultado;//Foi utilizado float devido à sua capacidade de armazenamento.
    int unidade[2];//Para armazenar os dados de unidade para conversão.

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
        
        //Esse IF serve para sair imediatamente da aplicação.
        if(unidade[0] != 0){
            if (unidade[0] != 1){//Esse IF serve para saber se o usuário escolher bit passar diretamente para o tamanho.
                printf("Digite a unidade de medida que você quer converte: ");
                scanf("%d", &unidade[1]);
            }
            printf("Digite o tamanho: ");
            scanf("%f", &dados);
            system("cls");

            switch (unidade[0])
            {
                case 1:
                    printf("DADOS DE SAÍDA DA APLICAÇÃO\n");
                    printf("Unidade     Simbolo   Valor     Tamanho\n");
                    printf("bit         b         (0 ou 1)  %.0f\n", dados);
                    printf("Como bit já é a unidade de menor medida não é possivel converter ela.\n");
                    system("pause");
                    break;
                case 2:
                    resultado = dados * 8;
                    printf("DADOS DE SAÍDA DA APLICAÇÃO\n");
                    printf("Unidade     Simbolo   Valor       Tamanho\n");
                    printf("Byte        B         8 bits      %.0f\n", resultado);
                    system("pause");
                    break;
                case 3:
                    resultado = calculo(unidade, dados);//
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
                    printf("Opção para unidade inválida.\n");
                    break;
                /*Foi utilizado tanto case para poder validar o menu de opções, caso contrário teria que
                utilizar algum laço de repetição algo parecido, fiz essa escolha para deixar o default como
                opção inválida.*/
            }
        }
    }while(unidade[0] != 0);

    return 0;
}