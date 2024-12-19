#include <stdio.h>
#include "velocidade.h"


void converterVelocidade(){

    int  option;
    float valor,resultado;

    printf("Conversor de unidades de velocidade\n");
    printf("Escolha a conversão desejada:\n");
    printf("1. km/h para m/s\n");
    printf("2. km/h para mph\n");
    printf("3. m/s para km/h\n");
    printf("4. m/s para mph\n");
    printf("5. mph para km/h\n");
    printf("6. mph para m/s\n");
    printf("7. Sair\n");
    printf("Opção: ");
    scanf("%d", &option);
//A operação será definida aparti da opção que você escolher de 1 a 7.
    switch (option) {
//após isso o usuario informara o valor dentro do caso escolhido
        case 1:
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);   
            resultado = valor / 3.6;
//Após isso o valor será caculado
            printf("%.2f km/h = %.2f m/s\n", valor, resultado);
//E o seu resultado será exibido aqui
        break;
        case 2:
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
            resultado = valor * 0.621371;
            printf("%.2f km/h = %.2f mph\n", valor, resultado);
            break;
        case 3:
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
            resultado = valor * 3.6;
            printf("%.2f m/s = %.2f km/h\n", valor, resultado);
            break;
        case 4:
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
            resultado = valor * 2.23694;
            printf("%.2f m/s = %.2f mph\n", valor, resultado);
            break;
        case 5:
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
            resultado = valor / 0.621371;
            printf("%.2f mph = %.2f km/h\n", valor, resultado);
            break;
        case 6:
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
            resultado = valor / 2.23694;
            printf("%.2f mph = %.2f m/s\n", valor, resultado);
            break;
        case 7:
            printf("Finalizando operação!");
            break;    
        default:
            printf("Opção inválida!\n");
//caso o valor informado na opção não for um numero de 1 a 7 ele apresentara erro!                    
        }
            
}