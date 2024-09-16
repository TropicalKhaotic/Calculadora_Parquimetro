#include<stdio.h>
#include<stdlib.h>

    int main(){

        float saldo_retornavel, calculo, calculo2;
        int horas_entrada, minutos_entrada, horas_saida, minutos_saidas, soma_entrada, soma_saida, horario;
        int tipo_calculadora;
        printf("tipo de calculadora\n 1 - carro_azul\n 2 - moto_azul\n 3 - carro_verde\n 4 - moto_verde\n");
        scanf("%d", &tipo_calculadora);
        
        switch (tipo_calculadora){
        case 1:
            printf("Insira o valor do saldo retornado\n");
            scanf("%f", &saldo_retornavel);

            printf("Insira o horario de entrada\n");
            printf("Horas: \n");
            scanf("%d", &horas_entrada);
            printf("Minutos: \n");
            scanf("%d", &minutos_entrada);

            printf("Insira o horario de saida\n");
            printf("Horas: \n");
            scanf("%d", &horas_saida);
            printf("Minutos: \n");
            scanf("%d", &minutos_saidas);

            soma_entrada = (horas_entrada * 60) + minutos_entrada;
            soma_saida = (horas_saida * 60) + minutos_saidas;
            horario = (soma_saida - soma_entrada);
            calculo = ( 4.0 / 120.0) * horario;
            calculo2 = calculo + saldo_retornavel;
            break;
        
        case 2:
           printf("Insira o valor do saldo retornado\n");
            scanf("%f", &saldo_retornavel);

            printf("Insira o horario de entrada\n");
            printf("Horas: \n");
            scanf("%d", &horas_entrada);
            printf("Minutos: \n");
            scanf("%d", &minutos_entrada);

            printf("Insira o horario de saida\n");
            printf("Horas: \n");
            scanf("%d", &horas_saida);
            printf("Minutos: \n");
            scanf("%d", &minutos_saidas);

            soma_entrada = (horas_entrada * 60) + minutos_entrada;
            soma_saida = (horas_saida * 60) + minutos_saidas;
            horario = (soma_saida - soma_entrada);
            calculo = ( 3.60 / 120.0) * horario;
            calculo2 = calculo + saldo_retornavel;
            break;

        case 3:
           printf("Insira o valor do saldo retornado\n");
            scanf("%f", &saldo_retornavel);

            printf("Insira o horario de entrada\n");
            printf("Horas: \n");
            scanf("%d", &horas_entrada);
            printf("Minutos: \n");
            scanf("%d", &minutos_entrada);

            printf("Insira o horario de saida\n");
            printf("Horas: \n");
            scanf("%d", &horas_saida);
            printf("Minutos: \n");
            scanf("%d", &minutos_saidas);

            soma_entrada = (horas_entrada * 60) + minutos_entrada;
            soma_saida = (horas_saida * 60) + minutos_saidas;
            horario = (soma_saida - soma_entrada);
            calculo = ( 3.00 / 120.0) * horario;
            calculo2 = calculo + saldo_retornavel;
            break;

        case 4:
           printf("Insira o valor do saldo retornado\n");
            scanf("%f", &saldo_retornavel);

            printf("Insira o horario de entrada\n");
            printf("Horas: \n");
            scanf("%d", &horas_entrada);
            printf("Minutos: \n");
            scanf("%d", &minutos_entrada);

            printf("Insira o horario de saida\n");
            printf("Horas: \n");
            scanf("%d", &horas_saida);
            printf("Minutos: \n");
            scanf("%d", &minutos_saidas);

            soma_entrada = (horas_entrada * 60) + minutos_entrada;
            soma_saida = (horas_saida * 60) + minutos_saidas;
            horario = (soma_saida - soma_entrada);
            calculo = ( 3.60 / 120.0) * horario;
            calculo2 = calculo + saldo_retornavel;
            break;
        }

        printf("\n Valor do saldo retornavel: %f\n",saldo_retornavel);
        printf(" O tempo de estacionamento é: %d minutos\n O valor gasto é: %.2f\n O valor da soma do estorno e valor gasto: %.2f", horario, calculo, calculo2);
        return 0;
    }