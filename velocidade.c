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
    }
}