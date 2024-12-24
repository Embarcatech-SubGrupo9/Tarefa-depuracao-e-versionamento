/*Script para converter entre unidade de velocidade.
Por: Heli Neres Silva*/

#include <stdio.h>
#include <conio.h>
//#include <stdlib.h>

#define MS_KMH 3.6
#define KMH_MPH 0.621371

//cabeçalho da função velocidade
float velocidade(int u1, float v1, int u2);

int main(){
    float resultado;
    do{
        resultado=velocidade(0,0.0,0);
    }while(resultado!=-1);
    printf("Encerrando programa.");

    //aguarda alguma tecla ser pressionada antes de encerrar o programa
    getch();

    //retorna 0
    return 0;
}

float velocidade(int u1, float v1, int u2){
    float v2;//,v2;
    char unidade[3][4]={"km/h","m/s","mph"};

    if(u1==0&&v1==0.0&&u2==0){
        //Seleção da unidade base e o valor a ser convertido
        printf("Conversor de Unidades de Velocidade\n");
        printf("\nSelecione a unidade inicial: \n");
        printf("1. Quilômetros por hora (km/h)\n");
        printf("2. Metros por segundo (m/s)\n");
        printf("3. Milhas por hora (mph)\n");
        printf("4. Sair\n");
        scanf("%d", &u1);

        if(u1==4){
            return -1;
        }

        printf("Digite o valor inicial: ");
        scanf("%f", &v1);

        //Seleção da unidade para conversão
        printf("\nSelecione a unidade para a qual deseja converter: \n");
        printf("1. Quilômetros por hora (km/h)\n");
        printf("2. Metros por segundo (m/s)\n");
        printf("3. Milhas por hora (mph)\n");
        scanf("%d", &u2);
    }

    printf("Convertendo...\n");

    //verificando se os valores são válidos
    if(u1==u2){
        printf("Você selecionou a mesma unidade!\n");
        v2=v1;
    //convertendo entre km/h, m/s e mph
    }else{
        switch(u1){
        case 1:
            switch(u2){
                case 2:
                    v2=v1/MS_KMH;
                    break;
                case 3:
                    v2=v1*KMH_MPH;
                    break;
                default:
                    printf("Seleção inválida.\n");
                    break;
                    return 0.0;
            }
            break;
        case 2:
            v2=v1*MS_KMH;
            if(u2==3) v2=v2*KMH_MPH;
            else if(u2!=1){
                printf("Seleção inválida.\n");
                return 0.0;
            }
            break;
        case 3:
            v2=v1/KMH_MPH;
            if(u2==2) v2=v2/MS_KMH;
            else if(u2!=1){
                printf("Seleção inválida.\n");
                return 0.0;
            }
            break;
        default:
            printf("Seleção inválida.\n");
            break;
            return 0.0;
        }
    }

    //exibe resultado
    printf("%f %s equivalem a %f %s",v1,unidade[u1-1],v2,unidade[u2-1]);
    return v2;
}