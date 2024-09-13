#include<stdio.h>
#include<stdlib.h>

    int main(){

        float saldo_retornavel, calculo, calculo2, entrada, saida, horario;
        int tipo_calculadora;
        printf("tipo de calculadora\n 1 - carro_azul\n 2 - moto_azul\n 3 - carro_verde\n 4 - moto_verde\n");
        scanf("%d", &tipo_calculadora);
        switch (tipo_calculadora){
        case 1:
            printf("Insira o valor do saldo retornado\n");
            scanf("%f", &saldo_retornavel);
            printf("Insira o horario de entrada\n");
            scanf("%f", &entrada);
            printf("Insira o horario de saida\n");
            scanf("%f", &saida);
            horario = (saida - entrada) * 60;
            calculo = ( 4.0 / 120.0) * horario;
            calculo2 = calculo + saldo_retornavel;
            break;
        
        case 2:
            printf("Insira o valor do saldo retornado\n");
            scanf("%f", &saldo_retornavel);
            printf("Insira o horario de entrada\n");
            scanf("%f", &entrada);
            printf("Insira o horario de saida\n");
            scanf("%f", &saida);
            horario = (saida - entrada) * 60;
            calculo = ( 3.60 / 120.0) * horario;
            calculo2 = calculo + saldo_retornavel + 0.03;
            break;

         case 3:
            printf("Insira o valor do saldo retornado\n");
            scanf("%f", &saldo_retornavel);
            printf("Insira o horario de entrada\n");
            scanf("%f", &entrada);
            printf("Insira o horario de saida\n");
            scanf("%f", &saida);
            horario = (saida - entrada) * 60;
            calculo = ( 3.60 / 120.0) * horario;
            calculo2 = calculo + saldo_retornavel;
            break;

         case 4:
            printf("Insira o valor do saldo retornado\n");
            scanf("%f", &saldo_retornavel);
            printf("Insira o horario de entrada\n");
            scanf("%f", &entrada);
            printf("Insira o horario de saida\n");
            scanf("%f", &saida);
            horario = saida - entrada;
            calculo = ( 3.60 / 120.0) * horario;
            calculo2 = calculo + saldo_retornavel;
            break;
        }

        printf(" O tempo de estacionamento é: %.f minutos\n O valor gasto é: %.2f\n O valor da soma do estorno e valor gasto: %.2f", horario, calculo, calculo2);
        return 0;
    }