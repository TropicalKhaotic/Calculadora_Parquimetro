
#include<stdio.h>
#include<stdlib.h>
#define COLOR_BOLD  "\e[1m"
#define COLOR_OFF   "\e[m"

    int main(){
        int true = 0;
        while (true < 5){
        float saldo_retornavel, calculo, calculo2;
        int horas_entrada, horas_entrada_2, horas_saida, horas_saida_2, soma_entrada, soma_saida, horario;
        int tipo_calculadora;
        printf("\ntipo de calculadora\n (1) - carro_azul\n (2) - moto_azul\n (3) - carro_verde\n (4) - moto_verde \n");
        printf("\n");
        scanf("%d", &tipo_calculadora);

        switch (tipo_calculadora){
        case 1:
        
            printf("\nInsira o valor do saldo final retornado\n");
            scanf("%f", &saldo_retornavel);

            printf("Insira o horario de entrada da placa (08:15 -> 815)\n");
            printf("Horas: \n");
            scanf("%d", &horas_entrada);

            printf("Insira o horario de finalização da placa (08:15 -> 815)\n");
            printf("Horas: \n");
            scanf("%d", &horas_saida);

            horas_entrada_2 = horas_entrada % 100;
            horas_entrada = horas_entrada  / 100;
            soma_entrada = (horas_entrada * 60) + horas_entrada_2;

            horas_saida_2 = horas_saida % 100;
            horas_saida = horas_saida  / 100;
            soma_saida = (horas_saida * 60) + horas_saida_2;

            horario = (soma_saida - soma_entrada);
            calculo = ( 4.0 / 120.0) * horario;
            calculo2 = calculo + saldo_retornavel;

            break;

        case 2:

           printf("\nInsira o valor do saldo final retornado\n");
            scanf("%f", &saldo_retornavel);

            printf("Insira o horario de entrada da placa (08:15 -> 815)\n");
            printf("Horas: \n");
            scanf("%d", &horas_entrada);

            printf("Insira o horario de finalização da placa (08:15 -> 815)\n");
            printf("Horas: \n");
            scanf("%d", &horas_saida);

            horas_entrada_2 = horas_entrada % 100;
            horas_entrada = horas_entrada  / 100;
            soma_entrada = (horas_entrada * 60) + horas_entrada_2;

            horas_saida_2 = horas_saida % 100;
            horas_saida = horas_saida  / 100;
            soma_saida = (horas_saida * 60) + horas_saida_2;

            horario = (soma_saida - soma_entrada);
            calculo = ( 4.0 / 120.0) * horario;
            calculo2 = calculo + saldo_retornavel;

            break;

        case 3:
            printf("\nInsira o valor do saldo final retornado\n");
            scanf("%f", &saldo_retornavel);

            printf("Insira o horario de entrada da placa (08:15 -> 815)\n");
            printf("Horas: \n");
            scanf("%d", &horas_entrada);

            printf("Insira o horario de finalização da placa (08:15 -> 815)\n");
            printf("Horas: \n");
            scanf("%d", &horas_saida);

            horas_entrada_2 = horas_entrada % 100;
            horas_entrada = horas_entrada  / 100;
            soma_entrada = (horas_entrada * 60) + horas_entrada_2;

            horas_saida_2 = horas_saida % 100;
            horas_saida = horas_saida  / 100;
            soma_saida = (horas_saida * 60) + horas_saida_2;

            horario = (soma_saida - soma_entrada);
            calculo = ( 4.0 / 120.0) * horario;
            calculo2 = calculo + saldo_retornavel;


            break;

        case 4:

           printf("\nInsira o valor do saldo final retornado\n");
            scanf("%f", &saldo_retornavel);

            printf("Insira o horario de entrada da placa (08:15 -> 815)\n");
            printf("Horas: \n");
            scanf("%d", &horas_entrada);

            printf("Insira o horario de finalização da placa (08:15 -> 815)\n");
            printf("Horas: \n");
            scanf("%d", &horas_saida);

            horas_entrada_2 = horas_entrada % 100;
            horas_entrada = horas_entrada  / 100;
            soma_entrada = (horas_entrada * 60) + horas_entrada_2;

            horas_saida_2 = horas_saida % 100;
            horas_saida = horas_saida  / 100;
            soma_saida = (horas_saida * 60) + horas_saida_2;

            horario = (soma_saida - soma_entrada);
            calculo = ( 4.0 / 120.0) * horario;
            calculo2 = calculo + saldo_retornavel;

            break;
        }

        printf(COLOR_BOLD "\n Valor do saldo retornavel: %.2f\n" COLOR_OFF,saldo_retornavel);
        printf( COLOR_BOLD " O tempo de estacionamento é: %d minutos\n O valor gasto é: %.2f\n O valor da soma do estorno e valor gasto: %.2f\n" COLOR_OFF, horario, calculo, calculo2);
        true++;
        }
    }

