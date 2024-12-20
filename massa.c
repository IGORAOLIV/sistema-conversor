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
}
