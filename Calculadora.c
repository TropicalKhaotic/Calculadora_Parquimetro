#include<stdio.h>
#include<stdlib.h>

    int main(){

        float saldo_retornavel, calculo, calculo2;
        int horas_entrada, horas_entrada_2, horas_saida, horas_saida_2, soma_entrada, soma_saida, horario;
        int tipo_calculadora;
        printf("tipo de calculadora\n 1 - carro_azul\n 2 - moto_azul\n 3 - carro_verde\n 4 - moto_verde\n");
        scanf("%d", &tipo_calculadora);

        switch (tipo_calculadora){
        case 1:
        
            printf("Insira o valor do saldo final retornado\n");
            scanf("%f", &saldo_retornavel);

            printf("Insira o horario de entrada da placa\n");
            printf("Horas: \n");
            scanf("%d", &horas_entrada);

            printf("Insira o horario de finalização da placa\n");
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

           printf("Insira o valor do saldo final retornado\n");
            scanf("%f", &saldo_retornavel);

            printf("Insira o horario de entrada da placa\n");
            printf("Horas: \n");
            scanf("%d", &horas_entrada);

            printf("Insira o horario de finalização da placa\n");
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
            printf("Insira o valor do saldo final retornado\n");
            scanf("%f", &saldo_retornavel);

            printf("Insira o horario de entrada da placa\n");
            printf("Horas: \n");
            scanf("%d", &horas_entrada);

            printf("Insira o horario de finalização da placa\n");
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

           printf("Insira o valor do saldo final retornado\n");
            scanf("%f", &saldo_retornavel);

            printf("Insira o horario de entrada da placa\n");
            printf("Horas: \n");
            scanf("%d", &horas_entrada);

            printf("Insira o horario de finalização da placa\n");
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

        printf("\n Valor do saldo retornavel: %.2f\n",saldo_retornavel);
        printf(" O tempo de estacionamento é: %d minutos\n O valor gasto é: %.2f\n O valor da soma do estorno e valor gasto: %.2f", horario, calculo, calculo2);
        return 0;
    }