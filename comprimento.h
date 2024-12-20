#ifndef COMPRIMENTO_H
#define COMPRIMENTO_H

#include <stdio.h>

void comprimento()

`{
    int escolha;
    double valor;

    printf("Conversor de Unidades\n");
    printf("1. Metros para Centímetros\n");
    printf("2. Metros para milímetros\n");
    printf("3. Centímetros para Metros\n");
    printf("Escolha uma conversão (1-3): ");
    scanf("%d", &escolha);

    printf("Digite o valor para converter: ");
    scanf("%lf", &valor);


}


#endif
