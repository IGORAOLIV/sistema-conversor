#include <stdio.h>
#include "massa.h"

void converterMassa() {

    printf("Selecione a unidade inicial:\n");
    printf("1. Grama/n");
    printf("2. Quilograma/n");
    printf("3. Tonelada/n");

    int inicial, final;
    scanf("%d", &inicial);

    printf("Digite o valor: ");
    float valor1, valor2;
    scanf("%f", &valor1);

    printf("Escolha a unidade que deseja:\n");
    switch(inicial){
        case 1:
            printf("1. Quilograma\n");
            printf("2. Tonelada\n");

            scanf("%d", &final);

            switch(final){

                case 1:
                    //Quilograma
                    valor2 = valor1 / 1000;
                    printf("%.2fg é equivalente a %.2fkg\n", valor1, valor2);
                    break;

                case 2:
                    //Tonelada
                    valor2 = valor1 / 1000000;
                    printf("%.2fg é equivalente a %.2ft\n", valor1, valor2);
                    break;

                default:
                    printf("Opção inválida. Tenten novamente.\n");
            }
            break;
        case 2:
            printf("1. Grama\n");
            printf("2. Tonelada\n");
}
