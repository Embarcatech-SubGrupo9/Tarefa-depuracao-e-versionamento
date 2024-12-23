#include <stdio.h>//Biblioteca para entrada/saida
#include <stdlib.h>//Biblioteca

int main(){
    long int dados;//Foi utilizado long int devido a sua capacidade de armazenamento superior.
    int unidade[2];

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
    printf("Digite a unidade de medida que você tem: ");
    scanf("%d", &unidade[0]);
    printf("Digite a unidade de medida que você quer converte: ");
    scanf("%d", &unidade[1]);
    printf("Digite o tamanho: ");
    scanf("%d", &dados);
    system("cls");


    return 0;
}